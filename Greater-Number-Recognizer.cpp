#include <iostream>
using namespace std;

int main(){

int x,y,z;
cin>>x>>y>>z;

if (x>y && x>z) {
    cout<<x<<" is the greatest";
}

else if (z>y && x<z) {
    cout<<z<<" is the greatest";}

else if (x<y && y>z) {
    cout<<y<<" is the greatest";
}
else{
    cout<<"Numbers are equal";
}
return 0;
}






