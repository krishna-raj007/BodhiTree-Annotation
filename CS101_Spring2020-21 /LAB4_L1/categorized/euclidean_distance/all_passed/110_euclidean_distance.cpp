#include<simplecpp>

main_program{
     int q;
     cin>>q;
     for(int i=1;i<=q;i++)
     {
       int dim;
       cin>>dim;
       float sum=0.0;
       for(int j=1;j<=dim;j++)
           {
             float a,b;
             cin>>a>>b;
             sum=sum+pow(a-b,2);
             }
             sum=pow(sum,0.5);
             printf("%.2f\n",sum);
           }
    }
