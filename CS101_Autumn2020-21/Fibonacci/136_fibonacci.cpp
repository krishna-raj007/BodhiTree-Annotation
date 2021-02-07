#include<simplecpp>

main_program{
int n,k,F0=0,F1=1,Fn;
cin>>n>>k;
for(int i=1;i<=n-2;i++)
{ if(i==1) {cout<<F0%k<<endl; }
if(i==2) {cout<<F1%k<<endl; }
Fn=F0%k+F1%k;
F0=(F1)%k;
F1=Fn%k;
cout<<Fn%k<<endl;
}

}
