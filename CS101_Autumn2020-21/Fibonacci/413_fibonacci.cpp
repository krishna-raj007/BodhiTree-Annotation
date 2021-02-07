#include<simplecpp>

main_program{
long long int n, k;
long long int f1=0, f2=1;
cin >> n >> k;
cout << f1%k << endl;
cout << f2%k << endl;
repeat(n-2){
long long int f3;
f3= (f1%k + f2%k);
cout << f3%k << endl;
f1=f2%k;
f2=f3%k;
}
}
