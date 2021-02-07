#include<iostream>
using namespace std;
int main(){
long long int f0=0;
long long int f1=1;
long int n;long long int k;
cin>>n>>k;
cout<<f0%k<<endl;
cout<<f1%k<<endl;
for(int i=0;i<=n-3;i++)
{
long long int f2=(f1+f0)%k;
cout<<f2<<endl;
f0=f1;
f1=f2;
}
return 0;
}
