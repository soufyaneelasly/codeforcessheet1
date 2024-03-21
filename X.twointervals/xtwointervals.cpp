#include<iostream>


using namespace std ;

long long max(long long a ,long long b){
    if(a<b){
    return b;
    }else{
    return a;
    }
}

long long min(long long a ,long long b){
    if(a<b){
    return a;
    }else{
    return b; 
    }
}




void func(long long l1,long long r1,long long l2,long long r2){
    if((l1>l2 && l1>r2)|| (l2>l1 && l2>r1)){
        cout<<"-1"<<endl;
    
    }else if(l2<=r1){
    cout<<max(l1,l2)<<" ";
    cout<<min(r1,r2)<<endl;


}else if (r1>l2){
cout<<"-1"<<endl;
  cout<<min(l1,l2)<<" ";
    cout<<max(r1,r2)<<endl;


}

}



int main(){


long long l1,r1,l2,r2;
cin>>l1;
cin>>r1;
cin>>l2;
cin>>r2;

func(l1,r1,l2,r2);

}
