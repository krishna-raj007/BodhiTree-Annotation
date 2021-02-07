#include<simplecpp>

main_program{
  //Fibonacci
  unsigned long int n, k, f0=0, f1=1, nextf=0, mod;
  cin>>n>>k;
  while((n>0 && n<=1000000 ) && (k <= 1000000 && k > 1)){
    mod = f0%k  ;
    cout<<mod<<endl;
    nextf = f0 + f1 ;
    f0 = f1 ;
    f1 = nextf ;
    n--;

    }

  }
