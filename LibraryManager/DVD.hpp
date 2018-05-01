//
//  DVD.hpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef DVD_hpp
#define DVD_hpp

#include <stdio.h>
#include "VHS.hpp"

class DVD : public VHS{
	
public:
	
	DVD();
<<<<<<< HEAD
	DVD(std::string _title, std::string _author, int _duration, std::string _studio, int _chapters);
=======
	DVD(int _chapters);
>>>>>>> master
	~DVD();
	
	int getChapters();
	
private:
	int chapters;
	
};

#endif /* DVD_hpp */
