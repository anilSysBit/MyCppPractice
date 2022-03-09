//ambiguity - > the quality of begin more open to more than one nterpretation; inexcatness

#include<iostream>
#include<string>
using namespace std;

//we have initialized the greet function on both base class
//this creates a ambiguity
//you should resolve the ambiguity while adding derived class
//if the ambiguity is unresolved then the derived class will not know which function to operation and throws error
class Respect{ //baseclass1
    int a;
    public:

    void greet(){
        cout <<"Good morning" <<endl;
    }
};

class Request{ //baseclass 2
    int b;
    public:

    void greet(){
        cout << "Would you like to" <<endl;
    }
};

class D_respect : public Respect , public Request{ //inheriting baseclass to derived class
    int c;

    public:
    void greet(){
        Respect :: greet(); //resolved problem of ambiguity
    }
    
};
int main()
{
    Respect obj1;
    Request obj2;
    D_respect obj3;

    obj1.greet();
    obj2.greet();
    obj3.greet(); // you cannot do this until the ambiguity problem is resolved



    return 0;
}