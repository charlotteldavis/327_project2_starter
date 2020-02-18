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
#include <array>
#include "array_functions.h"
#include "constants.h"
using namespace std;

const std::string MYFILE = "data/testdata_full.txt";
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
entry myArray[1000]; //!!!!doesnt recognize max words
string testArray[1000];
//TODO add variable to keep track of next available slot in array
int count = 0;
//TODO define all functions in header file
void clearArray() {
for (int i = 0; i < sizeof(myArray); ++i) {
	myArray[i].word = "";
	myArray[i].number_occurences = 0;
	count = 0;
}
}
int getArraySize(){//couldn't I use sizeof?
return count;
}

std::string getArrayWordAt(int i) {
return myArray[i].word;
}

int getArrayWord_NumbOccur_At(int i) {
return myArray[i].number_occurences;
}

bool processFile(std::fstream &myfstream){
	myfstream.open(MYFILE.c_str());
	std::string line;
		while (!myfstream.eof()) {
			getline(myfstream, line);
			processLine(line);
		}
		if (!myfstream.is_open()){
			return false;
		}
		else {
			return true;
		}
	}

void processLine(std::string &myString){
	std::cout<< testArray[count];
	++count;

}
void processToken(std::string &token);
bool openFile(std::fstream& myfile, const std::string& myFileName,std::ios_base::openmode mode = std::ios_base::in);

void closeFile(std::fstream& myfile) {
	if (myfile.is_open()){
		myfile.close();
	}
}
int writeArraytoFile(const std::string &outputfilename);
void sortArray(constants::sortOrder so);
//TODO look in utilities.h for useful functions, particularly strip_unwanted_chars!

