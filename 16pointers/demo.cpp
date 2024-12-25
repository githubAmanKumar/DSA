#include <iostream>
using namespace std;

void changeA(int &a){    // pass by value = int a | pass by refrence = int &a
    a = 20;
}

int main(){

// Pointer
    int a=10;
    int* ptr = &a;

// pointer to pointer

    int** ptr2 = &ptr;   

    cout << a << endl;    
    cout << ptr << endl;    
    cout << *ptr << endl;    // here * is derefrencing operator
    cout << ptr2 << endl;

// Pass by value/refrence

    int a2=10;
    changeA(a2);
    cout << a2 << endl;

// Array pointer

    int arr[] = {1,2,3,4,5};
    cout << arr << endl;    // here 'arr' is the 'constant array pointer' which points the address of first element of array
    cout << *arr << endl;    

// Pointer Arithmetic

    // Increment(++) / Decrement(--) pointer
    int a3 = 10;
    int* ptr3 = &a3;
    cout << ptr3 << endl;
    ptr3--;
    ptr3--;

    // Add Subtract in pointers
    ptr3 = ptr3 + 2; // 2 int = 8 byte
    cout << ptr << endl;
    
    int arr2[] = {1,2,3,4,5};
    cout << *(arr2) << endl;    
    cout << *(arr2+1) << endl;    
    cout << *(arr2+2) << endl;    
    

    return 0;
}