#include<iostream>
using namespace std;
int main(){

    //Print numbers from 1 to 10 using a for loop.
    for(int i =1; i<=10; i++){
        cout<<i<<"  ";
    }
    cout<<endl;


    //Print even numbers from 1 to 100 using a while loop.
    int n = 1;
    while( n<101 ){
        if(n%2==0){
            cout<<n<<"  ";
        }
        n++;
    }
    cout<<endl;


    //Print numbers from 10 to 1 in reverse order using a do-while loop.
    int j=10;
    do{
        cout<<j<<"  ";
        j--;
    }while(j>0);
    cout<<endl;


    //Print multiplication table of a number (e.g., input 5 → 5 10 15 20 …).
    int a = 5;
    for(int i=1; i<11; i++){
        cout<<a*i<<"  "; 
    }

    return 0;
}