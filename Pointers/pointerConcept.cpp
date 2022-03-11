#include<iostream>
#include<string>
using namespace std;


int main()
{
    int *ptr = new int(50); // dynamically allocating the pointer
    cout << "Dynamically allocated ptr value is "<< *(ptr) << endl;
    //array
    int *arr = new int [3];

    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;

    delete[] arr; //freeing dynamically allocated value;
    //this is done when you want to use those memory location after 
    return 0;
}

//we have delete operator