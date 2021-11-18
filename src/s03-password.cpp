#include<iostream>
#include<string>

auto main (int, char *argv[]) -> int
{
	auto const password = std::string{argv[1]};
	auto attempt = std::string{};
	
	std::cout << "Please, enter your password:" << std::endl; 
	std::cin >> attempt;
	while (attempt != password)
	{
		std::cout << "Invalid password! Try again." << std::endl;
		std::cin >> attempt;
	}
	
	std::cout << "Valid password, welcome!" << std::endl;
	return 0;
} 
