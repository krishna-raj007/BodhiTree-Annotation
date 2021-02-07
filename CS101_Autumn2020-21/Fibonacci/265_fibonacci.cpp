#include<simplecpp>
// Author:Tanvi
// Program to print the value of the Fibonacci series uptil a number n modulo a given value k
main_program{
long int n,k;
cin>>n>>k;
long int f1=0, f2=1, fibonacci1;
cout<<"0"<<endl<<"1"<<endl;
repeat(n-2){
  fibonacci1=((f1%k)+(f2%k))%k;
  f1=f2;
  f2=fibonacci1;
  cout<< abs(fibonacci1%k)<<endl;

}
}
