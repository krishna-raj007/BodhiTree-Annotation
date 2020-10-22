#include<simplecpp>

main_program
{
 unsigned int n,q;
 double a ,b,c,c1,d=0;
    cin >> q;
    repeat(q)
    {
    cin >> n;
    repeat(n)
    {
     cin >> a >> b;
     c = abs(a-b);
     c1 = c*c;
     d = d+c1;
    }
    d=sqrt(d);
    printf("%.2f\n", d);
    d=0;
}
}
