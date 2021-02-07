#include<simplecpp>

main_program{
int n, first = 0, second = 1, next, c,k;
cin >> n >> k;

for (c = 0; c < n; c++)
  {
    if (c <= 1)
      next = c;
    else
    {
      next = (first + second)%k;
      first = second;
      second = next;
    }
    cout << (next)<< endl;
    }
    return 0;










}
