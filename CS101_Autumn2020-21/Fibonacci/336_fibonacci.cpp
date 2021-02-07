#include<simplecpp>

main_program{
long long n,k;
long long F0=0, F1=1, F2;
cin>>n>>k;
if (n==1) cout<<F0;
if (n>=2) cout<<F0<<endl<<F1<<endl;

for (long long i=2;i<n;i++){
F2=(F0+F1)%k;
cout<<F2<<endl;
F0=F1;
F1=F2;
}

}
