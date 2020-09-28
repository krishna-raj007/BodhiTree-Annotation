#include<simplecpp>
main_program{
int n,m,a=1;
cin>>n>>m;
cout<<endl;
repeat(n-1){
a=(a%m)*(n%m);
n--;
}
cout<<a%m<<endl;
}
