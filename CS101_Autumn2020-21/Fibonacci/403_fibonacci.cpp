#include<simplecpp>

main_program{
//Write your code here
int n,x,k;
cin>>n>>k;
int a=0;
int b=1;
for(int i=1;i<=n;i++){
cout<<a%k<<endl;
x=(a+b)%k;
a=b;
b=x;


}

}
