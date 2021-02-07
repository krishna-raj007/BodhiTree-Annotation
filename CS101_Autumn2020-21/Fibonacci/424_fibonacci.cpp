#include<simplecpp>

main_program{
long long int n, k,f1 = 1,f2 = 1,fn;
cin >> n >> k;

cout << 0 << endl << f1 << endl << f2 << endl;
for(int i = 3; i<n;i++){
fn= f1 + f2;
f1 = f2%k;
f2 = fn%k;
cout << fn%k << endl;
}



}
