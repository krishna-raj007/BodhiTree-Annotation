#include<simplecpp>

main_program{

              int a,b,c;
              cin>>a;
              c=0;

              repeat(a){  c=0;
                         cin>>b;
                         if(b%2==0){ c++;}
                         if(b%3==0){c++;}
                         if(b%5==0){c++;}
                         if(b%7==0){c++;}

                         if(b%11==0){c++;}

                          cout<<c;



              }}
