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

struct entry {
	string word;
	int number_occurences;
};

//TODO add a global array of entry structs (global to this file)
entry myArray[MAX_WORDS];

//TODO add variable to keep track of next available slot in array
int count = 0;
//TODO define all functions in header file
void clearArray() {
for (int i = 0; i < myArray.length; ++i) {
	myArray[i].word = "";
	myArray.number_occurences = 0;
	count = 0;
}
}
int getArraySize(){
return count;
}

std::string getArrayWordAt(int i) {
return myArray[i].word;
}

int getArrayWord_NumbOccur_At(int i) {
return myArray[i].number_occurences;
}

bool processFile(std::fstream &myfstream);
void processLine(std::string &myString);
void processToken(std::string &token);
void closeFile(std::fstream& myfile);
int writeArraytoFile(const std::string &outputfilename);
void sortArray(constants::sortOrder so);
//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!

