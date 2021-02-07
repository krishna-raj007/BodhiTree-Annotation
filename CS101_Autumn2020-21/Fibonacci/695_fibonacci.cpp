#include<simplecpp>

main_program{


  int a=0,b=1,r,n,k;
  cin>>n>>k;
  if(n==1){
    cout<<"0"<<endl;
    }
  if(n==2){
    cout<<"0"<<endl;
    cout<<b%k<<endl;
  }
  if(n>=3){
    cout<<"0"<<endl;
    cout<<b%k<<endl;
    }
  repeat(n-2)
  {
  r=a+b;
  cout<<r%k<<endl;
  a=b%k;
  b=r%k;
  }
  }
