#include<simplecpp>

main_program{
        int n,k,n1=0,n2=1;
        cin>>n>>k;
        long n3=n1 + n2;
        cout<<n1%k<<"\n"<<n2%k;

        for(int i=0;i<n-2;++i)
        {
           n3=n1%k+n2%k;
            cout<<"\n"<<n3%k;
            n1=n2%k;
            n2=n3%k;


        }

}
