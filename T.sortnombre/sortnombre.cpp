#include<iostream>

using namespace std;

long long comparemax(long long a,long long b){
if (a>b){
return a;
}else{
return b;
}

}
 
long long comparemin(long long a,long long b){
if (a<b){   
return a;
}else{ 
return b;
}
 
}



long long max(long long a,long long b,long long c){
long long maxx ;
maxx=comparemax(comparemax(a,b),c);
return maxx;
}
long long min(long long a,long long b,long long c){ 
long long minn ;
minn=comparemin(comparemin(a,b),c);
return minn;

}



int main(){

    long long a,b,c;

    cin>>a;
    cin>>b;
    cin>>c;
cout<<min(a,b,c)<<endl;
cout<<(a*b*c)/(min(a,b,c)*max(a,b,c))<<endl;
cout<<max(a,b,c)<<endl;
cout<<endl;
cout<<a<<endl<<b<<endl<<c<<endl;


}
