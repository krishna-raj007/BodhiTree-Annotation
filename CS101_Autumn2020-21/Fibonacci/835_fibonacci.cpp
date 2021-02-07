#include<simplecpp>

main_program{
  long int a=0,b=1,n,k;
  cin>>n>>k;
  cout<<a%k<<endl<<b%k<<endl;
  if(n%2==0){
    repeat(n/2-1){
      a=a+b;
      cout<<a%k<<endl;
      b=b+a;
      cout<<b%k<<endl;
    }
  }
  else {
    repeat((n-3)/2){
      a=a+b;
      cout<<a%k<<endl;
      b=b+a;
      cout<<b%k<<endl;
    }
    a=a+b;
    cout<<a%k<<endl;
  }

}
