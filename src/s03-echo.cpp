#include <iostream>
#include <algorithm> 

auto main(int liczba_argumentow, char* argumenty[]) -> int {
	bool newLine;
	// For po wszystkich argumentach.
	for (int i=0; i<liczba_argumentow; i++) {
		if(std::string(argumenty[i]) == "-l") {
			newLine = true;
		}
		if(std::string(argumenty[i]) == "-n") {
        	    newLine = false;
		}
		if(std::string(argumenty[i]) == "-r") {
            	newLine = false;
		for (i = liczba_argumentow; i<0; i--){
            	std::cout << (argumenty[i]);
            	}
	       }
	      }
	for (int i=0; i<liczba_argumentow; i++) {
		std::cout << argumenty[i] << " ";
		if (newLine) {
			std::cout << std::endl;
		}
	}
    	return 0;
}
