#include<iostream>
using namespace std;

//Palindrome Checker
int check(int n, int rev =0){
    if(n==0)return rev;
    int ld= n%10;
    return check(n/10,rev * 10 + ld);
}
bool ispalindrome(int n){
    return n == check(n);
}

//Armstrong Number Checker
bool isarmstrong(int n){

    int original = n;
    int sum =0;
    while(n>0){

        int ld = n%10;
        sum+=ld*ld*ld;
        n/=10;
    }
    return original ==sum;
}

//Global vs Local Variable Conflict
static int a =5;
void fun(){
    static int a =7;

    cout<<"Local static variable value is "<<a<<endl;
    cout<<"Global static variable value is "<<::a<<endl;
}


//Recursive Power Function
int powerRecursive(int base, int exp){
    if(exp==0) return 1;

    return base * powerRecursive(base,exp-1);

}
int main(){

    if(ispalindrome(1223341)){
        cout<<"It is a palindrome. "<<endl;
    }else{
        cout<<"It is not a palindrome. "<<endl;
    }

    if(isarmstrong(153)){
        cout<<"It is a armstrong. "<<endl;
    }else{
        cout<<"It is not a armstrong. "<<endl;
    }

    fun();
    
    cout<<"The value of 5 power 3 is : "<<powerRecursive(5,3)<<endl;
    return 0;
}