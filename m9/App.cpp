#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
#include "Person.h"
#include "BankAccount.h"
#include "Accum.h"

template <class T>
T my_max(T const& t1, T const& t2)
{
    return t1 < t2? t2: t1;
}
int main()
{   
    // cout << "max of 33 and 44 is " << my_max(33, 44) << endl;
    // string s1 = "hello";
    // string s2 = "world";
    // cout << "max of " << s1 << " and " << s2 << " is " << my_max(s1, s2) << endl;
    // Person p1("Thomas", "Anders", 122);
    // Person p2("Someone", "Else", 456);
    // cout << "max of " << p1.getName() << " and " << p2.getName() << " is " << my_max(p1, p2).getName() << 
    //     " because it has n>umber " << my_max(p1, p2).GetNumber() << endl;

    // cout << "Looking at the BankAccount class" << endl;
    // BankAccount b1(100);
    // BankAccount b2(120);
    // cout << "max of " << b1.GetBalance() << " and " << b2.GetBalance() << " is " << my_max(b1, b2).GetBalance() << endl;

    // cout << "Looking at the template Accum class" << endl;
    // Accum<int> integers(100);
    // integers += 3;
    // integers += 7;
    // cout << integers.GetTotal() << endl;
    
    // Accum<string> strings("Hello ");
    // strings += "world";
    // strings += "!!!";
    // cout << strings.GetTotal() << endl;

    cout << "Looking at template specialization!!!" << endl;
    // Person start("", "", 0);
    Accum<Person> people(10);
    Person p1("Thomas", "Anders", 123);
    Person p2("Someone", "Else", 456);
    people += p1;
    people += p2;
    cout << people.GetTotal() << endl;
}