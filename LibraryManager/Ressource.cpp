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
#include <stack>

using namespace std;

					////////////////////
					// Initialization //
					////////////////////

int Ressource::id_counter = 0;
stack<int> Ressource::ids;

					/////////////////
					// Constructor //
					/////////////////

Ressource::Ressource(){
	title = "Unknown";
	author = "Unknown";
	free = true;
	id = idSelect();
}

Ressource::Ressource(string _title, string _author){
	title = _title;
	author = _author;
	free = true;
	id = idSelect();
}

					////////////////
					// Destructor //
					////////////////

Ressource::~Ressource(){
	ids.push(id);
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

					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////

int Ressource::idSelect(){
	int buff;
	if (ids.empty()){
		return (id_counter++);
	}
	else{
		buff = ids.top();
		ids.pop();
		return buff;
	}
	return 0;
}

void Ressource::save(ofstream &saving){
	saving<<title<<" "<<author<<" ";
}

void Ressource::display(){
	cout<<id<<" "<<title<<" "<<author<<" ";
}
