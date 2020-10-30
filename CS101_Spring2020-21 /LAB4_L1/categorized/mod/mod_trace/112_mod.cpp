#include<simplecpp>

main_program{
int n,m,i=1.0;
long int term=1.0,mod;
cin>>n>>m;
repeat(n){
term=term*(i%m);
cout<<n<<" "<<m<<" "<<i<<" "<<term<<" "<<mod<<endl;
term=term%m;
i++;
cout<<n<<" "<<m<<" "<<i<<" "<<term<<" "<<mod<<endl;
mod=term%m;
cout<<n<<" "<<m<<" "<<i<<" "<<term<<" "<<mod<<endl;
}
cout<<mod<<endl;
}
