#include <iostream>
#include "class025.cpp"
using namespace std;
int main(){
 players a;
 players b;
 players c;
 players d;
 players e;

char name[20];
cout<<"Name: ";
cin>>name;
int g;
cout<<"Number: ";
cin>>g;
char p[20];
cout<<"Position: ";
cin>>p;

 a.setnumber(g);
 a.setname(name);
 a.setposition(p);

a.display();










return 0;}
