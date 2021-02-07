#include<simplecpp>

main_program{
long long int x=0,y=1,s;
long long int n,k;
cin >>n >>k;
if(n==1){
cout <<x%k;
}
else if(n==2){
cout <<x%k <<"\n";
cout <<y%k <<"\n";
}
else if(n>2){
cout <<x%k <<"\n";
cout <<y%k <<"\n";
repeat(n-2){
  s=(x+y);
  x=y;
  y=s;
  cout <<s%k <<"\n";
  }
}
}
