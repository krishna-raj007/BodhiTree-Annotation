#include<simplecpp>

main_program{

  int first=0, second=1, i, n, sum=0;

      cout<<""; cin>>n;
      int k ;
      cin >> k ;

      cout<<"";

      for(i=0 ; i<n ; i++)
     {
               if(i <= 1)
      {
           sum=i;
                }

                else
                {
                      sum=first + second;
             first=second;
                      second=sum;

                }
     cout<<sum%k << endl ;
      }
      }










