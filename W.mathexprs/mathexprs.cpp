#include<iostream>
using namespace std ;

long long calc(int a,char op,int b){
    if(op=='+'){
                                                                                                                                            
        return a+b;                                                                                                                      
                                                                                                                                            
    }else if(op == '-'){                                                                                                                    
    return a-b;                                                                                                                          
    }else if (op =='*'){                                                                                                                    
        return a*b;                                                                                                                      
    }                                                                                                                                       
    } 


bool opop(int a,int b,char op,int c){
    if(op=='+'){

        return a+b==c;

    }else if(op == '-'){
    return a-b==c;
    }else if (op =='*'){
        return a*b==c;
    }
    }

int main(){

int a,b,c;
char op,eql;

cin >>a;
cin>>op;
cin>>b;
cin>>eql;
cin>>c;



if (opop(a,b,op,c)){
cout<<"Yes"<<endl;
}else{
cout<<calc(a,op,b)<<endl;


}
}
