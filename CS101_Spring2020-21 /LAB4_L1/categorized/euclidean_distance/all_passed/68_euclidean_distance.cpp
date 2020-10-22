#include <simplecpp>
main_program
{
  int q,i,j,n;
  float a,b,s=0;
  cin>>q;
  for(i=1;i<=q;i++)
  {
    cin>>n;
    s=0;
    for(j=1;j<=n;j++)
    {
       cin>>a>>b;
       s=s+((a-b)*(a-b));

    }
    printf("%.2f\n",sqrt(s));
  }
}
