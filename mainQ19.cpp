#include <iostream>
using namespace std;
int main()
{
    int a1,a2,a3,n=0;
    int coutpositire=0,coutNegetive=0;
    float avrage;
    cin>>a1>>a2>>a3;
    if(a1>0){
coutpositire++;
}
if(a2>0){
    coutpositire++;
}
if(a3>0){
    coutpositire++;
}
if(a1<0){
    coutNegetive++;
}
if(a2<0){
    coutNegetive++;
}
if(a3<0){
    coutNegetive++;
}
avrage=(a1+a2+a3)/3.0;
cout<<"Avrage:"<<avrage<<endl;
cout<<"n:"<<coutNegetive<<endl;
cout<<"p:"<<coutpositire;
return 0;
}
    
    
    
    
    
    