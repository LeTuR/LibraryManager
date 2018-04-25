//
//  main.cpp
//  LibraryManager
//
//  Created by MagicLetur on 12/04/2018.
//  Copyright © 2018 Cesare-Herriau. All rights reserved.
//

#include <iostream>
#include "Commands.hpp"


using namespace std;


int main(int argc, const char * argv[]) {
	string input;
	string type;
	int end = 0;
	cout << "Welcome to the Library Manager:\n";
	cout << "Please enter a command, to see the list of commands type HELP, if you want to exit type EXIT\n";
	while(end == 0){
		cin>>input>>type;
		
		if (input == "HELP"){
			cout << "--------------------\n";
			cout << "List of commands:\n";
			cout << "ADD   LOAD\n";
			cout << "SAVE  SEARCH  CLEAR\n";
			cout << "LIST  SHOW    DELETE\n";
			cout << "RESET HELP    EXIT\n";
			cout << "--------------------\n"<<"\n";
			cout << "Please enter a command, to see the list of commands type HELP, if you want to exit type EXIT\n";
		}
		
		if (input == "ADD"){
			
		}
		
		if (input == "LOAD"){
			
		}
		
		if (input == "SAVE"){
			
		}
		
		if (input == "SEARCH"){
			
		}
		
		if (input == "CLEAR"){
			
		}
		
		if (input == "LIST"){
			
		}
		
		if (input == "SHOW"){
			
		}
		
		if (input == "DELETE"){
			
		}
		
		if (input == "RESET"){
			
		}
		
		if (input == "EXIT"){
			end = 1;
					}
	}
	cout <<"\n"<< "Thanks for using Library Manager\n";
	cout << "Goodbye!\n"<<"\n";

	return 0;
}
