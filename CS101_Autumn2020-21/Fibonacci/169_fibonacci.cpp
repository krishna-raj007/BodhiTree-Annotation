#include<simplecpp>

main_program{

     long long int n,k,f2=1,f1=0,f=0,t;
     cin >> n >>k;
     for(int i=1;i<=n;i++)
        {
        f1=f2%k;
        f2=f%k;
        t=f%k;
        cout << t << endl;
        f=f1+f2;
        ;
        }


}
