#include<simplecpp>

main_program{
//Write your code here
long long int n,f0=0,f1=1,f2,k;
cin >> n >> k;
cout <<f0<< endl;
cout <<f1<< endl;
for(int i=0;i<=n-3;i++){
f2=f1+f0;
f0=f1%k; f1=f2%k;
cout<<((f2)%k)<<endl;
}
}
