#include<simplecpp>

main_program{
long long a = 0, b = 1, n, k, s;
cin >> n >> k;
if (n==1) cout << a%k << endl;
else cout << a%k << endl << b%k << endl;
for(int count = 3;count <= n;count++)
{
   s = (a + b)%k;
   a = b;
   b = s;
   cout << s<< endl;
}

}
