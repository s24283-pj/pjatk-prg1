#include <iostream>
#include <random>
#include <chrono>
#include <thread>

auto main () -> int
{
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::mt19937 generator(seed);
        int my_guess = 0;
        int your_tries = 0;
        std::uniform_int_distribution <int> distribution(1, 100);
        int random = distribution(generator);
        std::cout << "Hello, guess what number I'm thinking about..." << std::endl;
        while(my_guess != random)
        {
         std::cin >> my_guess;
         if (my_guess > random)
         {
             std::cout << "My number is little smaller than your guess..." << std::endl;
             your_tries++;
         }
          if (my_guess < random)
         {
             std::cout << "My number is little bigger than your guess..." << std::endl;
             your_tries++;
         }
          if (my_guess == random)
         {
             std::cout << "Excellent! that's exactly my number!" << std::endl;
             your_tries++;
             break;
         }
        }
        std::cout << "You needed only " << your_tries << " tries!" << std::endl;

return 0;
}
