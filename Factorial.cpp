#include<iostream>
using namespace std;

void Factorial(int a){

    int counter = 1;
    int sum = 1;
    while (counter<=a){
        sum = sum*counter;
        counter++;
    }
    cout<<sum;
}

int main(){
int n;
cin>>n;
Factorial(n);

}
