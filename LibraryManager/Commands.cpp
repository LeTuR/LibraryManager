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

/*---------------------show-----------------------------*/

void show(Library *l, int id){
	if(id < l->getRessource_counter() and id>=0){
		((l->listRessources)[id])->display();
	}
	else{
		cerr<<"This ID doesn't exist."<<"\n";
	}
	cout<<"\n";
}

/*-------------------------add------------------------------*/

void add(Library *l, string type){
	
	//Verification flag
	int test = 1;
	
	//Ressources
    string input;
    string title;
    string author;
    //Book and Magazine
	
    string spages;
	int pages = 0;
    string publication;
    string collection;
    string summary;
    string editor;
	string sarticles;
	int articles = 0;
    //CD
	string sduration;
	int duration = 0;
	string schapters;
	int chapters = 0;
    string studio;
    //Digital_ressource
    string doc_type;
	string ssize;
    int size = 0;
    string path;
    //VHS and DVD

    //RESSOURCE
    cout<<"What is the title?\n";
    cin>>title;
    cout<<"Who is the author?\n";
    cin>>author;

    //BOOK
    if (type == "Book" or type == "Magazine"){
		//Testing for a valid input
		while (test) {
			cout<<"How many pages?\n";
			cin>>spages;
			try {
				pages = stoi(spages);
				test = 0;
			} catch (const std::invalid_argument a) {
				cerr<<"Please enter a valid number"<<"\n";
			}
		}
		test = 1;
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
			//Testing for a valid input
			while (test) {
				cout<<"How many articles?\n";
				cin>>sarticles;
				try {
					articles = stoi(sarticles);
					test = 0;
				} catch (const std::invalid_argument a) {
					cerr<<"Please enter a valid number"<<"\n";
				}
			}
			test = 1;
			Magazine *r = new Magazine(title, author, pages, publication, collection, summary, editor, articles);
            l->addRessource(r);
            cout<<"Magazine succefully added!\n";
        }
        else{
            Book *r = new Book(title, author, pages, publication, collection, summary);
            l->addRessource(r);
            cout<<"Book succefully added!\n";
        }
    }

    //DIGITAL RESSOURCE
    else if (type == "Digital_Ressource"){
        cout<<"What is the type of document PDF, DOC or PTT?\n";
        cin>>doc_type;
		while (test) {
			cout<<"What is the size?\n";
			cin>>ssize;
			try {
				size = stoi(ssize);
				test = 0;
			} catch (const std::invalid_argument a) {
				cerr<<"Please enter a valid number"<<"\n";
			}
		}
		test = 1;
		
        cout<<"What is the path of the document?\n";
        cin>>path;
    }

    //VHS
    else if ((type == "VHS") or (type == "DVD") or (type == "CD")){
		while (test) {
			cout<<"What is the duration (in seconds)\n";
			cin>>sduration;
			try {
				duration = stoi(sduration);
				test = 0;
			} catch (const std::invalid_argument a) {
				cerr<<"Please enter a valid number"<<"\n";
			}
		}
		test = 1;
		cout<<"What is the studio?\n";
		cin>>studio;
        //DVD
        if ((type == "DVD") or (type == "CD")){
			while (test) {
				cout<<"How many chapters?\n";
				cin>>schapters;
				try {
					chapters = stoi(schapters);
					test = 0;
				} catch (const std::invalid_argument a) {
					cerr<<"Please enter a valid number"<<"\n";
				}
			}
			test = 1;
			if (type == "DVD") {
				DVD *r = new DVD(title, author, duration, studio, chapters);
				l->addRessource(r);
				cout<<"DVD succefully added!\n";
			}
			//CD
			else {
				CD *r = new CD(title, author, duration, chapters, studio);
				l->addRessource(r);
				cout<<"CD succefully added!\n";
			}
        }
            VHS *r = new VHS(title, author, duration, studio);
            l->addRessource(r);
            cout<<"VHS succefully added!\n";
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

/*--------------------------------load-----------------------------*/

void load(Library *l){
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
                    l->addRessource(r);
                }
                else{
                    Book *r = new Book(title, author, pages, publication, collection, summary);
					l->addRessource(r);
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
                    l->addRessource(r);
                }
                VHS *r = new VHS(title, author, duration, studio);
                l->addRessource(r);
            }
        }
        cout<<"Library succefully loaded!\n";
    }
    else{
        cerr<<"Error opening file path\n";
    }
    loading.close();
}

/*-------------------------------------save---------------------------------*/

void save(Library *l, string filename){

    ofstream saving(filename, ios::out | ios::trunc);
    if(saving)
    {
		for(int i = 0; i<(l->getRessource_counter()); i++){
			((l->listRessources)[i])->save(saving);
			saving.close();
		}
    }

    else
        cerr << "Cannot create the file !" << endl;

}
