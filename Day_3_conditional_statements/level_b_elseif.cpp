//Level 2 – Else-If Ladder
#include<iostream>
using namespace std;
int main(){
    // ->Used when you have multiple conditions to check but only one should run.
    // ->The moment one condition is true, the rest are skipped completely.
    // ->This is what you meant by: "if one runs, others won’t be checked" 
    // ->not compulsory to write else if we dont need it 
    // -> if there is no else and all other condition ( if and else if ) are not true then there is not output 

    int a,b,c;
    cout<<"Enter the a : "<<endl;
    cin>>a;
    cout<<"Enter the b : "<<endl;
    cin>>b;
    cout<<"Enter the c : "<<endl;
    cin>>c;

    if( a>b && a>c ){
        cout<<"The largest number is a : "<<a<<endl;
    }else if( b>a && b>c ){
        cout<<"The largest number is b : "<<b<<endl;
    }else{
        cout<<"The largest number is c : "<<c<<endl;
    }


    return 0;
}