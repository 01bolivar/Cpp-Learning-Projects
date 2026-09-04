#include <iostream>
using namespace std;
int main(){


int x = 4;

try{
    cout<<"before throw";
if(x<0){throw x;
cout<<"after throw";}}
catch(int x){cout<<"Caught";}











return 0;}
