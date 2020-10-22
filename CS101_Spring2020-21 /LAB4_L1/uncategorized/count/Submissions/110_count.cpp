#include<simplecpp>

main_program
{
  int n,i;
  cin>>n;
  for(int j=1;j<=n;j++)
  {
    i=0;
    int num;
    cin>>num;
    if(num%2==0) i++;
    if(num%3==0) i++;
    if(num%5==0) i++;
    if(num%7==0) i++;
    if(num%11==0) i++;
    cout<<i;
  }
  }
