#include <iostream>
using namespace std;

int main(){
    char op;
    double first,second;
    cout<<"Enter an operator (+,-,*,/):";
    cin>>op;
    cout<<"enter two operators:";
    cin>>first>>second;

    switch(op)
    {
        case '+':
            cout<<first<< "+" << second<<"=" << first+second;
            break;
        case '-':
            cout<<first<< "-" << second<<"=" << first-second;
            break;
        case '*':
            cout<<first<< "*" << second<<"="<< first*second;
            break;
        case '/':
            cout<<first<< "/" << second<<"="<< first/second;
            break;
        default:
            cout<<"error!!!";
            break;
    }
    return 0;
}