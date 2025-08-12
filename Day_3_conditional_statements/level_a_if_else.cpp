#include<iostream>
using namespace std;

int main(){

    // if else -> either the if code runs, or the else code runs.      

    //Check Even or Odd

    int a;
    cout<<"Enter the value of a : "<<endl;
    cin>>a;

    if( a%2==0){
        cout<<"The number is even number: "<<a<<endl;
    }else{
        cout<<"The number is odd number: "<<a<<endl;
    }

    return 0;
}