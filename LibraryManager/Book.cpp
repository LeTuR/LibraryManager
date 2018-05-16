//
//  Book.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "Book.hpp"
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

Book::Book(){
	pages = 0;
	publication = "Unknown";
	collection = "Unknown";
	summary = "Unknown";
}

Book::Book(string _title, string _author, int _pages, string _publication, string _collection, string _summary){
	Ressource(_title, _author);
	pages = _pages;
	publication = _publication;
	collection = _collection;
	summary = _summary;
}

					////////////////
					// Destructor //
					////////////////

Book::~Book(){
	
}

					//////////////
					// Accessor //
					//////////////

int Book::getPages(){
	return pages;
}
string Book::getPublication(){
	return publication;
}
string Book::getCollection(){
	return collection;
}
string Book::getSummary(){
	return summary;
}

					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////

void Book::save(ofstream &saving){
	Ressource::save(saving);
	saving<<pages<<publication<<collection<<summary;
}

void Book::display(){
	Ressource::display();
	cout<<pages<<publication<<collection<<summary;
}

