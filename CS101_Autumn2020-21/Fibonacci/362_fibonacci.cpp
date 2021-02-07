#include<simplecpp>

main_program

{
       long long first=0, second=1, k, sum=0, ans=0;
       int n;
      cin>>n>>k;

      for( int i=0 ; i<n ; i++)

     {
               if(i <= 1)
      {
           sum=i;
           ans=sum%k;
           cout<<ans<<endl;
                }
                else
                {
                      sum= (first + second)%k;
             first=second;
                      second=sum;
            cout<<sum<<endl;

                }

      }
}

