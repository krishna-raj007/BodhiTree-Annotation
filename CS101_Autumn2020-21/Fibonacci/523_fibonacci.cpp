#include<simplecpp>

main_program{
//Write your code here
    long  long int n,k;
    cin>>n>>k;
    if(n==1){
        cout<<0<<endl;
    }
    else if(n==2){
        cout<<1<<endl;
    }
    else{
        long long int a=0,b=1;
        cout<<0<<endl;
        cout<<1<<endl;
        long long int fib=1;
        for(int i=2;i<n;i++)
        {
            fib=(a+b)%k;
            a=b%k;
            b=fib%k;

            cout<<fib%k<<endl;
        }
    }

}
