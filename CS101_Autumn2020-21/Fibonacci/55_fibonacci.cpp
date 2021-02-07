#include<simplecpp>
int fibo(int a,int b){
int f;
 if(a==0)
  return a;
 else if(a==1)
  return a;
 else{
  f=((fibo(a-1,b))%b+(fibo(a-2,b))%b)%b;
  return f;
 }
}

main_program{
 int n,k,i,F;
 cin>>n>>k;
  for(i=0;i<n;i++){
  F=fibo(i,k);
  cout<<F<<"\n";
  }
 }


