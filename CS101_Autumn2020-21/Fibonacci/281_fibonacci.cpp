#include<simplecpp>

main_program{
    long int a = 0 , b = 1 , n , k , fn= 0;
    cin >> n >> k;
    cout << a <<endl;
    cout << b <<endl;
    repeat(n-2){
        fn = (a%k+b%k);
        cout << fn%k <<endl;
        a = b;
        b =fn;
        }
}
