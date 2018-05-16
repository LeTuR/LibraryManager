#include "Library.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

					////////////////////
					// Initialization //
					////////////////////

int Library::ressource_counter = 0;

					/////////////////
					// Constructor //
					/////////////////

Library::Library(){
	
}

					////////////////
					// Destructor //
					////////////////

Library::~Library(){
	
}
					//////////////
					// Accessor //
					//////////////
int Library::getRessource_counter(){
	return ressource_counter;
}
					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////

void Library::addRessource(Ressource *r){
	listRessources.push_back(*r);
	ressource_counter++;
}

void Library::showRessource(int id){
	listRessources[id].getInfo();
}
