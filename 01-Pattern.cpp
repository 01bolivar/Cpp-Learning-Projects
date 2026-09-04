#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
int i = 1;
int m = 1;



while(m<=n){

   for(int k = 1; k <= m; k++) {
     if(i%2==1 && k%2==1){
            cout<<"1";
    }
     if(i%2==0 && k%2==1){
            cout<<"0";
    }
     if(i%2==0 && k%2==0){
            cout<<"1";
    }
     if(i%2==1 && k%2==0){
            cout<<"0";
    }}
    i++;
    m++;
    cout<<endl;}













return 0;}
