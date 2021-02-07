#include<simplecpp>

main_program{
//Write your code here
long int a=0;
long int b=1;
long int c=0;
long int k=0;
long int n=0;

cin>>n>>k;
cout<<(a%k)<<endl;
cout<<(b%k)<<endl;
for(long int i=2;i<n;i++)
{
    c=(a+b)%k;
    cout<<c<<endl;
    a=b%k;
    b=c%k;
}
}
