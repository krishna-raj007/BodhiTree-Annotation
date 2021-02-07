#include<simplecpp>
main_program{
int n,k; cin>>n>>k;
int f0=0,f1=1;
cout<<f0%k<<endl<<f1%k<<endl;
if((n>=1&&n<=100000)&&(k>1&&k<=100000)){
   repeat(n-2){
              int nextf=f0+f1;
              f0=f1;
              f1=nextf;
              cout<<nextf%k<<endl;
              }
    }
}
