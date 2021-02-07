#include<simplecpp>
main_program{
 long long int n,k;
cin>>n>>k;

long long int first=0,second=1,next;
cout<<first<<endl;
cout<<second<<endl;
for( int i=3; i<=n; i++){

next=(first+second)%k;
cout<<next<<endl;
first=second;
second=next;}

}
