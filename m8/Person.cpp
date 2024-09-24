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

bool Person::operator<(Person const& p) const
{
    return rnd_num < p.rnd_num;
}

bool Person::operator<(int i) const
{
    return rnd_num < i;
}

//  Important note: GetNumber needs to be marked as const, otherwise we cannot call 
//  a non-const function on a const p instance that we pass to the function
// So the definition needs to be "int GetNumber() const"
bool operator<(int i, Person const& p)
{
    return i < p.GetNumber();
}

// To make this work we need to use the public function. If not 
// possible then we can use the keyword "friend" as follows
// friend bool operator<(int i, Person const& p);
// bool operator<(int i, Person const& p)
// {
//     return i < p.rnd_num;
// }