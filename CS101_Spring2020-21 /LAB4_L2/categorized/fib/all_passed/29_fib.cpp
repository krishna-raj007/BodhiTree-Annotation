#include<simplecpp>

main_program{

 int n ;
 long long seq = 0 , s1 =0 , s2 =1,num = 0,c =0;
 cin>>num;
 for(int i = 2 ; i<=num ;i++)
 {

     if(num == 1)
       cout<<"1";
     else if(num == 2)
       cout<<"3";
     else if(num == 3)
       cout<<"4";


     seq = s1 + s2;
     s1 = s2;
     s2 = seq;
   if(seq == num)
   {
    cout<< i;
    c= 1;
   }

   }


if(num == 0)
     {
       cout<<"0";
       c=1;
     }
else if(c== 0){

       cout<< "-1";
}



}
