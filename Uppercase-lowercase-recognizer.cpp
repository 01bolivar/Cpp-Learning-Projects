#include <iostream>
using namespace std;
int main(){

char l;
cin>>l;

if (l>64 && l<91){
cout<<"Uppercase";
}

else if(l>96 && l<123){
cout<<"lowercase";}

else{
cout<<"INVALID CHARACHTER";}



return 0;
}
