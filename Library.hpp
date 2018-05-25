//
//  Library.hpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef Library_hpp
#define Library_hpp

#include <iostream>
#include <vector>
#include <string>
#include "Ressource.hpp"

class Library {

public:

	int static ressource_counter;

	Library();
	~Library();
	void addRessource(Ressource *r);
	void loadRessources();
	void saveRessources();
	void search(std::string);
	void clear();
	void showId(int id);
	void showRessource(int id);
	void DecrementCounter();
	void clearID();

	int getRessource_counter();

	std::vector<Ressource*> listRessources;
};

#endif /* Library_hpp */