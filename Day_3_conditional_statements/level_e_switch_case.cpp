//default: → Optional; runs if no case matches.
#include<iostream>
using namespace std;
int main(){

    int month;
    cout<<"Enter the number (1 to 12)"<<endl;
    cin>>month;

    switch(month){
        case 1: cout<<"Jannuary"<<endl; break;
        case 2: cout<<"February"<<endl; break;
        case 3: cout<<"March"<<endl; break;
        case 4: cout<<"April"<<endl; break;
        case 5: cout<<"May"<<endl; break;
        case 6: cout<<"June"<<endl; break;
        case 7: cout<<"July"<<endl; break;
        case 8: cout<<"August"<<endl; break;
        case 9: cout<<"September"<<endl; break;
        case 10: cout<<"October"<<endl; break;
        case 11: cout<<"November"<<endl; break;
        case 12: cout<<"December"<<endl; break;
        default : cout<<"Invalid month"<<endl;

    }

    return 0;
}

/*
In a switch, once a matching case is found, the program does not automatically stop at the end of that case.

Without break;, the program will continue executing all the cases below it (this is called fall-through) — even if those cases don’t match.

break; tells the program: "Stop here, and jump out of the switch block."

*/