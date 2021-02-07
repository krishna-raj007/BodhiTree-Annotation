#include<simplecpp>

main_program{
//Write your code here
int n,k,p,q;
cin>>n>>k;
int f0=0,f1=1,i;
p=f0%k;
q=f1%k;
cout<<p<<endl<<q<<endl;
for(int i=2;i<n;i++){
int next =(f0+f1)%k;
f0=f1;
f1=next;
cout<<next<<endl;
}
}
