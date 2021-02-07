#include<simplecpp>
#include<iostream>
using namespace std;
main_program{
long int n;
long int k;
int f;
cin>>n;
cin>>k;
int a=0,b=1;
cout<<0<<endl<<1<<endl;
for(int i=0;i<(n-2);i++)
{
f=(a+b)%k;
a=b%k;
b=f%k;

cout<<(f)<<endl;
}

}
