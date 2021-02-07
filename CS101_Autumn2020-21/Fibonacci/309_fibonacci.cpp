#include<simplecpp>
main_program{
int a=0,b=1,c,n,k;
cin>>n>>k;
cout<<(a%k)<<endl;
cout<<(b%k)<<endl;
repeat(n-2){
 c=(a+b)%k;
 cout<<(c)<<endl;
 a=b;
 b=c;
}
}
