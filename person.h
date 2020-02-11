#include <iostream>
using namespace std;

class Person{
    public:
        char LastName[16];
        char FirstName[16];
        char Address[16];
        char City[16];
        char State[3];
        char ZipCode[10];
        Person();
        void Print();
        void leer();
};

