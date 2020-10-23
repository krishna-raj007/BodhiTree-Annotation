#include<simplecpp>

main_program{
int n,a,b,c,counter=2;
cin>>n;
a=0;
b=1;
c=1;
if(n==0)cout<<"0";
else if(n==1)cout<<"1";
else{
while(true) {c=a+b;
    if(n<=c){

    break;}
    a=b;
    b=c;
    counter++;
    }
    if(n==c)cout<<counter;
    else cout<<"-1";
    }

}








