#include<simplecpp>

main_program{
//Write your code here
 int i,n,k,Fi=0,Fj=1,Fk;
 cin>>n;cin>>k;
 cout<<"0"<<endl<<"1"<<endl;
 for(i=1;i<=n-2;i++){
  Fk=Fi%k+Fj%k;
  cout<< Fk%k <<endl;
  Fi=Fj;
  Fj=Fk;







 }
}
