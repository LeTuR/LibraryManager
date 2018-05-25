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

Ressource::Ressource() {
	title = "Unknown";
	author = "Unknown";
	free = true;
	id = id_counter;
	id_counter++;
}

Ressource::Ressource(string _title, string _author) {
	title = _title;
	author = _author;
	free = true;
	id = id_counter;
}



////////////////
// Destructor //
////////////////

Ressource::~Ressource() {
	id_counter--;
}

//////////////
// Accessor //
//////////////

string Ressource::getTitle() {
	return title;
}

string Ressource::getAuthor() {
	return author;
}

int Ressource::getId() {
	return id;
}

bool Ressource::getDisponibility() {
	return free;
}

string Ressource::getInfo() {
	string info;
	return info;
}

/////////////
// Mutator //
/////////////

//////////
// Else //
//////////

void Ressource::save(ofstream &saving) {
	saving << title << " " << author << " ";
}

void Ressource::display() {
	cout << id << " " << title << " " << author << " ";
}

void Ressource::RessourceReset(int _id) {
	title = "Unknown";
	author = "Unknown";
	free = true;
	id = _id + 1;
}

bool Ressource::search(string searched) {
	if (searched == title || searched == author) {
		return true;
	}
	else {
		return false;
	}
}
int Ressource::idSelect() {
	int buff;
	if (ids.empty()) {
		return (id_counter++);
	}
	else {
		buff = ids.top();
		ids.pop();
		return buff;
	}
	return 0;
}