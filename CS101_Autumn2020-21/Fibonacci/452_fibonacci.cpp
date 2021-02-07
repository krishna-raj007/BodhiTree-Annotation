#include<simplecpp>

main_program{
    //Write your code here
    long int n,k ;
    cin >> n >> k;

    long int a = 0;
    long int b = 1;
    long int temp = 0;

    if(n >= 1){
        cout << a << endl;

        repeat(n-1){
            cout << b << endl;
            temp = b;
            b = (b + a) % k;
            a = temp;
        }
    }
}

