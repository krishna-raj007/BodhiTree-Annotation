#include<simplecpp>

main_program{
int n,a,b,c=0;
cin>>n>>a;
repeat(n-1){
cin>>b;
if(c<a+b){
c=a+b;}
a=b;
}
cout<<c;

	//Write your code here

}
