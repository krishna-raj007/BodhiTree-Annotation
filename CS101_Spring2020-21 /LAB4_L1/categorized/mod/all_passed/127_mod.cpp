#include<simplecpp>

main_program{

long int n, m, mod;
int r=1;
int i=1;
cin>>n>>m;
repeat(n){
r=(r*i)%m;
i=i+1;
mod = r%m;
}
cout<<mod%m;
}
