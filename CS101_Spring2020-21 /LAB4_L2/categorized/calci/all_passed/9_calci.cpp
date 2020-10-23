#include<simplecpp>

main_program{
     int Q;
     cin>>Q;
     float a[Q];
     float Num1,Num2;
     char op;
     int i=Q;
     while(i>0)
     {
     cin>>Num1>>op>>Num2;
     switch(op)
     {
         case '+':
         {
            a[i]=(Num1+Num2);
            i--;
            continue;
         }
           case '-':
         {
            a[i]=(Num1-Num2);
            i--;
            continue;
         }
           case '*':
         {
            a[i]=(Num1*Num2);
            i--;
            continue;
         }
           case '/':
         {
            a[i]=(Num1/Num2);
            i--;
            continue;
         }
           default:
               {
                    a[i]=-1;
                    i--;
                    continue;
               }
     }
     }
     for(int i=Q;i>=1;i--)
     {
         cout<<a[i]<<endl;
     }
}
