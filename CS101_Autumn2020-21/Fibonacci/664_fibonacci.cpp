#include<simplecpp>
/* author : KSatyam
   name   : fibonacci.cpp */

main_program{
  long int n,k;
  cin>>n>>k;
  long int i=0;
  long long int r_1=1,r_2=0,r;
  while(i<n){
    if(i==0) cout<<0<<endl;
    else if(i==1) cout<<1<<endl;
    else{
      r=(r_1+r_2)%k;
      cout<<r<<endl;
      r_2=r_1;
      r_1=r;
    }
    i++;
  }

}
