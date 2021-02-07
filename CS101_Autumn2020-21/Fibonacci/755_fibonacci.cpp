#include<simplecpp>

main_program{
//Write your code here
int n, k;
cin>>n>>k;
int a=0,b=1;
cout<<a%k<<endl<<b%k<<endl;

repeat(n-2){
int f;
f=a+b;
cout<<f%k<<endl;
a=b;
b=f%k;
}


}
