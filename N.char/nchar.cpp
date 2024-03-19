#include<iostream>

using namespace std ;


int main(){
int xx;
char x;
cin>>x;
xx=int(x);

if (xx>=65 && xx<=65+25){
cout<<char(xx+97-65)<<endl;
}else if (xx>=97 && xx<=97+25){
cout<<char(xx-97+65)<<endl;
}

}
