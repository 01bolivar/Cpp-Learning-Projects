#include <iostream>
#include "class024.cpp"
using namespace std;
int main(){

Student one;
int n;
cin>>n;
one.setAge(n);
int k = one.getAge();
cout<<k;


return 0;}
