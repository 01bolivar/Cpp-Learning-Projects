#include<iostream>
using namespace std;
int main(){


int n;
cin>>n;
int i=1;
int f = 2;
int h = 1;
while(i<=n){

   while(f<n){ if ((n%f)==0){
        cout<<n<<" is not a prime number";
        h = 0;
        break;
    }
    f++;
   }
if (h==0){break;}
    if (i==n){cout<<n<<" is a Prime number";}
     i++;
}












return 0;}
