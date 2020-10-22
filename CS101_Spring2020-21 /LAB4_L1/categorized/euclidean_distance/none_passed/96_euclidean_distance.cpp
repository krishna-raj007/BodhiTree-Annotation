#include <simplecpp>
main_program { float r,a,b,t, sum;
int q;
cin >> q;
t = 0;
repeat(q)
{cin>> a >> b ;
 sum = (a-b) * (a-b);
  t = t+ sum;



}
t = sqrt(t);
printf("%.2f\n",t);
}
