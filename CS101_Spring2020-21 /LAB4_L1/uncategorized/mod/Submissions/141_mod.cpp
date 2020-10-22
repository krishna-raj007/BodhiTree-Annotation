#include<simplecpp>

main_program{
long long int n,m,a,c;
cin>>n>>m;
a=1;
for(int i=1;i<=n;i++){
a=(a*i)%m;
}
cout<<a;

}
