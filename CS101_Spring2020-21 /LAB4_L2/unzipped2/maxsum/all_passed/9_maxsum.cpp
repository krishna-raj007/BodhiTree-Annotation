#include<simplecpp>

main_program{
       int n,t=0;
       long int m=0;
       cin>>n;
       int i=n;
        repeat(n)
        {
            long int a,k;
            cin>>a;
            k=t+a;
            if(i!=n)
                {
                    if(m<=k)
                        {m=k;}
                }
            else {m=k;}
            t=a;
            i--;
        }
        cout<<m;
}
