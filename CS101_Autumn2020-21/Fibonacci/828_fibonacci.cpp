#include<simplecpp>

main_program{
    int n1=0,n2=1,n3,n,k;
    int i=1;
    cin>>n>>k;
    cout<<n1<<endl;;
    cout<<n2<<endl;
    for(;i<=(n-2);i=i+1){
      n3=n1+n2;
      cout<<n3%k<<endl;
      n1=n2%k;
      n2=n3%k;
    }
}
