#include <iostream>
#include "Person.h"
#include "Status.h"
#include "Tweeter.h"

using std::cout;
using std::endl;

int main()
{
    Person person1("Tom", "boy", 10);
    cout << "Hello " << person1.getName() << endl;
    {
        Person person2("katie", "jones");
        cout << "Hello " << person2.getName() << endl;
    }
    
    {
        Tweeter t1("someone", "Else", 324, "whoseve");
        std::string name2 = t1.getName();
        cout << "Tweeter " << name2 << endl; 
    }
    cout << "After innermost block" << endl; 

    Status s = Pending;
    s = Approved;
    
    FileError fe = FileError::notfound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;
    if (ne == NetworkError::ok)
    {
        cout << "Network running ok " << endl;
    }

    return 0;
}
