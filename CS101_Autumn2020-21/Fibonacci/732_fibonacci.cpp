#include<simplecpp>
main_program{unsigned long long  int n,k;
cin>>n>>k;
unsigned long long int x=0,y=1,a;cout<<x%k<<endl;cout<<y%k<<endl;
repeat(n-2){a=(x%k)+(y%k);x=(y%k);y=a;cout<<y%k<<endl;}}
