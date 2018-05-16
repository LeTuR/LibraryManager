//
//  Magazine.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "Magazine.hpp"
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

Magazine::Magazine(){
	editor = "Unknown";
	articles = 0;
}

Magazine::Magazine(string _title, string _author, int _pages, string _publication, string _collection, string _summary, string _editor, int _articles){
	title = _title;
	author = _author;
	free = true;
	id = id_counter;
	id_counter++;
	pages = _pages;
	publication = _publication;
	collection = _collection;
	summary = _summary;
	editor = _editor;
	articles = _articles;
}

					////////////////
					// Destructor //
					////////////////

Magazine::~Magazine(){
	
}

					//////////////
					// Accessor //
					//////////////

string Magazine::getEditors(){
	return editor;
}

int Magazine::getArticles(){
	return articles;
}
					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////

void Magazine::save(ofstream &saving){
	Book::save(saving);
	saving<<" "<<editor<<" "<<articles;
}

void Magazine::display(){
	Book::display();
	cout<<" "<<editor<<" "<<articles;
}
