#include <iostream>
using namespace std;
int main(){


int maximum = INT_MIN;
int n;
int a[n];
cin>>n;
for(int counter = 1;counter<=n;counter++){
    cin>>a[counter];

    if (a[counter]>maximum){
        maximum = a[counter];
    }
}

cout<<"maximum number = "<<maximum;




return 0;}
