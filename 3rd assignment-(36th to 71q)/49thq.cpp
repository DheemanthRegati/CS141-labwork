#include<iostream>
using namespace std;
int main(){
    int a,i,b,c=1,x,s=0;
    cin>>a;
    
    for(i=2;i<=a;i++){c=0;
    for(b=2;b<i;b++){
                     if((i%b)==0)
                     {
                     c=1;
                     break;}
                     
                     }
    if(c==0){s+=i;}
    } 
    cout<<s;
    cin>>x;
    return 0;}
