#include<simplecpp>

main_program{
int n,k;
cin>>n>>k;
unsigned long long a0=0,a1=1;

for(int i=0;i<n;i++){
  cout<<a0<<endl;
  int x=a0%k;
  a0=a1%k;
  a1=(a0+x)%k;

  }

}
