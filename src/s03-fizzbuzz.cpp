#include <iostream>

 auto main(int, char *argv[]) -> int
{
        auto n = std::stoi(argv[1]);
        for (auto i = 1; i <= n; i++)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
		std::cout << i << " FizzBuzz " << std::endl;
		} 
		else if (i % 3 == 0)
		{
		std::cout << i << " Fizz " << std::endl;
		}
		else if (i % 5 == 0)
		{
		std::cout << i << " Buzz " << std::endl;
		}      
		else
		{
		std::cout << i << std::endl;
		}
       	}
	return 0;
}
