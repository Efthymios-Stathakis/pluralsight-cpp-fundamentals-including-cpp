#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <memory>
using std::shared_ptr;
using std::make_shared;

#include "Tweeter.h"
#include "Resource.h"

// int Dummy(Person p){return p.GetNumber();}
int Dummy(Person const& p){return p.GetNumber();}

int main()
{  
    // // -------- Demo: Indirection and Inheritance --------
    // Person Thomas("Thomas", "Anders", 345);
    // Person & rThomas = Thomas;
    // Person * pThomas = &Thomas;

    // Tweeter ThomasAnderscons("Thomas", "Anders", 456, "@derscons");
    // Tweeter& rtThomasAnderscons = ThomasAnderscons;
    // Person& rpThomasAnderscons = ThomasAnderscons;
    // Person* pThomasAnderscons = &ThomasAnderscons;

    // cout << "--- rThomas: " << rThomas.GetName() << endl;
    // cout << "--- pThomas: " << pThomas->GetName() << endl;
    // cout << "--- ThomasAnderscons: " << ThomasAnderscons.GetName() << endl;
    // cout << "--- rpThomasAnderscons: " << rpThomasAnderscons.GetName() << endl;
    // cout << "--- rtThomasAnderscons: " << rtThomasAnderscons.GetName() << endl;
    // cout << "--- pThomasAnderscons: " << pThomasAnderscons->GetName() << endl;

    // Person* Someone = new Tweeter("Someone", "Else", 567, "@someone");
    // cout << Someone->GetName() << endl;
    // delete Someone;

    // // -------- Demo: Slicing --------
    // shared_ptr<Person> spKate = make_shared<Tweeter>("third", "name", 678, "@handle");
    // cout << spKate->GetName() << endl;


    // Person Kate("Thomas", "Anders", 345);
    // Tweeter KateGregcons("Kate", "Gregory", 456, "gregcons");

    // // KateGregcons = Kate;
    // Kate = KateGregcons; // Throws away extra member variables

    // cout << "Dummy(Kate): " << Dummy(Kate) << endl;
    // cout << "Dummy(KateGregcons): " << Dummy(KateGregcons) << endl;
    
    // Person* Someone = new Tweeter("Someone", "Else", 567, "@someone");
    // cout << "Dummy(Someone): " << Dummy(*Someone) << endl;


    // -------- Demo: Casting Pointers --------
    Tweeter t("Kate", "Gregory", 1230, "@gregcons");
    Person* p=&t;
    //  Tweeter* pt = p; // This fails due to downcasting
    //  Tweeter* pt = (Tweeter*) p; // This is NOT good, no safeguards
    Tweeter* pt = static_cast<Tweeter*>(p);
    cout << pt->GetName() << endl;

    Resource r("local");
    Tweeter* pt2;
    cout << "User Resource or Tweeter?" << endl;
    std::string answer;
    cin >> answer;

    if (answer=="r")
    {
        pt2 = dynamic_cast<Tweeter*>(&r);
    }
    else
    {
        pt2 = dynamic_cast<Tweeter*>(p);
    }

    if (pt2)
    {
        cout << pt2->GetName() << endl;
    }
    else
    {
        cout << "Pointer cannot be cast to tweeter." << endl;
    }
}