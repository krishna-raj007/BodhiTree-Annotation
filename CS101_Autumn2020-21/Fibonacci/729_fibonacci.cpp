#include<simplecpp>

main_program{
        long unsigned n,k,p=0,q=1,c;
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cout<<p%k<<"\n";
            c=(p+q)%k;
            p=q;
            q=c;


        }

}
