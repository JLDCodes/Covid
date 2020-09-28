/*!	Functions for codon reading, writing, conversion, etc.
	\file		codontools.cpp
	\author		Jean-Luc Desjardins
	\date		2020-08-10
*/

bool isNucleotide(char ch) {
	switch (ch) {
	case 'a': case 'c': case 'g': case 't': return true;
	default: return false;
	}
}

int nucleotideToDecimal(char ch) {
	switch (ch) {
	case 'a': return 0;
	case 'c': return 1;
	case 'g': return 2;
	case 't': return 3;
	default: return EXIT_FAILURE; //something went wrong validating 
	}
}

int getCondonNumber(char one, char two, char three) {
	return (one * 4 + two) * 4 + three;
}