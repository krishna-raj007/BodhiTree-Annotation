#include<simplecpp>

main_program{
//Fibonacci Sequence

long int n;
long int k , x1=0,x2=1,x=0;

cin >> n >> k ;

for(int i = 1; i <=n; i++)
{if(i==1){

  cout << x1%k << endl;
  continue;
  }
  if(i==2)
  {
  cout << x2%k << endl;
  continue;
  }
  x = (x1+x2)%k;
  x1=x2;
  x2 = x;
  x=x;

  cout << x << endl;


}
return 0;
}
