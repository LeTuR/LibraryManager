//
//  CD.hpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef CD_hpp
#define CD_hpp

#include <iostream>
#include <string>
#include "Ressource.hpp"


class CD : public Ressource {

private:
	int duration;
	int chapters;
	std::string studio;

public:
	CD();
	CD(std::string _title, std::string _author, int _duration, int _chapters, std::string _studio);
	CD(int _duration, int _chapters, std::string _studio);
	~CD();

    void save(std::ofstream &saving);
	void display();
    void search(std::string searched);

	int getDuration();
	int getChapters();
	std::string getStudio();


};

#endif /* CD_hpp */