#include<simplecpp>


main_program{

 long long int n,fib1=1,fib2=1,fibn=1,count=0;
 cin>>n;

 if(n==0){
    cout<<"0";
    return 0;
 }

 if(n==1){
    cout<<"1";
    return 0;
 }

 while(fibn<n){
  fibn=fib1+fib2;
  fib1=fib2;
  fib2=fibn;
  count=count+1;

  }

  if(fibn==n) cout<<count+2;

 else cout<<"-1";

}
