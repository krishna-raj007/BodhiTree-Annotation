#include<simplecpp>

main_program{

 int num,f0=1,f1=1,fn=1,c=2;
 cin>>num;

 if(num==1) {cout<<"1";}
 for(int i=1; fn<num; i++)
    {
  fn=f1+f0;
  c++;
  if(num==fn) {cout<<c++; break;}

  f0=f1;
  f1=fn;

   }

  if (fn !=num) cout<<"-1";
 }
