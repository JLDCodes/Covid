/*!	Tables for amino acid and codon names
	\file		codontable.h
	\author		Garth Santor
	\date		2019-05-10
*/


#include <string>

#define NUM_CODONS 64
#define NUM_AMINO_ACIDS 23


std::string codon_array[NUM_CODONS] = { "AAA", "AAC", "AAG", "AAT",
									"ACA", "ACC", "ACG", "ACT",
									"AGA", "AGC", "AGG", "AGT",
									"ATA", "ATC", "ATG", "ATT",
									"CAA", "CAC", "CAG", "CAT",
									"CCA", "CCC", "CCG", "CCT",
									"CGA", "CGC", "CGG", "CGT",
									"CTA", "CTC", "CTG", "CTT",
									"GAA", "GAC", "GAG", "GAT",
									"GCA", "GCC", "GCG", "GCT",
									"GGA", "GGC", "GGG", "GGT",
									"GTA", "GTC", "GTG", "GTT",
									"TAA", "TAC", "TAG", "TAT",
									"TCA", "TCC", "TCG", "TCT",
									"TGA", "TGC", "TGG", "TGT",
									"TTA", "TTC", "TTG", "TTT" };

std::string codon_amino_acid_array[NUM_CODONS] = { "Lysine", "Asparagine", "Lysine", "Asparagine",
										"Threonine", "Threonine", "Threonine", "Threonine",
										"Arginine", "Serine", "Arginine", "Serine",
										"IsoLeucine", "IsoLeucine", "Methionine", "IsoLeucine",
										"Glutamine", "Histidine", "Glutamine", "Histidine",
										"Proline", "Proline", "Proline", "Proline",
										"Arginine", "Arginine", "Arginine", "Arginine",
										"Leucine", "Leucine", "Leucine", "Leucine",
										"Glutamic acid", "Aspartic acid", "Glutamic acid", "Aspartic acid",
										"Alanine", "Alanine", "Alanine", "Alanine",
										"Glycine", "Glycine", "Glycine", "Glycine",
										"Valine", "Valine", "Valine", "Valine",
										"Stop (Ochre)", "Tyrosine", "Stop (Amber)", "Tyrosine",
										"Serine", "Serine", "Serine", "Serine",
										"Stop (Opal)", "Cysteine", "Tryptophan", "Cysteine",
										"Leucine", "Phenylalanine", "Leucine", "Phenylalanine" };

std::string aminoacid_names[NUM_AMINO_ACIDS]{ "Alanine",		"Arginine",			"Asparagine",		"Aspartic acid",
	"Cysteine",		"Glutamine",		"Glutamic acid",	"Glycine",
	"Histidine",	"IsoLeucine",		"Leucine",			"Lysine",
	"Methionine",	"Phenylalanine",	"Proline",			"Serine",
	"Stop (Ochre)",	"Stop (Opal)",		"Stop (Amber)",		"Threonine",
	"Tryptophan",	"Tyrosine",			"Valine", };
