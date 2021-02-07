#include<simplecpp>


main_program{

long long n,k;

long long F1=0,F2=1,F3;
cin>>n>>k;
if (n==1) cout<<F1;
if (n>=2) cout<<F1<<endl<<F2<<endl;
long long i;
 for (i=2;i<n;i++) {
F3= (F1+F2)%k ;
cout<<F3<<endl;
F1=F2;
F2=F3;
}
}
