// How the contstrctor of one class is inherited

#include<iostream>
#include<string>
using namespace std;

class Base1 {
    private: int num;
    public:
    Base1(int a){
        cout << "Base 1 is being called" << endl;
        num = a;
    }

    void printNumberBase1 () {
        cout << "The number we get on base 1 is "<< num <<endl;
    }
    
}; 

class Base2 {
    private: int num;
    public:
    Base2(int b){
        cout << "Base 2 is being called" << endl;
        num = b;
    }

    void printNumberBase2 () {
        cout << "The number we get on base 2 is "<< num <<endl;
    }
    
}; 

//you should know of order which class will be called first and 
//which constructor will run first orther wise you program will be hapazard


class Derived : public Base1, public Base2{
    private:
    int mem1, mem2;

    public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b) {
        mem1 = c;
        mem2 = d;

        cout << "Derived constructor called" <<endl;
    }

    void printDerived() {
        cout << "The value of derived mem1 is "<< mem1 <<endl;
        cout << "The value of derived mem2 is "<< mem2 <<endl;
    }
};

// constructor_name (arg *lists) : initilization-section
class Initilization {
    int a;
    int b;
    public:
    Initilization(int c, int d) : a(c),b(d) { // you can directly initilize your value like this
        cout << "The value of a and b is " << a << "and " << b <<endl;
    }

};
int main()
{
    Derived obj1(1,2,3,4);
    obj1.printNumberBase1();
    obj1.printNumberBase2();
    obj1.printDerived();
    Initilization obj2(10,12);


    return 0;
}

/*
Here in the program the main base function will be called
first
*/