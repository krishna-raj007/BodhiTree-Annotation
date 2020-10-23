#include<simplecpp>

main_program{
int n;
float a1, a2, sum = 0, maxsum = 0;
cin >> n ;
while ( n-- ) {
    cin >> a2;
    sum = a1 + a2;
    maxsum = max( maxsum , sum);
    a1 = a2;
    }
cout << maxsum;
}

