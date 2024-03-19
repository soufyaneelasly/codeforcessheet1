#include<iostream>

using namespace std;

int main(){

int xy;
cin>>xy;
int yx;
int temp;
temp=0;
yx=0;
while(xy>0){

temp=xy%10;
yx=yx*10+temp;
xy/=10;

}

if ((yx%10)%2==0){
cout<<"EVEN"<<endl;

}else{
cout<<"ODD"<<endl;

}
}
