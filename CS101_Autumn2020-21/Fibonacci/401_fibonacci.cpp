#include<simplecpp>

main_program{
//Write your code here
long long int n,k,x,y=0,a=0,b=1;
cin>>n>>k;
cout<<a<<endl;
cout<<b<<endl;
for(int i=1;i<n-1;i++){
x=a+b;
cout<<x%k<<endl;
a=b;
b=x;

}
}
