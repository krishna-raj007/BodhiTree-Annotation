#include<simplecpp>

main_program{
int n, i = 0;
double ans = 0, c = 0;
cin >> n;
while( i <= n ) {
    double a = 1/( 1 * ( i * 2.0 ) + 1) , b = -1;
    int j = 0;
    while( j <= i ) {
        b *= -1.0;
        j++;
        }
    c = a * b;
    ans = ans + ( 4 * c );
    i++;
    }
cout << ans << endl;
}


