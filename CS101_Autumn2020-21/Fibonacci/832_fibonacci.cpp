#include<simplecpp>
main_program{
//Write your code here
unsigned long long int n,k,a=0,b=1;
cin>>n>>k;
cout<<0<<endl;
cout<<1<<endl;
repeat(n-2){
 cout<<(a%k+b%k)%k<<"\n";
 b=a+b;
 a=b-a;
}
}
