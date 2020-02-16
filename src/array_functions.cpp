/*
 * functionstocomplete.cpp
 *
 *  Created on: Sep 10, 2017
 *      Author: keith
 */

//============================================================================
//	TODO add necessary includes here
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "array_functions.h"



//============================================================================

//============================================================================
//	stuff you will need
//============================================================================
//TODO define a structure to track words and number of times they occur
void extractTokensFromLine(std::string &myString) {
	stringstream ss(myString);
	string tempToken;

while (getline(ss, tempToken, CHAR_TO_SEARCH_FOR)) {
	processToken(tempToken);
	}
}
//TODO add a global array of entry structs (global to this file)
struct entry {
	string word;
	int number_occurences;
};
//TODO add variable to keep track of next available slot in array

//TODO define all functions in header file
void clearArray() {
	std::fill_n(array, elementCount, 0);
//Array.Clear(myArray, 0, myArray.Length);
}
int getArraySize();
std::string getArrayWordAt(int i);
int getArrayWord_NumbOccur_At(int i);
bool processFile(std::fstream &myfstream);
void processLine(std::string &myString);
void processToken(std::string &token);
void closeFile(std::fstream& myfile);
int writeArraytoFile(const std::string &outputfilename);
void sortArray(constants::sortOrder so);
//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!

