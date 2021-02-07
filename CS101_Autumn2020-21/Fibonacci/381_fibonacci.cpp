#include<simplecpp>

main_program{
 long int term3;
 long int term1=0;
long int term2=1;
int n,k;
cin>>n>>k;
if(1<=n<=1.0e5&&1<k<=1.0e5){

cout<<0<<endl;
cout<<1<<endl;
for(int x=1;x<=n-2;x++){
term3=(term1+term2)%k;
cout<<term3<<endl;
term1=term2;
term2=term3;}}










}
