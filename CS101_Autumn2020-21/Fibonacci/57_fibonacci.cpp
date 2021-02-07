#include<simplecpp>

main_program{
             unsigned int n,k;
             cin>>n>>k;
             cout<<0<<endl;
             cout<<1<<endl;
long long int a=0,b=1;
    long long int i=n-2;
     while(i>0){
                unsigned int f;
                 f=a+b;
                cout<<(f%k)<<endl;
                a=b;
                b=f;
                i=i-1;
                }
}
