#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{long long int n,k,i;
cin>>n>>k;
cout<<"0"<<endl;
long long int a=0,b=1,c=0,d=0;
for(i=0;i<n-1;i++)
{
a=b;
b=c;
c=a+b;
d=c%k;

cout<<""<<d<<endl;


}
}
