#include<simplecpp>
main_program{
long int n,s;
long long x=100000000;
int a=0,b=1,i=0;
cin>>n;
if(n==0){
cout<<"0";
return 0;
}
repeat(x){
s=a+b;
b=a;
a=s;
i++;
if (s==n)
    {cout<<i<<endl;
    break;}
else if(s>n)
{
    cout<<-1<<endl;
    break;
}
}

}
