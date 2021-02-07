#include<iostream>


using namespace std;

int main()
{
int n,p1=0, p2=1,nextTerm=0 ;

cout<< "enter no. of elements :";

cin>>n;


cout<<"Fibonacci Series:";


for(int i=1; i<=n; ++i)
{
if(i==1)
{
 cout<<""<<p1 ;
 continue;
}
if(i==2)

{ cout<<p2<<"" ;
 continue;

 }
nextTerm = p1+p2;
 p1=p2;
 p2=nextTerm;

 cout<<nextTerm<<" ";


 }
 return 0;
 }
