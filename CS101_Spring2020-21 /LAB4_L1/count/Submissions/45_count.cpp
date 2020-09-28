#include<simplecpp>
main_program{
int m,n;
cin>>m;
repeat(m){
int count=0;
cin>>n;
if(n%2=0)count=count+1;
if(n%3=0)count=count+1;
if(n%5=0)count=count+1;
if(n%7=0)count=count+1;
if(n%11=0)count=count+1;
cout<<count<<endl;
}
}

