#include<simplecpp>

main_program{
int n,m,i=1.0;
long int term=1.0,mod;
cin>>n>>m;
repeat(n){
term=term*(i%m);
term=term%m;
i++;
mod=term%m;
}
cout<<mod<<endl;
}
