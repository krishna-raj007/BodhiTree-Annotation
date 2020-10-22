#include<simplecpp>

main_program{

long int n,m,nfac,i=1,ans;
cin>>n>>m;
nfac=1;
repeat(n){
   nfac=nfac*i;
   i=i+1;
}
ans=nfac%m;
cout<<ans<<endl;


}
