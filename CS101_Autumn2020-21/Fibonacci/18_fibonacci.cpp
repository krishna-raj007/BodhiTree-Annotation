#include<simplecpp>
main_program{

long long int n;
long long int k;
cin>>n>>k;
int t1=0; int t2=1;
long long int ti;
cout<<t1<<endl;
cout<<t2<<endl;
for(long long int i=0;i<n-2;i++){
 ti=(t1+t2)%k;
 cout<<ti%k<<endl;
 t1=t2;
 t2=ti;

 }

 }
