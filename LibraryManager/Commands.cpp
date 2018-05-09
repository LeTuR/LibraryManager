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
#include "Library.hpp"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Library *l = new Library();

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void add(string type){
	
	string input;
	string title;
	string author;
	//Book and Magazine
	int pages;
	string publication;
	string collection;
	string summary;
	string editor;
	int articles;
	//CD
	int duration;
	int chapters;
	string studio;
	//Digital_ressource
	string doc_type;
	int size;
	string path;
	//VHS and DVD	
	
	//RESSOURCE
	cout<<"What is the title?\n";
	cin>>title;
	cout<<"Who is the author?\n";
	cin>>author;
	
	//BOOK
	if (type == "Book" or type == "Magazine"){
		cout<<"How many pages?\n";
		cin>>pages;
		cout<<"Date of publication (MM/DD/YYYY)?\n";
		cin>>publication;
		cout<<"What is the collection?\n";
		cin>>collection;
		cout<<"What is the summary?\n";
		cin>>summary;
		//MAGAZINE
		if(type == "Magazine"){
			cout<<"Who is the editor?\n";
			cin>>editor;
			cout<<"How many articles?\n";
			cin>>articles;
			Magazine *r = new Magazine(title, author, pages, publication, collection, summary, editor, articles);
			l->addRessource(*r);
			cout<<"Magazine succefully added!\n";
		}
		else{
			Book *r = new Book(title, author, pages, publication, collection, summary);
			l->addRessource(*r);
			cout<<"Book succefully added!\n";
		}
	}
	
	//DIGITAL RESSOURCE
	else if (type == "Digital_Ressource"){
		cout<<"What is the type of document PDF, DOC or PTT?\n";
		cin>>doc_type;
		cout<<"What is the size?\n";
		cin>>size;
		cout<<"What is the path of the document?\n";
		cin>>path;
	}
	
	else if ((type == "VHS") or (type == "DVD")){
			cout<<"What is the duration (in seconds)\n";
			cin>>duration;
			cout<<"What is the studio?\n";
			cin>>studio;
		if (type == "DVD"){
				cout<<"How many chapters?\n";
				cin>>chapters;
				DVD *r = new DVD(title, author, duration, studio, chapters);
				l->addRessource(*r);
				cout<<"DVD succefully added!\n";
		}
			VHS *r = new VHS(title, author, duration, studio);
			l->addRessource(*r);
			cout<<"VHS succefully added!\n";
	}
	else if (type == "DVD"){
		
	}
	else{
		cerr<<"Expected a type, press L to see the list of types\n";
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void load(){
	string path;
	cout<<"Please type the path of the file you want to load"<<"\n";
	cin>>path;
	string const loadfile(path);
	
	ifstream loading(loadfile.c_str());
	if (loading){
		string type;
		string title;
		string author;
		//Book and Magazine
		int pages;
		string publication;
		string collection;
		string summary;
		string editor;
		int articles;
		//CD
		int duration;
		int chapters;
		string studio;
		//Digital_ressource
		string doc_type;
		int size;
		string path;
		string line;
		//VHS and DVD
		while(getline(loading, line)){
			//RESSOURCE
			loading>>type;
			loading>>title;
			loading>>author;
			//BOOK
			if (type == "Book" or type == "Magazine"){
				loading>>pages;
				loading>>publication;
				loading>>collection;
				loading>>summary;
				//MAGAZINE
				if(type == "Magazine"){
					loading>>editor;
					loading>>articles;
					Magazine *r = new Magazine(title, author, pages, publication, collection, summary, editor, articles);
					l->addRessource(*r);
				}
				else{
					Book *r = new Book(title, author, pages, publication, collection, summary);
					l->addRessource(*r);
				}
			}
			
			//DIGITAL RESSOURCE
			else if (type == "Digital_Ressource"){
				loading>>doc_type;
				loading>>size;
				loading>>path;
			}
			
			else if ((type == "VHS") or (type == "DVD")){
				loading>>duration;
				loading>>studio;
				if (type == "DVD"){
					loading>>chapters;
					DVD *r = new DVD(title, author, duration, studio, chapters);
					l->addRessource(*r);
				}
				VHS *r = new VHS(title, author, duration, studio);
				l->addRessource(*r);
			}
		}
		cout<<"Library succefully loaded!\n";
	}
	else{
		cerr<<"Error opening file path\n";
	}
	loading.close();
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void show(int id){
	
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

