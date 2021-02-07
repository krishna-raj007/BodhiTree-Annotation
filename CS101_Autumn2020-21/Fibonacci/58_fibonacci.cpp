#include <simplecpp>

main_program{
    int n,k;
    cin>>n>>k;

    int fp=0,fc=1,f;
    if(n==1){
    cout<<fp<<"\n";
    }else{
         cout<<fp<<"\n"<<fc<<"\n";
          for(int i=2;i<=n-1;i++){
              f=(fc%k+fp%k)%k;
              fp=fc%k;
              fc=f%k;
              cout<<fc<<"\n";

          }
    }


}
