// Functions.pp: Defined the entrypoint for the console function

#include <iostream>
#include "Utility.h"
using std::cout;
using std::endl;

bool isPrime(int x)
{
    bool prime = true;
    for (int i=2; i<=x/i; i++)
    {
        int factor = x/i;
        if (factor*i == x)
        {
            cout << "Factor found: " << factor << " => ";
            prime = false;
            break;
        }
    }
    return prime;
}

bool is2MorePrime(int const& x)
{
    return isPrime(x+2);
}

// returns a **dangling** reference (very bad), since the variable "a" 
// is in scope inside the function and as soon as we leave the function, 
// the memory gets cleaned up. So the code pointing to that memory when 
// it can be used later for something else, this is really bad
// int& BadFunction()
// {
//     int a = 3;
//     return a;
// }