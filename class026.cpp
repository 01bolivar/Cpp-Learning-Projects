#include <iostream>
using namespace std;

class complexno{
    int real;
    int complex;
public:

    complexno(int a, int b){
        real = a;
        complex = b;
}

    void plus(complexno n2){
        real += n2.real;
        complex += n2.complex;
;}

    void display(){
        cout<<"Result = "<<real<<" + "<<complex<<"i";}



};
