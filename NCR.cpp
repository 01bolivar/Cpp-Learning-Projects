#include<iostream>
using namespace std;

int Factorial(int a){

    int counter = 1;
    int sum = 1;
    while (counter<=a){
        sum = sum*counter;
        counter++;
    }
    return sum;
}

void NCR(int a, int b){
int c = Factorial(a);
int d = Factorial(b);
int e = a - b;
int f = Factorial(e);
int g = c/(d*f);
cout<<g;
}
int main(){
int n,r;
cin>>n>>r;
NCR(n,r);

}
