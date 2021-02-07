#include<simplecpp>

main_program{
  int n, k;
  cin>>n>>k;
  long long int f0 = 0, f1 = 1, f;
  cout<<f0%k<<endl;
  cout<<f1%k<<endl;
  if(1<=n&&n<=100000&&1<k&&k<=100000){
    repeat(n-2){
      f = (f0+f1)%k;
      cout<<f%k<<endl;
      f0=f1;
      f1=f;
    }
    }


}
