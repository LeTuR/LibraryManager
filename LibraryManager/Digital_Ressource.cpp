//
//  Digital_Ressource.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "Digital_Ressource.hpp"
#include <stdio.h>
#include <string>

using namespace std;

					////////////////////
					// Initialization //
					////////////////////

					/////////////////
					// Constructor //
					/////////////////

Digital_Ressource::Digital_Ressource(string _title, string _author, doc_type _type, int _size, string _path){
	Ressource(_title, _author);
	type = _type;
	size = _size;
	path = _path;
}
					////////////////
					// Destructor //
					////////////////

Digital_Ressource::~Digital_Ressource(){
	
}

					//////////////
					// Accessor //
					//////////////

doc_type Digital_Ressource::getType(){
	return type;
}

int Digital_Ressource::getSize(){
	return size;
}

string Digital_Ressource::getPath(){
	return path;
}

					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////
