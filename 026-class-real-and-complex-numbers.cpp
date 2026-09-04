#include <iostream>
#include "class026.cpp"
using namespace std;
int main(){
int a, b, c, d;
cout<<"First Real Number: ";
cin>>a;
cout<<"First Complex Number: ";
cin>>b;
cout<<"Second Real Number: ";
cin>>c;
cout<<"Second Complex Number: ";
cin>>d;

complexno n1(a,b);
complexno n2 (c,d);

n1.plus(n2);
n1.display();









return 0;}
