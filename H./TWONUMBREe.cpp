#include<iostream>

using namespace std;
  
float floor(int a,int b){
    return float(a/b); //-(((a/b)*10)%10)/10;
}

int ceilo(float a,float b){
    float z;
    z=a/b;

    if (int(z)<z){
    return 1 + floor(a,b);
    }else{
        return int(z);
    }
}
int roundo(float a,float b){        
    float z;
    z=(a/b);   

if (z-int(z)<0.5){
    return int(z);
}else{  
return int(z)+1; 
}
}

  
int main(){


double a,b;

cin>>a;
cin>>b;

cout<<"floor "<<a<<" / "<<b<<" = "<<floor(a,b)<<endl;
cout<<"ceil "<<a<<" / "<<b<<" = "<<ceilo(a,b)<<endl;                               
cout<<"round "<<a<<" / "<<b<<" = "<<roundo(a,b)<<endl;
                                                                                                                                                                                                                   
                                                                                                                                                                                                                   
                                                                                                                                                                                                                   
                                                                                                                                                                                                                   
                                                                                                                                                                                                                   
}                                                                                                                                                                                                                                                                                                                                                                                                            
