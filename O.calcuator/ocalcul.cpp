#include<iostream>
using namespace std ;

int main(){

int a,b;
char op;

cin>>a;
cin>>op;
cin>>b;

switch (op) {
    case '+':
        cout <<a+b<<endl;
        
        break;
    case '-':
        cout<<a-b<<endl;
        break;
    case '*':
        cout<<a*b<<endl;
        break;
    case '/':
        cout<<a/b<<endl;
    break;


    default:
        cout<<"only + - / * its a calculator "<<endl;


}


}
