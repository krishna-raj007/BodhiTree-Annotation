#include<iostream>
using namespace std;
int main()
{
      long long int first=0,n, second=1, i,k,sum=0;
       cin>>n>>k;


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
     cout<<sum%k<<" ";
      }

   return 0;
}
