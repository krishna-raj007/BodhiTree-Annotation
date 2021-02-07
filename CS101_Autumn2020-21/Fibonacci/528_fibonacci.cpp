#include<simplecpp>
main_program{
long long int n,k;
cin>>n>>k;
long long int t_0,t_1,s_0;
int f_0=0,f_1=1;
t_0=f_0;
t_1=f_1;
cout<<f_0%k<<endl<<f_1%k<<endl;
repeat(n-2){
s_0=((t_1)%k+(t_0)%k)%k;
t_0=(t_1)%k;
t_1=s_0;
cout<<s_0<<endl;
}
}
