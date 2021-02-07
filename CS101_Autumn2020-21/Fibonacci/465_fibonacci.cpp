#include<simplecpp>

main_program{
 int n,k,x1=0,x2=1,x3;
 cin>>n;
 cin>>k;
 for(int i=0;i<n;i++){
    if(x1%k>=0)
    {cout<<x1%k<<endl;}

    x3=x2%k+x1%k;
    x1=x2%k;
    x2=x3%k;
 }

}
