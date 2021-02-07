#include<simplecpp>
main_program{
  int i=2,n,k;
  cin>>n>>k;
  cout<<0%k<<"\n"<<1%k<<"\n";

  int arrk[100000];

  arrk[0]=0;
  arrk[1]=1;

  while(i<=n-1){

    arrk[i]=arrk[i-1]+arrk[i-2];
    cout<<arrk[i]%k<<"\n";
    i=i+1;}
wait(1);
  }
