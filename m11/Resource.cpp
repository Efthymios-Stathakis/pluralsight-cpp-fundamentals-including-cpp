#include "Resource.h"
#include <iostream>
#include <string>


using std::string;
using std::cout;
using std::endl;

Resource::Resource(string n): name(n)
{
    cout << "Constructing resource with initial name " << name << endl;
};

Resource::Resource()
{
    cout << "Constructing resource" << endl;
};

Resource::~Resource(void)
{
    cout << "Destructing resource with name " << name << endl;
};


