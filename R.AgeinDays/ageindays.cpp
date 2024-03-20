#include<iostream>

using namespace std;
int main(){

int j,years,days,month;
cin>>j;

years=j/365;

month=(j-years*365)/30;

days=j-(365*years)-(month*30);

cout<<years<<" years"<<endl;
cout<<month<<" month"<<endl;
cout<<days<<" days"<<endl;









}
