#include <simplecpp>

main_program{
int n,k;
cin>>n>>k;
for(int i=2,Fi2=0,Fi1=1,Fi,s;i<=n;i=i+1){
 Fi= (Fi1 + Fi2)%k;
 int nextFi1=Fi;
 int nextFi2=Fi1;
 Fi1=nextFi1;
 Fi2=nextFi2;
 cout<<Fi<<endl;
 }
}
