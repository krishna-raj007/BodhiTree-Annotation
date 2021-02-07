#include<simplecpp>

main_program{
  int n,k,a=0,b=1,c;
  cin>>n>>k;
  cout<<"0"<<endl<<"1"<<endl;
  repeat(n-2){
    c=b;
    b=(a+b)%k;
    a=c;
    cout<<(b+k)%k<<endl;
  }

}
