#pragma once
#include <string>
#include "Resource.h"

class Person
{
private:
    std::string firstname;
    std::string lastname;
    int rnd_num;
    std::shared_ptr<Resource> pResource;

public:
    Person();
    // ~Person(); //   I do not need a destructor since I am using shared pointer
    Person(std::string first, std::string last);
    Person(std::string first, std::string last, int arb);
    // Person(Person const & p); // copy constructor
    // Person& operator=(Person const & p); // copy assignment operator
    std::string getName() const;
    int GetNumber() const {return rnd_num;}
    void SetNumber(int number) {rnd_num=number;}
    void SetFirstName(std::string first) {firstname=first;}
    void AddResource();
    std::string GetResourceName() const {return pResource ? pResource->GetName(): "";}
};