#include<iostream>

using namespace std ;




int two(long long n){
    
    int y,yy,nn;
    y=n%10;
    n=n/10;
    yy=n%10;
    
    nn=yy*10+y;
    
    return nn;
    
}

int main(){



long long a,b,c,d,rs;

cin>>a;
cin>>b;
cin>>c;
cin>>d;

rs=two(two(a)*two(b)*two(c)*two(d));
if(rs<10){
cout<<"0"<<rs<<endl;
}else{
cout<<rs<<endl;

}

}
