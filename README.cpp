//Just a test of functions with arrays to define a bool to the user and give a random 0 or 1, hence the coin toss
#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    std::cout << "In coding, a bool means true or false, or 1 is true and 0 is false " << std::endl;
    std::cout << "Are you ready?" << std::endl;
    const char arraynum[2] = {'0', '1'};
    int RandIndex = rand() % 2;
    std::cout << arraynum[RandIndex];
    return 0;
}
