#include<simplecpp>

main_program{

int n,k;
cin>>n>>k;
long int f0=0,f1=1,f2;
cout<<f0%k<<endl<<f1%k<<endl;
repeat(n-2){
f2=(f1+f0)%k;
cout<<f2%k<<endl;
f0=f1;f1=f2;

}
//Write your code here

}
