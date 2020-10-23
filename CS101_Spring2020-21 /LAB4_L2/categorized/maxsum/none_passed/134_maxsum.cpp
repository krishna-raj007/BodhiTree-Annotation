#include<iostream>
using namespace std;

main(){

int a,b,temp,n;
cout<<"how many number's?";
cin>>n;
int i;


for (i=1;i<=n;i++){
    cin>>temp;
    if(temp>=a){
            b=a;
            a=temp;}

    }
    cout<<a+b;


}



