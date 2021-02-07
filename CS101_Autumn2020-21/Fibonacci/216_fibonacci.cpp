#include<simplecpp>
main_program{
  long int n , k ,f2, f0=0 , f1=1 ;
  cin>>n>>k;

  if (n>=3)
  cout<<"0"<<endl<<1%k<<endl;
  repeat(n-2){


    f2= f0 + f1 ;
     cout<<f2%k<<endl;
     f0=f1;
     f1=f2;


  }
}
