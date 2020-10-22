#include<simplecpp>
 main_program{
          float n,i=0,dist;
         cout<<"n dimentional space:=";
          cin>>n;
     repeat(n){
         float a,b;
         cout<<"give the coordinste( , ):-";
          cin>>a>>b;
          i=i+((a-b)*(a-b));
                }
                dist=sqrt(i);
           cout<<dist<<endl;
               }
