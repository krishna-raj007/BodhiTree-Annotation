#include<simplecpp>

main_program{
   long long int n,k,a=0,c,b=1;
  cin>>n>>k;
  cout<<"0"<<endl;
  repeat(n-1){
    a=a%k;
    b=b%k;
    c=a;
    a=a+b;
    b=c;

    cout<<(a)%k<<'\n';}
}
