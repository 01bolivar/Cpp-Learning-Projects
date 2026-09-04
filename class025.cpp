#include <iostream>
#include <cstring>
using namespace std;

class players{
char name[20];
int number;
char position[20];

public:


    void setnumber(int a){
    if (a>0 && a<100){
        number = a;}
    }

    void setposition(char h[]) {
        strcpy(position, h);
    }

    void setname(char n[]) {
        strcpy(name, n);
    }
const char* getname(){
    return name;}

    int getnumber(){
    return number;}

    const char* getposition(){
    return position;}

    void display(){
    cout<<"name: "<<name<<endl<<"number: "<<number<<endl<<"position: "<<position;}

};
