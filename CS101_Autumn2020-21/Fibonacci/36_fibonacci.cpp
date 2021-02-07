#include<simplecpp>
#include<bits/stdc++.h>
#include<iomanip>


main_program{
    long n, k;
    cin >> n >> k ;
    int fp2 = 0, fp1 = 1, f;
    if (n == 1){
    cout << fp2 << endl ;
    }
    if(n >= 2){
    cout << fp2 << endl << fp1 << endl ;
    }
    repeat(n-2){
    f = fp2 + fp1;
    cout << f % k << endl ;
    fp2 = fp1;
    fp1 = f%k;


    }
}
