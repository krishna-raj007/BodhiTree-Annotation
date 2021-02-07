#include<simplecpp>

main_program{
int n, n1 = 0, n2= 1, n3, b,k;
cin >> n >> k; // 1 <= n <= 10e5 1 < k <= 10e5


for (b = 0; b < n; b++)
  {
    if (b <= 1)
      n3 = b;
    else
    {
      n3 = (n1 + n2)%k;
      n1 = n2;
      n2 = n3;
    }
    cout << (n3)<< endl;
    }
    return 0;
}
