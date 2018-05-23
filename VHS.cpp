//
//  VHS.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "VHS.hpp"
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

VHS::VHS() {
	duration = 0;
	studio = "Unknown";
}

VHS::VHS(string _title, string _author, int _duration, string _studio) {
	title = _title;
	author = _author;
	free = true;
	id = id_counter;
	duration = _duration;
	studio = _studio;
}

////////////////
// Destructor //
////////////////

VHS::~VHS() {

}

//////////////
// Accessor //
//////////////

int VHS::getDuration() {
	return duration;
}

string VHS::getStudio() {
	return studio;
}

/////////////
// Mutator //
/////////////

//////////
// Else //
//////////

void VHS::save(ofstream &saving) {
	Ressource::save(saving);
	saving << duration << " " << studio;
}

void VHS::display() {
	Ressource::display();
	cout << duration << " " << studio;
}

bool VHS::search(string searched) {
    Ressource::search(searched);
    if ("searched"==studio){
        return true;
    }
}
