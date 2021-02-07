#include<simplecpp>

main_program{

 int n, k, f0=0, f1=1, answer;

 1<=n<=pow(10,5);  1<k<=pow(10,5);   cin>>n>>k;

 cout<<f0<<endl<<f1<<endl;

 repeat(n-2){

  int f2;

  f2 = f1 + f0;

  answer = f2%k;   if(k<0){ answer=answer+k;};

  f0 = f1;  f1 = f2;  cout<<answer<<endl;

 };



}
