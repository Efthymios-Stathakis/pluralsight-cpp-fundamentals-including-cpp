#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "Person.h"

int DoubleIt(int const& x)
{
    return x*2;
}

int main()
{  
    // int A = 10;
    // cout << "Variable A is " << A << endl;
    // int& rA = A;
    // rA = 5;
    // cout << "Variable A is " << A << endl;
    
    // int B = 20;
    // cout << "Variable B is " << B << endl;
    // int* pB = &B;
    // *pB = 23;
    // cout << "Variable b is " << B << endl;

    // int* pA = &A;
    // *pA = 4;
    // cout << "Variable A is " << A << endl;
    // int C = 100;
    // pA = &C;
    // (*pA)++;
    // cout << "Variable A is " << A << ", *pA " << *pA 
    //      << ", C " << C <<  endl;

    // int* badptr = nullptr;
    // if (badptr !=nullptr)
    // {
    //     *badptr=3;
    //     cout << *badptr << endl;
    // }
    // cout << "Referencing custom classes " << endl;
    // Person Thomas("Thomas", "Anders", 123);
    // Person& rThomas = Thomas; 
    // rThomas.SetNumber(345);
    // cout << "rThomas: " << rThomas.getName() << " " << rThomas.GetNumber() << endl;

    // Person* pThomas = &Thomas; 
    // pThomas->SetNumber(543);
    // cout << "Thomas: " << Thomas.getName() << " " << Thomas.GetNumber() << endl;
    // cout << "pThomas: " << pThomas->getName() << " " << pThomas->GetNumber() << endl;

    // Demo: Const
    // int i = 3;
    // int const ci = 3;
    // i = 4;
    // // ci = 4; Breaking the const rules

    // int& ri = i;
    // ri = 5;

    // int const& cri = i;
    // cout << "&cri values is " << cri << endl;
    // i = 7;
    // cout << "&cri values is " << cri << endl;
    // //  cri = 6;; Breaking the const rules

    // // int& ncri = ci; Need to initialize with const reference
    
    // int j = 10;
    // int DoubleJ = DoubleIt(j);
    // Because of the literal we cannot pass argument by reference because 10 is literal and cannot change
    // In this case, we need to pass the argument by const reference
    // int Double20 = DoubleIt(20); 
    // cout << "DoubleJ: " << DoubleJ << ". Double20: " << Double20 << endl;

    // Person Thomas("Thomas", "Anders", 123);
    // Thomas.SetNumber(235);
    // Person const pThomas = Thomas;
    // pThomas.setNumber(235) breaks the compiler
    // int ThomasNumber = pThomas.GetNumber(); // This works because GetNumber is set as const


    // Const with Indirectoin
    int i = 19;
    int* pI = &i;
    // int* pII = &pI; The adress of an integer pointer is a different type than the adress of an integer
    // pI = &Thomas; Fails due to pointer safety

    int k = 17;
    int const * pcI = &k; // Pointer to a const
    // *pcI = 4;
    cout << "Value of pcI: " << (*pcI) << endl;
    k++;
    cout << "Value of pcI: " << (*pcI) << endl;
    int j = 12;
    pcI = &j;
    cout << "Value of pcI: " << (*pcI) << endl;
    j = *pcI;

    int * const cpI = pI; // const pointer
    *cpI = 4;
    // cpI = &j;

    int const * const crazy = pI;
    // *crazy  = 4;
    // crazy = &j;
    j = *crazy;

    int const m = 40;
    int const *pm = &m;
    cout << "Value of pm is " << (*pm) << endl;
    // int *pm2 = &m; Pointer to const value must be const pointer

    return 0;
}