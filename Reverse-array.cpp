#include <iostream>
using namespace std;
int main(){



int n;
cout<<"length of array = ";
cin>>n;
int a[n];
int r[n];
int i = 1;
cout<<endl<<"enter elements:"<<endl;
for(int counter = 1;counter<=n;counter++){
    cin>>a[counter];
   r[counter] = a[counter];
}
for(int l = n;l>=0;l--){

    a[l]=r[i];
    i++;

}
cout<<"output equals to "<<endl;
for(int count1 = 1; count1<=n ;count1++){
cout<<a[count1]<<endl;
}

return 0;}
