//
//  Ressource.hpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef Ressource_hpp
#define Ressource_hpp

#include <iostream>
#include <string>
#include <stack>

class Ressource {

public:
	static int id_counter;
	static std::stack<int> ids;

public:
	std::string title;
	std::string author;
	int id;
	bool free;

	Ressource();
	Ressource(std::string _title, std::string _author);
	~Ressource();

	virtual void save(std::ofstream &saving);
	virtual void display();
	void RessourceReset(int _id);
	virtual bool search(std::string searched);
	int idSelect();


	std::string getTitle();
	std::string getAuthor();
	bool getDisponibility();
	int getId();
	std::string getInfo();
};

#endif /* Ressource_hpp */