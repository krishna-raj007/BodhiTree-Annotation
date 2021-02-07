#include<simplecpp>
main_program{
int f0=0,f1=1,i=0;
int n,k;
cin >>n>>k;
for(i=0;i<n;i++){
cout<<f0%k<<endl;
int f=(f0+f1)%k;
f0=f1;
f1=f;
}

}
