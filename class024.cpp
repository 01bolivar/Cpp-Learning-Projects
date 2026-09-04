#include <iostream>
using namespace std;

class Student{

private:
int Age;

public:
int name;


void setAge(int a){
    if (a>0){Age = a;}
}
int getAge (){
    return Age;}
};
