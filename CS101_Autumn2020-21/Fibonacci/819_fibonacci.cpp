#include<simplecpp>

main_program
{
   long long n,k;
   cin >> n>> k;
   long long f0=0,f1=1,f2;

   cout << f0%k << endl << f1%k<<endl;
   for (int i=0;i<n-2;i++)
   {
      f2=(f0+f1)%k;
      cout << f2<<endl;
      f0=f1%k;
      f1=f2%k;
    }

}
