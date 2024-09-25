#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "Resource.h"
#include "Person.h"

// int Dummy(Person const & p){return p.GetNumber();}
int Dummy(Person p){return p.GetNumber();} // This will create a new reference to pResource since we take parameter by value and copy p

int main()
{  
    // ******** Demo: The Free Store **
    // {
    //     Resource localResource("Local");
    //     string localString = localResource.GetName();
    // }
    // Resource* pResource = new Resource("Created with keyword 'new'");
    // string newString = pResource->GetName();

    // int j = 3;
    // delete pResource;
    // pResource = nullptr;
    // // string string3 = pResource->GetName(); This is bad
    // Resource* p2 = pResource; // Copies the pointer
    // string s2 = p2->GetName();
    // // Following code builds but fails to run because p2 points to a deleted place
    // // delete p2;
    // cout << s2 << endl;


    // ******** Demo: Manual Memory Management **********
    // Person Thomas("Thomas", "Anders", 345);
    // Thomas.AddResource();
    // Thomas.SetFirstName("Tom");
    // Thomas.AddResource();

    // // The Tom2, since we did not write a copy constructor, to a copy of 
    // // the Resource pointer When Tom2 went out of scope it tried to call 
    // // delete on the Resource pointer that had already been delete
    // // Person Tom2 = Thomas; 

    // ******** Demo: Standard Library Smart Pointers ********
    {
        Person Thomas("Thomas", "Anders", 345);
        Thomas.AddResource();
        string s1 = Thomas.GetResourceName();
        Thomas.AddResource();
        Person Tom = Thomas;
        Thomas = Tom;
        int j = Dummy(Tom);
    }

    return 0;
}