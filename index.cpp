#include<iostream> 
using namespace std; 

class A {
public:
    void display() {
        cout << "Hello world";
    }
};

class B: public A {
public:
    void print() {
        cout << "Hello world";
    }
};
