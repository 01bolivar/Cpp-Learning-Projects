#include <iostream>
#include <cstring>
using namespace std;
int main(){

    int i = 1;
    int f = 1;
    int n;
        cout<<"length of array: ";
        cin>>n;
    char b[n];
        cout<<"array = ";
        cin>>b;
    cout<<"output = "<<endl;
        while(f<=strlen(b)){
            for(int h = n-i ; h<=n-1 ; h++){
                cout<<b[h];

}
        cout<<endl;
        f++;
        i++;

}







return 0;}
