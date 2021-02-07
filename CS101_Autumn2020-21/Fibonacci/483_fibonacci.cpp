#include<simplecpp>

main_program{
//Write your code here

long long int n,k,f1,f2,f3;
f1=1;
f2=1;
cin>>n>>k;

if (n>=4){
    cout<<0<<endl;
    cout<<1<<endl;
    cout<<1<<endl;
    repeat(n-3){
    f3 = (f2%k)+(f1%k);
    cout<<f3%k<<endl;
    f1=f2;
    f2=f3;
    }
}
if (n==3){cout<<0<<endl;cout<<1<<endl;cout<<11<<endl;}
if (n==2){cout<<0<<endl;cout<<1<<endl;}
if (n==1){cout<<0<<endl;}
}
