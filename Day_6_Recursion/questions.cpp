#include<iostream>
using namespace std;

//Write a recursive function to find the sum of first n natural numbers.
int sumNumbers(int n){
    if(n ==0) return 0;

    return n + sumNumbers(n-1);
}

//Count Digits (Recursive)
int count(int n ){
    if(n ==0 )return 0;

    return 1 + count(n/10);
}

//Fibonacci Series (Recursive)
int fib(int n){
    if(n==0)return 0;
    if(n==1)return 1;

    return fib(n-1)+fib(n-2);

}
int main(){

    cout<<"the sum of first n natural numbers : "<<sumNumbers(5)<<endl;

    cout<<"total digits in this number : "<<count(1238)<<endl;

    cout<<"nth Fibonacci number is : "<<fib(2)<<endl;

    return 0;
}