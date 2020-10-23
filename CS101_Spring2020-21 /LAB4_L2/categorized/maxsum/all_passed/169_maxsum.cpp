#include<simplecpp>

main_program{
int n,x,a,b;
cin>>n;
cin>>a>>b;
int sum = a+b;
repeat(n-2){
cin>>x;
sum= max(sum, b+x);
b =x;
}
cout<<sum<<endl;
}
