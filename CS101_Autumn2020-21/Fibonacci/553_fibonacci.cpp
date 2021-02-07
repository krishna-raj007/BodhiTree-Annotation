#include <simplecpp>
main_program
{
  long long int e,s=0,m=0,l=1,n,k;
  cin >>n>>k;
  repeat(n)
  {
    /*if(e<0)
    e=s+e;*/
    cout <<s<<endl;
    m=l%k;
    l=s%k;
    s=(m+l)%k;
  }
}
