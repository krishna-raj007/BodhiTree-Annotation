#include<simplecpp>

main_program{
int n,s=0,m=0;
cin>>n;
repeat(n){
int q;
cin>>q;
s=s+q;
m=max(m,s);
s=q;
}
cout<<m;
}
