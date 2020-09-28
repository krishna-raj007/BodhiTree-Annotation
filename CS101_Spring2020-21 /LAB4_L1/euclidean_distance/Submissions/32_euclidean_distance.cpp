#include<simplecpp>

main_program{
int n;
cin>>n;
repeat(n)
{
  int d;
  double s=0;
  cin>>d;
  repeat(d)
  {
    double a,b;
    cin>>a>>b;
    s+=pow(a-b,2);
  }
s= sqrt(s);
printf("%.2f\n",s);
}
}
