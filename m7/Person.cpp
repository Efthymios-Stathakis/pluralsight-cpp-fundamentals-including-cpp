#include "Person.h"
#include <iostream>

using std::string;
using std::cout;
using std::endl;

Person::Person(): firstname(), lastname()  
{
    cout << "Constructing " << firstname << " " << lastname << endl;
};

Person::Person(string first, string last): firstname(first), lastname(last) 
{
    cout << "Constructing " << firstname << " " << lastname << endl;
};

Person::Person(string first, string last, int arb): firstname(first), lastname(last), rnd_num(arb)
{
    cout << "Constructing " << firstname << " " << lastname << endl;
};

Person::~Person()
{
    cout << "Destructing " << firstname << " " << lastname << endl;
};


 std::string Person::getName() const
 {
    string fullname = firstname + " " + lastname;
    return fullname;
 }