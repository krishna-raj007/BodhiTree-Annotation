#include<simplecpp>
main_program{
int n,p,q;
cin>>n;
cin>>p>>q;
int maxi{p+q};
if(n>2){
 repeat(n-2){
  cin>>p;
  if(p+q>maxi){
   maxi=p+q;
   }
   q=p;
  }
 }
 cout<<maxi;
}
