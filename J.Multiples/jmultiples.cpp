#include<iostream>

using namespace std;


bool ismultiple(float a,float b){

    float z;
    z=a/b;
    float x ;
    x=b/a;
    if (int(z)-z==0.0){
return true;
    }else if(int(x)-x==0.0){
return true;
    }else{
    return false;
    }




}






int main(){

int a,b;

cin>>a;
cin>>b;

if (ismultiple(a,b)){
cout<<"Multiples"<<endl;
}else{
cout<<"No Multiples"<<endl;

}







}

