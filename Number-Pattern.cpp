#include <iostream>
using namespace std;
int main(){



int n;
cin>>n;
int i = 1;
int f = 1;
while (i<=n){


    for(int l = n-i; l!=0; l--){
            cout<<" ";
 }

    for(int c=f; c<= (2*i)-1 ; c++){
            cout<<c;
    }

    for(int m = (i*2)-2; m>=i; m--){
            cout<<m;
    }

cout<<endl;
i++;
f++;
}









return 0;}
