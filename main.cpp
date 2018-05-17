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
#include <iostream>
#include "Commands.hpp"

using namespace std;

int main(int argc, const char * argv[]) {

	Library *l = new Library();

	string input;
	string type;
	string filename;
	int id;
	int end = 0;

	cout << "Welcome to the Library Manager!\n";
	while (end == 0) {
		cout << "Please enter a command, to see the list of commands type HELP, if you want to exit type EXIT\n";
		cin >> input;
		if (input == "HELP") {
			cout << "--------------------\n";
			cout << "List of commands:\n";
			cout << "ADD   LOAD\n";
			cout << "BYE   ADD     LOAD\n";
			cout << "SAVE  SEARCH  CLEAR\n";
			cout << "LIST  SHOW    DELETE\n";
			cout << "RESET HELP    EXIT\n";
			cout << "--------------------\n" << "\n";
			cout << "Please enter a command, to see the list of commands type HELP, if you want to exit type EXIT\n";
		}

		else if (input == "ADD") {
			cin >> type;
			add(l, type);
		}

		else if (input == "LOAD") {
			load(l);
		}

		else if (input == "SAVE") {
			cin >> filename;
			save(l, filename);
		}

		else if (input == "SEARCH") {

		}

		else if (input == "CLEAR") {

		}

		else if (input == "LIST") {
			list(l);
		}

		else if (input == "SHOW") {
			cin >> id;
			show(l, id);
		}

		else if (input == "DELETE") {
			cin >> id;
			remove(l, id);
		}

		else if (input == "RESET") {

		}

		else if (input == "EXIT") {
			end = 1;
		}
	}
	cout << "\n" << "Thanks for using Library Manager\n";
	cout << "Goodbye!\n" << "\n";
	return 0;
}