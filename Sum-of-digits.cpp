#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
int sum = 0;
int i = 1;

while(n!=0) {
    sum = (n%10) + sum;
    n = (n - (n%10))/10.0;
}

cout<<sum;



return 0;}
