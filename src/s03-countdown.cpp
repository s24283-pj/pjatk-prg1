#include <iostream>
#include <unistd.h>

auto main(int, char *argv[]) -> int
{
        auto n = std::stoi(argv[1]);
        for (auto i = n; i >=0; i--)
        {
		sleep(1);	
		std::cout << i << std::endl;
		if (i == 0)
		{
     			std:: cout << "boom" << std::endl;
       		}
	}
	return 0;
}
