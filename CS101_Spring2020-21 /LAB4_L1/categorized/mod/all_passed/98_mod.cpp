#include<simplecpp>

main_program{
int i,n,m;
long long int product=1;
  cin>>n>>m;
  for(i=1;i<=n;i++){
    product=(product*i)%m;


}
cout<<product;
}
