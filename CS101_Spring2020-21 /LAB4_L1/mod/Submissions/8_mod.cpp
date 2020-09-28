#include<simplecpp>

main_program{
int n,m,p;
cin>>n;
cin>>m;
long int s;
p=1;
s=1;
repeat(n-1){
p++;
s=s*p;
}
cout<<s%m;
}
