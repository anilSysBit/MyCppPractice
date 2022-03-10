// it is used in virtual inheritance in a way of preventing multiple
// instances of a given class appearing in an inheritance hirarchy when using multiple inheritance

// it is a base class member function you redefine in a derivative class.


#include<iostream>
#include<string>
using namespace std;

class A{
    public:
    int a;
    A(){
        a = 10;
    }
};

class B : public virtual A {
    
};

class C : public virtual A{

};

class D: public B, public C{

};
int main()
{
    D obj1;
    cout << "a = "<<obj1.a<<endl;
    return 0;
}

//here using the virtual base function there is no duplication of the data
// the ambiguity problem is resolved which one's function to be operated

// special way to resolve the problem of ambiguity
