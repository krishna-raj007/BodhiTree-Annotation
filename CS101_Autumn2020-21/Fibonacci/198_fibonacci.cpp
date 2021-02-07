
#include <math.h>
#include<simplecpp>

main_program{
//Write your code here
long long int n, k;
    cin >> n >> k;
    long long int left=0, right=1;
    cout << 0 << endl;
    if (n>1){
        cout << 1%k << endl;
    }
    long long int i=3;
   while (i<=n){
        long long int temp = left + right;
        cout << temp%k << endl;
        left = right%k;
        right = temp%k;
        i++;
    }}




