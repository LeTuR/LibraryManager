//
//  VHS.hpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef VHS_hpp
#define VHS_hpp

#include <stdio.h>
#include <string>
#include "Ressource.hpp"

class VHS : public Ressource{

protected:
	int duration;
	std::string studio;
	
public:
	VHS();
	VHS(std::string _title, std::string _author, int _duration, std::string _studio);
	VHS(int _duration, std::string _studio);
	~VHS();

    virtual void save();
	
	int getDuration();
	std::string getStudio();
};

#endif /* VHS_hpp */
