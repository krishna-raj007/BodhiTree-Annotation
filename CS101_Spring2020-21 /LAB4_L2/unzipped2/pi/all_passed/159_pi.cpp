#include<simplecpp>

main_program{
     int n,i;
     i=1;
     double sum=1;
     cin>>n;
     repeat(n)
     {
        sum=sum+pow(-1,i)*1.0/(2*i+1);
        i++;

     }
     cout<<sum*4;
}
