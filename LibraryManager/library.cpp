#include "Library.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

					////////////////////
					// Initialization //
					////////////////////

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

					/////////////
					// Mutator //
					/////////////

					//////////
					// Else //
					//////////

void Library::addRessource(Ressource *r){
	listRessources.push_back(*r);
}

void Library::showRessource(int id){
	listRessources[id].getInfo();
}
