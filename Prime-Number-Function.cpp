#include <iostream>
using namespace std;

void IsPrime(int a){
bool f;
int n = 2;
while(n<a){
    int g = a%n;
    if (g==0){f=1; break;}
    else{f=0;}
        n++;
}
if(f==1){cout<<a<<" Is Not Prime";}
else{cout<<a<<" Is Prime";}
}

int main(){

int a;
cin>>a;
IsPrime(a);


return 0;}
