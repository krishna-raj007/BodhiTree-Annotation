#include<simplecpp>

main_program{
    int n,fib0=0,fib1=1,fibi=0,counter=1,temp=0;
    cin>>n;
    if(n>=2){
    while(fibi!=n)
    {fibi=fib0+fib1;
    fib0=fib1;
    fib1=fibi;
    counter=counter+1;
    if(fibi>n)
    {cout<<"-1";
    temp=1;break;}
    }
    }

if(temp!=1)cout<<counter;

if(n==0){cout<<"0";}
if(n==1){cout<<"1";}
}


