//
//  main.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include "Commands.hpp"
#include "Ressource.hpp"
#include "Book.hpp"
#include "CD.hpp"
#include "Digital_Ressource.hpp"
#include "VHS.hpp"
#include "Magazine.hpp"
#include "DVD.hpp"
#include "Library.hpp"
#include "Commands.hpp"
#include <stdio.h>
#include <QApplication>
#include <QPushButton>

using namespace std;

int main(int argc, char * argv[]) {
	
	Library *l = new Library();
	
    string input;
	string type;
	string filename;
	int id;
    QApplication app(argc, argv);
    QPushButton bouton("Salut les Zéros, la forme ?");
    bouton.show();
    return app.exec();
}
