#include<iostream>
using namespace std;
int main(){

    //Implicit
    char hello ='a';
    int c = hello;
    cout<<c<<endl;

    //Explicit 
    double b = 1.445;
    int d = (int)b;
    cout<<d<<endl;

    //Input
    int z;
    cout<<"Enter a number :"<<endl;
    cin>>z;
    cout<<"The number is "<<z<<endl;
    
    return 0;
}