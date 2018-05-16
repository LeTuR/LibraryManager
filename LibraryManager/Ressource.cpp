//
//  Ressource.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "Ressource.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

					////////////////////
					// Initialization //
					////////////////////

int Ressource::id_counter = 0;

					/////////////////
					// Constructor //
					/////////////////

Ressource::Ressource(){
	title = "Unknown";
	author = "Unknown";
	free = true;
	id = id_counter;
	id_counter++;
}

Ressource::Ressource(string _title, string _author){
	title = _title;
	author = _author;
	free = true;
	id = id_counter;
	id_counter++;
}

					////////////////
					// Destructor //
					////////////////

Ressource::~Ressource(){
	//id_counter--;
}

					//////////////
					// Accessor //
					//////////////

string Ressource::getTitle(){
	return title;
}

string Ressource::getAuthor(){
	return author;
}

int Ressource::getId(){
	return id;
}

bool Ressource::getDisponibility(){
	return free;
}

string Ressource::getInfo(){
	string info;
	return info;
}

					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////

void Ressource::save(ofstream &saving){
	saving<<title<<" "<<author<<" "<<id<<" "<<free;
}

void Ressource::display(){
	cout<<title<<" "<<author<<" "<<id<<" "<<free;
}
