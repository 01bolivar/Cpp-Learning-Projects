#include <iostream>
using namespace std;
int main(){



int n;
int a[n];
cout<<"length of array = ";
cin>>n;
cout<<endl;
for(int counter = 1;counter<=n;counter++){
    cin>>a[counter];
    }
cout<<"output equals to "<<endl;
for(int count1 = n; count1>0 ;count1--){
cout<<a[count1]<<endl;
}



return 0;}
