#include<simplecpp>

main_program{
unsigned long long int n,i,k,s=0,t,a=0,b=1;
cin>>n>>k;

cout <<a<<"\n";
cout << b<<"\n";
for (i=2;i<n;i++){
s=(a+b)%k;
a=b;
b=s;
t=s%k;
cout << t%k ;
cout <<"\n";
}
//Write your code here

}
