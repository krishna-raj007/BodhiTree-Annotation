#include<simplecpp>

main_program{

long long int n, k, i;

cin >> n >> k;

long long int a=0,b=1;

cout << a%k << endl;
for (i=0; i<n-1; i++) {
    cout << b%k << endl;
    b=b+a;
    a=b-a;
    }
}
