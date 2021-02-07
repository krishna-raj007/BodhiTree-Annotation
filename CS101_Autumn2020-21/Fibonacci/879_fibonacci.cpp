#include<simplecpp>

main_program{
//Write your code here

long long int n,h;
long long int x=0,y=1,z;

cin>>n;
cin>>h;
cout<<x%h<<endl;
cout<<y%h<<endl;


repeat(n-2){

z=x+y;

cout<<z%h<<endl;
x=y;
y=z;

}








}
