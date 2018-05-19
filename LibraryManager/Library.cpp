#include "Library.hpp"
#include "Ressource.hpp"
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

void Library::clearID(){
	Ressource::id_counter = 0;
	while(not(Ressource::ids.empty()))Ressource::ids.pop();
}

void Library::addRessource(Ressource *r){
	listRessources.push_back(r);
}

long Library::sizeRessources(){
	return listRessources.size();
}

