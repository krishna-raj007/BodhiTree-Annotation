#include<simplecpp>

main_program{
long long int n,a=1,b=1,s=0,c=3;
cin>>n;
if(n==0)cout<<0;
if (n==1)cout<<1;
if(n>=2)
{while(n>=s){
s=a+b;
if (s==n){cout<<c;break;}
c++;
a=b;
b=s;

}
}
if(s>n)cout<<-1;



}

