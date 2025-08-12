#include<iostream>
using namespace std;

int main(){

    string user = "Rachana";
    string password = "radhakrishna";

    string u,p;
    cout<<"Enter the user name :"<<endl;
    cin>>u;
    cout<<"Enter the user password :"<<endl;
    cin>>p;

    if(u == user && p == password){
        cout<<"Access granted."<<endl;
    }else{
        cout<<"Access denied."<<endl;
    }
    return 0;
}