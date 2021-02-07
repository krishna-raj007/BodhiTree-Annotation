#include<simplecpp>
main_program{
        int n,k,A=0,B=1;
        cin>>n>>k;
        long C=A+B;
        cout<<A%k<<endl;
        cout<<B%k;
        for(int i=0;i<n-2;++i)
        {
           C=(A%k)+(B%k);
            cout<<endl;
            cout<<C%k;
            A=B%k;
            B=C%k;


        }

}
