#include<iostream>
using namespace std;
int main(){
    
    //Arithmetic operator
    int a,b;
    cout<<"Enter the value of a :"<<endl;
    cin>>a;
    cout<<"Enter the value of b :"<<endl;
    cin>>b;

    cout<<"a+b "<<a+b<<endl;
    cout<<"a-b "<<a-b<<endl;
    cout<<"a*b "<<a*b<<endl;
    cout<<"a%b "<<a%b<<endl;
    cout<<"a/b =int/int "<<a/b<<endl;               // int/int always give int value
    cout<<"a/(double)b "<<a/(double)b<<endl;
    cout<<"a/(float)b "<<a/(float)b<<endl;

    //Relational operator
    int c,d;
    cout<<"Enter the value of c :"<<endl;
    cin>>c;
    cout<<"Enter the value of d :"<<endl;
    cin>>d;

    cout<<"c>d "<<(c>d)<<endl;
    cout<<"c<d "<<(c<d)<<endl;
    cout<<"c>=d "<<(c>=d)<<endl;
    cout<<"c<=d "<<(c<=d)<<endl;
    cout<<"c==d "<<(c==d)<<endl;
    cout<<"c!=d "<<(c!=d)<<endl;

    //logical operator

    // AND -> &&          OR -> ||             NOT -> !

    int e,f;
    cout<<"Enter the value of e : "<<endl;
    cin>>e;
    cout<<"Enter the value of e : "<<endl;
    cin>>f;

    cout<<" e<f && e==f "<<(e<f && e==f)<<endl;
    cout<<" e<f || e==f "<<(e<f || e==f)<<endl;
    cout<<" !(e<f && e==f) "<<(!(e<f && e==f))<<endl;


    //Unary operators ->means we require only one variable

    int x;

    cout<<"Enter the value of x :"<<endl;
    cin>>x;                                  // x=4

    cout<<"x++  : "<<x++<<endl;   // first assign then increment    . ans = 4   valule of x = 5
    cout<<"++x  : "<<++x<<endl;   // first increment then assign    . ans = 6   valule of x = 6 

    cout<<"x--  : "<<x--<<endl;   // first assign then decrement    . ans = 6   valule of x = 5
    cout<<"--x  : "<<--x<<endl;   // first decrement then assign    . ans = 4   valule of x = 4 



    return 0;
}