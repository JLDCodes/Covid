/*!	Convert a nucleotide stream to binary encoded codons.
	\file		encodon.cpp
	\author		Jean-Luc Desjardins
	\date		2020-08-03
*/

#include <iostream>
#include "../tools/codontools.cpp"

using namespace std;

int main() {

	char ch;
	int countTriples = 0;
	int codonNumberArray[3];
	int codonNumber;
	while (cin >> ch) {
		if (isNucleotide(ch)) {
			codonNumberArray[countTriples] = nucleotideToDecimal(ch);
			++countTriples;
		}
		if (countTriples == 3) {
			codonNumber = getCondonNumber(codonNumberArray[0], codonNumberArray[1], codonNumberArray[2]);
			cout << codonNumber << " ";
			countTriples = 0;
		}
	}
	return EXIT_SUCCESS;
}
