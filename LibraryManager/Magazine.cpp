//
//  Magazine.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "Magazine.hpp"
#include <stdio.h>
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

<<<<<<< HEAD
Magazine::Magazine(string _title, string _author, int _pages, string _publication, string _collection, string _summary, string _editor, int _articles){
	Book(_title, _author, _pages, _publication, _collection, _summary);
=======
Magazine::Magazine(string _editor, int _articles){
>>>>>>> master
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
