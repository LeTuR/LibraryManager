//
//  DVD.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "DVD.hpp"
#include <stdio.h>
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
	VHS(_title, _author, _duration, _studio);
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

void DVD::save(){
    VHS::save();
    cout<<chapters;
}

					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////
