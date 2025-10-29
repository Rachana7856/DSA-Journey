#include<iostream>
#include<string>
using namespace std;

//Write a function that returns the sum of two numbers.
int sum(int a, int b){
    return a + b;
}

//Function that tells the larger number.
void max_number(int a,int b){
    if(a>b){
        cout<<a<<" is greater."<<endl;
    }else if(a<b){
        cout<<b<<" is greater."<<endl;
    }else{
        cout<<"Both number are equal. "<<endl;
    }
}

//Function return true if even else false.

bool is_even(int a){
    if(a%2==0){
        return true;
    }else{
        return false;
    }
}

//Function returns simple interest.
float simple_interest(float p, float r, float t){
    return (p*r*t)/100;
}

//Function void greet(string name = "Guest") → prints "Hello, <name>!".
void greet(string name ="guest"){
    cout << "Hello, " << name << "!" << endl;
}

//Create an inline function int cube(int x) that returns cube of a number.
inline int cube(int x){
    return x*x*x;
}

int main(){

    cout<<sum(4,6)<<endl;

    max_number(9,9);

    cout<<"The number is even  1 (true) or 0 (false) :"<<is_even(5)<<endl;

    float a=2.5f;
    float b=3.0f;
    float c=4.2f;
    cout<<"simple interest :"<<simple_interest(a,b,c)<<endl;

    greet();
    greet("world");

    cout<<"area of cube :"<<cube(5)<<endl;
    return 0;
}