#include <iostream>

auto main () -> int
{
        int option;
        int bottles;
        auto noBottles = 0;
        std::cout << "1. Default amount (99) -> press 1 " << std::endl;
        std::cout << "2. Whatever you want in range 1 -99 -> press 2 " << std::endl;
        std::cin >> option;
        while(option < 1 || option > 2)
        {
            std::cout << "Please, choose option 1 or 2." << std::endl;
            std::cin >> option;
        }
        if (option == 1)
        {
            for (auto i = 99; i >=1; i--)
            {
               std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer," << std::endl;
               std::cout <<  "Take one down, pass it around," << i - 1 << " bottles of beer on the wall.. " << std::endl;

               if (i == 1)
                {
                  std::cout << "No more bottles of beer on the wall, no more bottles of beer" << std::endl;
                  std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.." << std::endl;

                }
            }
        }

        if (option == 2)
        {
          std::cout << "So... how many bottles of beer?" << std::endl;
          std::cin >> bottles;
        while(bottles > 99 || bottles <= noBottles)
        {
          std::cout << "Please select a number of beers in range 1 - 99 : " << std::endl;
           std::cin >> bottles;
        }
        for (auto i = bottles; i >= 1; i--)
        {
           std::cout << i << " bottles of beer on the wall, " << i << " bottles of beer," << std::endl;
           std::cout << "Take one down, pass it around," << i - 1 << " bottles of beer on the wall.. " << std::endl;

	        if (i == 1)
        	 {
                	std::cout << "No more bottles of beer on the wall, no more bottles of beer" << std::endl;
                	std::cout << "Go to the store and buy some more, 99 bottles of beer on the wall.." << std::endl;
       		 }
        }
        }
return 0;
}
