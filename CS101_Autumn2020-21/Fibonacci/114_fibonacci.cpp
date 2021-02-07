#include<simplecpp>

main_program{
//Write your code here
long long int n,k;
cin>>n>>k;
cout<<0<<endl;
cout<<1<<endl;
int a=0,b=1,c;
for(int i=3;i<=n;i++){
    c=a+b;
    cout<<c%k<<endl;
    a=b%k;b=c%k;

  }

}
