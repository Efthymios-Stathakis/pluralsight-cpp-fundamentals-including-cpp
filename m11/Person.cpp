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

Person::Person(string first, string last): 
    firstname(first), lastname(last)
{
    cout << "Constructing " << firstname << " " << lastname << endl;
};

Person::Person(string first, string last, int arb): 
    firstname(first), lastname(last), rnd_num(arb)
{
    cout << "Constructing " << firstname << " " << lastname << endl;
};

std::string Person::getName() const
{
    string fullname = firstname + " " + lastname;
    return fullname;
}

void Person::AddResource()
{
    // delete pResource; // To ensure no memory leak if we call this method multiple times
    // pResource = new Resource("Resource for " + getName());
    pResource.reset();
    pResource=std::make_shared<Resource>("Resource for " + getName());
};

//  I do not need a destructor or copy constructor since I am using shared pointer
// Person::~Person()
// {
//     cout << "Destructing " << firstname << " " << lastname << endl;
// };

// Person::Person(Person const & p)
// {
//     pResource = new Resource(p.pResource->GetName());
// }

// Person& Person::operator=(Person const& p)
// {
//     delete pResource;
//     pResource = new Resource(p.pResource->GetName());
//     return *this;
// }