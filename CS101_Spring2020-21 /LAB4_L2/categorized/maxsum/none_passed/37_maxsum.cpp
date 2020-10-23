#include<simplecpp>

main_program{
int n;
cin>>n;
int maxi=0,a,b;
if(2<=n<=100 && 1<=a<pow(10,17) && 1<=b<pow(10,17)){
repeat(n){
    int c;
cin>>a>>b;
c=a+b;
maxi= max(c,maxi);
}
cout<<"The maximum sum is:"<<maxi<<endl;}
else cout<<"Invalid number"<<endl;
}
