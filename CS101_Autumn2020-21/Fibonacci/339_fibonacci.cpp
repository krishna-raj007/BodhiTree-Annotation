#include<simplecpp>

main_program
{
    long long n1=0,n2=1,n3,i,n,k,z;
    cin>>n>>k;
    cout<<n1<<endl<<n2<<endl;
     for(i=2;i<n;i++)
     {


              n3=n1+n2;
              z=n3%k;
              while(z<0)
              {
                z=k+z;
              }
              if (z>=0)
              {
                cout<<z<<endl;
              }
              n1=n2;
              n2=n3;

     }

}
