#include<simplecpp>

main_program{


  int p=0,q=1,r,n,k;
  cin>>n>>k;
  if(n==1){
    cout<<"0"<<endl;
    }
  if(n==2){
    cout<<"0"<<endl;
    cout<<q%k<<endl;
  }
  if(n>=3){
    cout<<"0"<<endl;
    cout<<q%k<<endl;
    }
  repeat(n-2)
  {
  r=p+q;
  cout<<r%k<<endl;
  p=q%k;
  q=r%k;
  }
  }
