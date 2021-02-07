#include<simplecpp>

main_program{
//Write your code here
long int k,n,term = 0,term1,term2;
cin>>n>>k;
term1=term;
cout<< term%k <<"\n";
term += 1;
cout<< term%k <<"\n";
repeat(n-2){
  term2 = term1;
  term1 = term;
  term = (term1%k + term2%k)%k;
  cout<<term<<"\n";}
}
