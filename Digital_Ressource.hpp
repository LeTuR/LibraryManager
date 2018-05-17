//
//  Digital_Ressource.hpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef Digital_Ressource_hpp
#define Digital_Ressource_hpp

#include <iostream>
#include <string>
#include "Ressource.hpp"

enum doc_type { PDF, DOC, PPT };

class Digital_Ressource : public Ressource {

public:
	Digital_Ressource();
	Digital_Ressource(std::string _title, std::string _author, doc_type _type, int _size, std::string _path);
	~Digital_Ressource();

	virtual void save(std::ofstream &saving);
	virtual void display();

	doc_type getType();
	int getSize();
	std::string getPath();

private:
	doc_type type;
	int size;
	std::string path;

};

#endif /* Digital_Ressource_hpp */