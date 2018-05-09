//
//  Library.hpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef Library_hpp
#define Library_hpp

#include <stdio.h>
#include <vector>
#include <string>
#include "Ressource.hpp"

class Library{
		
public:
	Library();
	~Library();
	void addRessource(Ressource r);
	void showRessource(int id);
	std::vector<Ressource> listRessources;
	};

#endif /* Library_hpp */
