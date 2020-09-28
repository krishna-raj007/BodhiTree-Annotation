#include<simplecpp>

main_program{
int n,m,r;
cin>>m;
r = m;
while(m != -1){
cin>>m;
r = max(r,m);
}
cout<<r;
}
