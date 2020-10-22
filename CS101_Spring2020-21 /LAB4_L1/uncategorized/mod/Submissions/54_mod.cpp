#include<simplecpp>

main_program
{

    //Write your code here

     int n,m;
     long  int p,s=1;
    cin>>n;
    cin>>m;
     int i=1;
repeat(n)
    {
        s=s%m*(i%m);
        i++;
    }
    p=s%m;
    cout<<(p);
}
