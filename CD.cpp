//
//  CD.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "CD.hpp"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

////////////////////
// Initialization //
////////////////////

/////////////////
// Constructor //
/////////////////

CD::CD() {
	duration = 0;
	chapters = 0;
	studio = "Unknown";
}

CD::CD(string _title, string _author, int _duration, int _chapters, string _studio) {
	title = _title;
	author = _author;
	free = true;
	id = id_counter;
	duration = _duration;
	chapters = _chapters;
	studio = _studio;
}

////////////////
// Destructor //
////////////////
CD::~CD() {

}
//////////////
// Accessor //
//////////////

int CD::getDuration() {
	return duration;
}
int CD::getChapters() {
	return chapters;
}
string CD::getStudio() {
	return studio;
}

/////////////
// Mutator //
/////////////

//////////
// Else //
//////////

void CD::save(ofstream &saving) {
	Ressource::save(saving);
	saving << duration << " " << chapters << " " << studio;
}

void CD::display() {
	Ressource::display();
	cout << duration << " " << chapters << " " << studio;
}

bool CD::search(string searched) {
	Ressource::search(searched);
	if (searched == studio) {
		return true;
	}
	else {
		return false;
	}
}