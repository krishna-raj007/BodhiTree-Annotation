#include<simplecpp>

main_program
{
  int q,n,i=0;
  cin >> q;
  repeat(5)
  {
   cin >> n;
   switch(1)
   {
     case 1:
     if(n%2==0)
     i++;
     case 2:
     if(n%3==0)
     i++;
     case 3:
     if(n%5==0)
     i++;
     case 4:
     if(n%7==0)
     i++;
     case 5:
     if(n%11==0)
     i++;
   }
   cout << i << endl;
   i=0;
  }
}


