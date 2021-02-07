#include<simplecpp>
main_program{
 long int n,k ; cin>>n>>k;
  long int T_0,T_1, S_0;
  int F_0=0,F_1=1;

T_0=F_0;
T_1=F_1;
cout<<F_0%k<<endl<< F_1%k<<endl;
int a=n-2;
  while( a>0){
  S_0= ((T_1)%k+(T_0)%k)%k;
   T_0=(T_1)%k;
    T_1= S_0;
    cout<< S_0<<endl;
    a-- ;

    }

 }
