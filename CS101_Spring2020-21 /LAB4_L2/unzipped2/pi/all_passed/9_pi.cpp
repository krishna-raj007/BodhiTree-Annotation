#include<simplecpp>

main_program{
       long int n;
       double s;
       cin>>n;
       for(int i=0;i<=n;i++)
       {
           int a=-1;
           repeat(i+1)
           {
            a=a*(-1);
           }
           double b=((2*i)+1);
           double t=4*(a/b)*(1.0);
           s=s+t;
       }
       cout<<s;
}
