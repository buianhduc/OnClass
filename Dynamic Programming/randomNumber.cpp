#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    srand(time(NULL)); //generate different number each time

    int randNum = rand() % (10-1+1) + 1; //get a random number from 1 to 10
    int inputTimes = 0; //initialize number of time
    // get number from user
    int numberUserInput;
    cin>>numberUserInput;
    
    while(numberUserInput != randNum or inputTimes > 3)
    {
        
    }
}