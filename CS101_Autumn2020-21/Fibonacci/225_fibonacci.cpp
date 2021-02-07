#include<simplecpp>

main_program{
long int n,k,a=0,b=1,c;
cin>>n>>k;
cout<<a%k<<endl<<b%k<<endl;
repeat(n-1)
{
 c=b%k;
 b=(a+b)%k;
 a=c%k;
 cout<<a%k<<endl;
}

}
