//
//  DVD.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "DVD.hpp"
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

DVD::DVD(){
	chapters = 0;
}

DVD::	DVD(std::string _title, std::string _author, int _duration, std::string _studio, int _chapters){
	title = _title;
	author = _author;
	free = true;
	id = id_counter;
	id_counter++;
	duration = _duration;
	studio = _studio;
	chapters = _chapters;
}

					////////////////
					// Destructor //
					////////////////

DVD::~DVD(){
	
}

					//////////////
					// Accessor //
					//////////////

int DVD::getChapters(){
	return chapters;
}

					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////

void DVD::save(ofstream &saving){
	VHS::save(saving);
	saving<<" "<<chapters;
}

void DVD::display(){
	VHS::display();
	cout<<" "<<chapters;
}
