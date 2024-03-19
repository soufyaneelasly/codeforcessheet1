#include<iostream>
using namespace std;
int main(){

int xx;
char x;
cin>>x;


xx=int(x);

if (xx>=48 && xx<=48+9){
cout<<"IS DIGIT"<<endl;
}else if (xx>=65 && x<=65+25){

cout <<"ALPHA"<<endl;
cout<<"IS CAPITAL"<<endl;
}else if (xx>=97 && xx<=97+25){

cout<<"ALPHA"<<endl;
cout<<"IS SMALL"<<endl;

}




}
