#include<simplecpp>

main_program
{
long int n,k;
cin>>n>>k;
long int a=0,b=1,c=1;

if( ((n>=1)&&(n<=100000))&&((k>1)&&(k<=100000)) )
{
cout<<"0"<<endl;
  repeat(n-1)
  {
  cout<<c<<endl;
  c=(b%k+a%k)%k;
  a=b;
  b=c;
  }
}

}

