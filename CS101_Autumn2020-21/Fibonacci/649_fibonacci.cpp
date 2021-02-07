#include<simplecpp>

main_program
{
    long long int f0 = 0,f1 = 1,fb=1, fa = 0,fnext =1, i = 3,n, k;
    cin>>n;
    cin>>k;

    cout<<f0%k <<endl;
    cout<<f1%k <<endl;

    while(i<=n){
                cout<<((fb%k)+(fa%k))%k <<endl;
                fa = fb%k;
                fb= fnext%k;
                fnext = (fb + fa)%k;

                i++;
               }
}
