#include<iostream>
using namespace std;
int main(){
    cout<<"Hello world "<<endl;
    cout<<"my world\n";           // my world
    
    string c = "yes";
    char b='a';
    cout<<c<<"  "<<b<<endl;
    cout<<sizeof(c)<<"  "<<sizeof(b)<<endl;
    
    int x = 1;
    float y = 2.5f;
    double z = 1.22222;
    bool w = true;
    cout<<sizeof(x)<<endl;
    cout<<sizeof(y)<<endl;
    cout<<sizeof(z)<<endl;
    cout<<sizeof(w)<<endl;
    
    return 0;
}