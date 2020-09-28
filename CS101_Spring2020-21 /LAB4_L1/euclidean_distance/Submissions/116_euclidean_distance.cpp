#include<simplecpp>

main_program{


    int q,n;
    cin>>q;
    repeat(q)
    {

     cin>>n;
     float a,b,maxi;
     cin>>a>>b;
     maxi=abs(a-b);
     repeat(n-1)
     {
      cin>>a>>b;
      maxi=max(maxi,abs(a-b));

     }
    printf("%.2f\n", maxi);

}
    }
