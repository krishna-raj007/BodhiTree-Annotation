#include<simplecpp>

main_program{
//Write your code here
long long int n,k,f0=0,f1=1,x;
cin>>n>>k;
cout<<0<<endl;
cout<<1%k<<endl;
repeat(n-2){
 x= f0%k+f1%k;
 f0=f1;
 f1=x;
 cout<<x%k<<endl;

}



}
