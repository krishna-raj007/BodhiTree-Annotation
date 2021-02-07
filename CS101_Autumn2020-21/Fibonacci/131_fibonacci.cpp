#include <simplecpp>
main_program{
    unsigned int a=0, b=1, i=3, n, k, z, f;
    cin >> n >> k ;
    cout << a%k << endl << b%k << endl;
    for ( ; i<=n ; i++){
        f=a+b; z=f%k;
        cout <<z<< endl;
        a=b , b=z;
    };
}
