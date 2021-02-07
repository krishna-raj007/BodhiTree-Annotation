#include<simplecpp>
main_program{
  long long int n,k,s=0,y=1,x=0,i;
  cin>>n>>k;
  cout<<x<<endl<<y<<endl;
  repeat(n-2){
    s=(x+y)%k;
    cout<<s<<endl;
    x=y;
    y=s;
  }
}
