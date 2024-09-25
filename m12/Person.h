#pragma once
#include <string>

class Person
{
private:
    std::string firstname;
    std::string lastname;
    int rnd_num;

public:
    Person();
    ~Person(); 
    Person(std::string first, std::string last, int arb);
    virtual int GetNumber() const {return rnd_num;} // This enables polymorphism and to use the derived class method
    // If you mark any method as virtual then mark the destructor as virtual also
    // virtual std::string GetName() const; 
    // virtual ~Person(); 
    std::string GetName() const;
    void SetNumber(int number) {rnd_num=number;}
    void SetFirstName(std::string first) {firstname=first;}
};