#include<iostream>
using namespace std ;
bool opop(int a,char op,int b){
    if(op=='>'){

        return a>b;

    }else if(op == '='){
    return a==b;
    }else if (op =='<'){
        return a<b;
    }
    }

int main(){

int a,b;
char op;

cin >>a;
cin>>op;
cin>>b;


if (opop(a,op,b)){
cout<<"Right"<<endl;
}else{
cout<<"Wrong"<<endl;


}
}
