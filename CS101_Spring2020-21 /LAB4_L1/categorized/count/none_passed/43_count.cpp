#include<simplecpp>

main_program{int q,n;
cin>>q;
repeat(q)
{cin>>n;int count=0;
if(n%2==0)
   count++;
   if(n%3==0)
       count++;
          if(n%5==0)
              count++;
                  if(n%7==0)
                      count++;
                          if(n%11==0)
                              count++;



cout<<count;
}}
