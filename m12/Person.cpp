#include "Person.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Person::Person(): 
    firstname(), lastname()
{
    cout << "Constructing " << firstname << " " << lastname << endl;
};

Person::Person(string first, string last, int arb): 
    firstname(first), lastname(last), rnd_num(arb)
{
    cout << "Constructing " << firstname << " " << lastname << endl;
};

Person::~Person()
{
    cout << "Destructing " << GetName() << endl;
};

std::string Person::GetName() const
{
    return firstname + " " + lastname;
}
