#include<simplecpp>

main_program{
// f0 = 0 and f1 = 1
// fn = fn-1 + fn-2
unsigned int n, k, f1=1, f0=0, f2 ;
cin >> n >> k;
cout << f0%k << endl ;
cout << f1%k << endl;
repeat(n-2){
    f2 = f1%k + f0%k;
    cout << f2%k<< endl;
    f0 = f1;
    f1 = f2;
    }

}
