//
//  Commands.cpp
//  LibraryManager
//
//  Created by MagicLetur on 25/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "Commands.hpp"
#include "Ressource.hpp"
#include "Book.hpp"
#include "CD.hpp"
#include "Digital_Ressource.hpp"
#include "VHS.hpp"
#include "Magazine.hpp"
#include "DVD.hpp"

#include <iostream>
#include <string>

using namespace std;

void add(string type){
	string input;
	string title;
	string author;
	int pages;
	string publication;
	string collection;
	string summary;
	string editor;
	int articles;
	cout<<"What is the title?\n";
	cin>>title;
	cout<<"Who is the author?\n";
	cin>>author;
	if (type == "Book" or "Magazine"){
		cout<<"How many pages?\n";
		cin>>pages;
		cout<<"Date of publication (MM/DD/YYYY)?\n";
		cin>>publication;
		cout<<"What is the collection?\n";
		cin>>collection;
		cout<<"What is the summary?\n";
		cin>>summary;
		if(type == "Magazine"){
			cout<<"Who is the editor?\n";
			cin>>editor;
			cout<<"How many articles?\n";
			cin>>articles;
			Magazine *r = new Magazine(title, author, pages, publication, collection, summary, editor, articles);
		}
		else{
			Book *r = new Book(title, author, pages, publication, collection, summary);
		}
	}
	
	if (type == "CD"){
	}
	
	if (type == "Digital_Ressource"){
		
	}
	if (type == "VHS"){
		
	}
	if (type == "DVD"){
		
	}
	if (type == "Magazine"){
		
	}
	else{
		cerr<<"Expected a type, press L to see the list of types";
		cin>>input;
		if (input == "L"){
			cout<<"Book"<<"\n";
			cout<<"CD"<<"\n";
			cout<<"Digital_Ressource"<<"\n";
			cout<<"VHS"<<"\n";
			cout<<"DVD"<<"\n";
			cout<<"Magazine"<<"\n";
		}
	}
}
