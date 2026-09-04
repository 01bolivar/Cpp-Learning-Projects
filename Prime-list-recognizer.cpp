#include <iostream>
using namespace std;

int IsPrime(int a){
bool f;
int n = 2;
while(n<a){
    int g = a%n;
    if (g==0){f=1; break;}
    else{f=0;}
        n++;
}
return f;
}

void Primes(int a){
  int counter = 2;
   while(counter<a){
   bool k = IsPrime(counter);
   if (k==0){
    cout<<counter<<endl;
   }
    counter++;
   }

}

int main(){

int a;
cin>>a;
Primes(a);


return 0;}
