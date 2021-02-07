#include<simplecpp>

main_program{
int n,k,f0=0,f1=1,f,s;
cin >> n >>k;
f0=f0%k;
f1=f1%k;
cout << f0 << endl;
cout << f1 << endl;

for(int i=1; i<=(n-2);i++){
    f=(f0 + f1)%k;
    cout << f << endl;
    f0=f1;
    f1=f;
}
















}
