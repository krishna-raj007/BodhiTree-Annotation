#include<simplecpp>

main_program{

    long int n; int i = 0; double p = 0;
    cin >> n;

    repeat(n+1){
        p = p + 4 * (pow(-1,i))*1/(2*i + 1);
        i = i + 1;
        }

    cout << p << endl;
}
