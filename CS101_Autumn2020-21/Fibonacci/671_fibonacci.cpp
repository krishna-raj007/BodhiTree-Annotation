#include<simplecpp>

main_program{
//Write your code here
 long long int n,k,a=0,b=1,c;
 int i;

 cin>>n>>k;

 cout<<a<<"\n"<<b<<endl;

 for(i=2;i<n;i++)
 {
 c=(a%k+b%k)%k;
 cout<<c%k<<endl;
 a=b;
 b=c;

 }

}
