#include<iostream>
using namespace std;
int main(){
    //Find sum of first N natural numbers (1+2+3+...+N).
    int sum=0,n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for(int i=0; i<n;i++){
        sum+=n;
    }
    cout<<"Sum is : "<<sum<<endl;

    //Find factorial of a number (N!).
    int p = 1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    cout<<"Factorial is :"<<p<<endl;

    //Count digits in a number (e.g., 12345 → 5 digits).
    string z = "12345";
    cout<<z.length();
    
    return 0;
}