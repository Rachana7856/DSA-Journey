#include<iostream>
using namespace std;
//for lower letters
int main(){

    string s;
    cin>>s;

    //precompute
    int hash[26]={0};                         //for both lower and upper case hash[256]
    for(int i =0;i<s.size();i++){
        hash[s[i]-'a']++;                          //for both lower and upper case  remove -'a'
    }

    //fetch
    int number;
    cin>>number;
    while(number--){
        char c;
        cin>>c;
        cout<<hash[c -'a']<<endl;                  //remove -'a'
    }


    return 0;
}