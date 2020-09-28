/*!	Analyze a nucleotide stream and list a table of codons and a table of amino acids
	\file		Encodon.cpp
	\author		Jean-Luc Desjardins
	\date		2020-08-03
*/

#include <iostream>
#include <iomanip>
#include <Windows.h>
#include "../tools/codontable.cpp"
#include "../tools/codontools.cpp"


using namespace std;

int main() {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);

	char ch;
	int countTriples = 0;
	int codonNumberArray[3];
	string codon;
	int codonNumber;
	int codonFrequency[64] = { 0 };
	unsigned codonCounter = 0;
	while (cin >> ch) {
		if (isNucleotide(ch)) {
			codonNumberArray[countTriples] = nucleotideToDecimal(ch);
			++countTriples;
		}
		if (countTriples == 3) {
			++codonCounter;
			countTriples = 0;
			codonNumber = getCondonNumber(codonNumberArray[0], codonNumberArray[1],codonNumberArray[2]);
			codonFrequency[codonNumber]++;
		}	
	}
	
	cout << "Codon Table" << endl;
	for (unsigned i = 0; i < NUM_CODONS; ++i) {
		cout << left << codon_array[i] << setw(2) << " " << setw(3) << i << " " << setw(3)<< codonFrequency[i] << "  " << fixed << setprecision(3) << setw(5) <<  (double)codonFrequency[i]*100 / codonCounter << "%" << setw(2) << "  " << codon_amino_acid_array[i] << endl;
	}


	int aminoAcidFrequency[NUM_AMINO_ACIDS] = { 0 };
	for (int i = 0; i < NUM_AMINO_ACIDS; ++i) {
		for (int j = 0; j < NUM_CODONS; ++j) {
			if (aminoacid_names[i] == codon_amino_acid_array[j]) { // Iterate through the amino acid names and add the amino acid that is made from each codon
				aminoAcidFrequency[i] += codonFrequency[j]; 
			}
		}
	}

	cout << "\nAmino Acid Table" << endl;
	for (int i = 0; i < NUM_AMINO_ACIDS; ++i) {
		cout << left << setw(15)<<  aminoacid_names[i] << aminoAcidFrequency[i] << "  " << setw(3) <<(double)aminoAcidFrequency[i]*100/ codonCounter << "%" <<endl;
	}
	return EXIT_SUCCESS;
}
