#include<simplecpp>

main_program{
//Write your code here
unsigned long long x=0,y=1;
int n,k;
int t;
cin>>n>>k;
cout<<x<<endl<<y<<endl;
repeat(n-2){
t=((x%k)+(y%k))%k;
cout<<t<<endl;
x=y;
y=t;
}
}
