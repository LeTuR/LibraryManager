#include "Library.hpp"
#include "Ressource.hpp"
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

Library::Library() {

}

////////////////
// Destructor //
////////////////

Library::~Library() {

}
//////////////
// Accessor //
//////////////
int Library::getRessource_counter() {
	return ressource_counter;
}
/////////////
// Mutator //
/////////////

//////////
// Else //
//////////

void Library::addRessource(Ressource *r) {
	listRessources.push_back(r);
	ressource_counter++;
}

void Library::showRessource(int id) {
	listRessources[id]->getInfo();
}

void Library::DecrementCounter() {
	ressource_counter--;
}

void Library::clearID() {
	Ressource::id_counter = 0;
	while (not(Ressource::ids.empty()))Ressource::ids.pop();
}