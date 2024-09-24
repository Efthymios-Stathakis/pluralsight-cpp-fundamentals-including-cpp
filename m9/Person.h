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
    Person(std::string first, std::string last);
    Person(std::string first, std::string last, int arb);
    std::string getName() const;
    int GetNumber() const {return rnd_num;}
    void SetNumber(int number) {rnd_num=number;}
    bool operator<(Person const& p) const;
    bool operator<(int i) const;
};

bool operator<(int i, Person const& p);
// bool operator<(Person const& p1, Person const& p2);