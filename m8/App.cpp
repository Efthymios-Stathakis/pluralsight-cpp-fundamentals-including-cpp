#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "Utility.h"
#include "Person.h"

int main()
{   
    // int i = 0;
    // i += 2;
    // cout << i << endl;
    // i *= 3;
    // cout << i << endl;
    // i -= 3;
    // cout << i << endl;
    // i /= 4;
    // cout << i << endl;

    // cout << "Looking at ++ operator" << endl;
    // int j = i++;
    // cout << j << endl;
    // j = ++i;
    // cout << j << endl;
    // j = i--;
    // cout << j << endl;
    // j = --i;
    // cout << j << endl;

    // i = 2;
    // j = 0;
    // while (i<101)
    // {
    //     j += isPrime(i++)?1:0;
    // }
    // cout << endl << endl;
    // cout << "I found " << j << " primes up to 100." << endl;

    // cout << "Time for comparisons." << endl;
    // i = 2;
    // if (i==3)
    //     cout << "i is 3" << endl;
    // cout << "i is " << i << endl;
    // if (i=3)
    //     cout << "i is 3" << endl;
    // cout << "i is " << i << endl;
    // i=4;
    // if (3==i)
    //     cout << "i is 3" << endl;
    // cout << "i is " << i << endl;


    // cout << "Time for some keyboard inputs! Enter a number: ";
    // cin >> i;

    // cout << "You entered " << i << ". " << i << " is ";
    // if (!isPrime(i))
    //     cout << "not ";
    // cout << "prime" << endl;

    // cout << "Enter another number: ";
    // cin >> j;

    // cout << "You entered " << j << ". " << i << " is ";
    // if (!(i % j == 0))
    //     cout << "not ";
    // cout << "a multiple of " << j << endl;


    cout << "Time to check operator overloading." << endl;
    Person p1("Thomas", "Anders", 123);
    Person p2("Someone", "Else", 456);
    cout << "p1 is ";
    if (!(p1 < p2))
        cout << "not ";
    cout << "less than p2." << endl;
    
    cout << "p1 is ";
    if (!(p1 < 300))
        cout << "not ";
    cout << "less than 300." << endl;

    cout << "300 is ";
    if (!(300 < p1))
        cout << "not ";
    cout << "less than p1." << endl;
}