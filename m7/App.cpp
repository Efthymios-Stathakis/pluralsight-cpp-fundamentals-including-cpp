#include <iostream>
#include "Utility.h"
#include "Tweeter.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
    
    int x = 17;
    cout << isPrime(x) << endl;

    cout << "Enter a number: ";
    cin >> x;

    if (isPrime(x))
        cout << x << " is prime " << endl;
    else
        cout << x << " is not prime " << endl;

    
    if (is2MorePrime(x))
        cout << x << "+2 is prime " << endl;
    else
        cout << x << "+2 is not prime " << endl;
    
    if (is3MorePrime(x))
        cout << x << "+3 is prime " << endl;
    else
        cout << x << "+3 is not prime " << endl;

    Tweeter t("Jon", "Doe", 123, "rergre");
    cout << t.getName() << " has " << t.GetNumber() << endl;
    t.SetNumber(5454);
    cout << t.getName() << " has " << t.GetNumber() << endl;

    return 0;

}
