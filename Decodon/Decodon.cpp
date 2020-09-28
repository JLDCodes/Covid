/*!	Convert a nucleotide stream to binary encoded codons.
	\file		Decodon.cpp
	\author		Jean-Luc Desjardins
	\date		2020-08-03
*/

#include <iostream>
#include "../tools/codontable.cpp"

using namespace std;

int main() {
	int input;
	while (cin >> input) {
		cout << input << "\t" << codon_array[input] << "\t" << codon_amino_acid_array[input] << endl;
	}
	return EXIT_SUCCESS;
}