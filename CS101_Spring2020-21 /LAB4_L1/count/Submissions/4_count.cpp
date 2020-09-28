
#include<simplecpp>
main_program
{
  int a,q,b=1,c;
  cin >>q;
  repeat(q)

  {
c=0;

      cin >>a;
      repeat(5)
      {
          switch(b)
          {
              case 1:if(a%2==0)
                        {
                            c=c+1;
                        } break;
               case 2:if (a%3==0)
                         {
                             c=c+1;
                         }  break;
               case 3:if(a%5==0)
                         {
                             c=c+1;
                          }break;
                case 4:if(a%7==0)
                          {
                              c=c+1;
                          } break;
                case 5:if(a%11==0)
                          {
                              c=c+1;
                          } break;

          }
          b++;
      }
      b=1;
      cout<<c<<endl;
  }

}
