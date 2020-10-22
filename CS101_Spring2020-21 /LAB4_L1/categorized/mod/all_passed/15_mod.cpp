#include<simplecpp>

main_program{
 int m,n;
 long long int k=1;
 cin>>n>>m;
 while(True){
  for(int i=1;i<=n;i++){
   int j=i;
  j= j%m;
  k=(k*j)%m;
  }
  while(k>m){
    k= k%m;
  }
   break;
 }
 cout<<k;
}
