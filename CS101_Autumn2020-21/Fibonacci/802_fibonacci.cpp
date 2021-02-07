#include<simplecpp>

main_program{

long long int n,k,i = 1,fn = 0,f0 = 1, f1 = 0; cin >> n >> k;

while(i <= n){
    cout << fn % k << endl;
    fn = f0 + f1;
    f0 = f1;
    f1 = fn;
    i++;

    }

}
