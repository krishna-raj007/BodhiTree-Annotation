#include<simplecpp>

main_program{
long long n,k;
//cout<<"enter n,k"<<"\n";
cin>>n>>k;
n=n-2;
long long sum=0,fib1=0,fib2=1;
cout<<0<<"\n";
cout<<1<<"\n";
while(n > 0){
    sum=fib1 + fib2;

    cout<<(sum%k)<<"\n";

    fib1=fib2;
    fib2=sum;
    n=n-1;
    sum=sum%k;
    }

}
