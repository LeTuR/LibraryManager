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


using namespace std;


int main(int argc, const char * argv[]) {
	string input;
<<<<<<< HEAD
	string type;
	int end = 0;
	cout << "Welcome to the Library Manager:\n";
	cout << "Please enter a command, to see the list of commands type HELP, if you want to exit type EXIT\n";
	while(end == 0){
=======
	cout << "Welcome to the Library Manager:\n";
	cout << "Please enter a command, to see the list of commands type HELP, if you want to exit type EXIT\n"<<"\n";
	for(;;){
>>>>>>> master
		cin>>input;
		if (input == "HELP"){
			cout << "--------------------\n";
			cout << "List of commands:\n";
<<<<<<< HEAD
			cout << "ADD   LOAD\n";
=======
			cout << "BYE   ADD     LOAD\n";
>>>>>>> master
			cout << "SAVE  SEARCH  CLEAR\n";
			cout << "LIST  SHOW    DELETE\n";
			cout << "RESET HELP    EXIT\n";
			cout << "--------------------\n"<<"\n";
			cout << "Please enter a command, to see the list of commands type HELP, if you want to exit type EXIT\n";
<<<<<<< HEAD
		}
		
		else if (input == "ADD"){
			cin>>type;
			add(type);
		}
		
		else if (input == "LOAD"){
			
		}
		
		else if (input == "SAVE"){
			
		}
		
		else if (input == "SEARCH"){
			
		}
		
		else if (input == "CLEAR"){
			
		}
		
		else if (input == "LIST"){
			
		}
		
		else if (input == "SHOW"){
			
		}
		
		else if (input == "DELETE"){
			
		}
		
		else if (input == "RESET"){
			
		}
		
		else if (input == "EXIT"){
			end = 1;
					}
	}
	cout <<"\n"<< "Thanks for using Library Manager\n";
	cout << "Goodbye!\n"<<"\n";

=======


		}
	}
>>>>>>> master
	return 0;
}
