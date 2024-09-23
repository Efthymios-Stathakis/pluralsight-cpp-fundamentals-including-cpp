#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;

Tweeter::Tweeter(
        std::string first,
        std::string last,
        int arbitrary,
        std::string handle): 
        Person(first, last, arbitrary), twitterhandle(handle)
{
    cout << "Constructing tweeter " << twitterhandle << "for " << getName() << endl;
}

Tweeter::~Tweeter()
{
    cout << "Destructing tweeter " << twitterhandle << endl;
}
