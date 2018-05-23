//
//  DVD.hpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef DVD_hpp
#define DVD_hpp

#include <iostream>
#include "VHS.hpp"

class DVD : public VHS {

public:

	DVD();
	DVD(std::string _title, std::string _author, int _duration, std::string _studio, int _chapters);
	DVD(int _chapters);
	~DVD();

	virtual void save(std::ofstream &saving);
	virtual void display();
    void search(std::string searched);


	int getChapters();

private:
	int chapters;

};

#endif /* DVD_hpp */