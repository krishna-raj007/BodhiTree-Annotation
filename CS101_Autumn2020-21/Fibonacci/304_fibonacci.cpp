#include<simplecpp>

main_program{


 int n,k;
 cin>>n>>k;
 int ans;
 int a=0;
 int b=1;
 int c;
 int i = 1;
cout<<a<<endl<<b<<endl;
 for(i=1;i<=n-2;i++){

 c = (a+b)%k;
 a = b;
 b = c;

 cout<<c<<endl;

 }























}
