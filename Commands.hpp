//
//  Commands.hpp
//  LibraryManager
//
//  Created by MagicLetur on 25/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#ifndef Commands_hpp
#define Commands_hpp


#include "Commands.hpp"
#include "Ressource.hpp"
#include "Book.hpp"
#include "CD.hpp"
#include "Digital_Ressource.hpp"
#include "VHS.hpp"
#include "Magazine.hpp"
#include "DVD.hpp"
#include "Library.hpp"

#include <stdio.h>
#include <string>

void add(Library *l, std::string type);
void load(Library *l);
void show(Library *l, int id);
void save(Library *l, std::string filename);
void list(Library *l);
void remove(Library *l, int id);

void reset(Library *l);
int search(Library *subtempl, Library *templ, Library *l, std::string searched, int sizetempl);
int clear(Library *templ);

#endif /* Commands_hpp */