#include<simplecpp>

main_program{
//Write your code here
int n,k;
cin>>n>>k;
int x = 0;
int y = 1;
int a=x;
for(int i=0;i<n;i++){
 a= x%k;
 x=x%k;
 y= y%k;
cout<<a<<endl;

x=y;
y=(y+a);





}





















}
