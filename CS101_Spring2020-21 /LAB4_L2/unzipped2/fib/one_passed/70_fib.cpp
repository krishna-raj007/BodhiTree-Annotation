#include<simplecpp>

   main_program
   {
       int N;
       cin>>N;
       long x=1000000;
       int i,j=0;
       int flag=0;
       int sum=0;

       for(i=1;i<=x;)
       {
            if (N==0)
        {cout<<"1";
       break;}
           sum=i+j;
           i=j;
           j=sum;
           flag++;


           if(N==sum)
           {
            cout<<flag;
            break;

           }
           else if(sum>N)
           {
            cout<<"-1";
            break;
           }

       }


   }
