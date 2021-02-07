#include<simplecpp>
main_program{
long long int f0=0,f1=1,f2;
long long int n,k;
cin >> n >> k;
repeat(n){
cout << f0%k << endl;
f2=f0+f1;
f0=f1;
f1=f2;
}
}
