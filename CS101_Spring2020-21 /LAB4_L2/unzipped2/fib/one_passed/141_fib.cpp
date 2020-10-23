#include<simplecpp>

main_program
{
    int i=2,z=0;
    int n,fib[100];
    fib[0] =0;
    fib[1] =1;
    cin>>n;
    if(n==0 ){
        cout<<"1";
        z=1;
    }
    if(n==1){
        cout<<"2";
        z=1;
    }
    for(i; i<=n; i++)
    {
        fib[i] =fib[i-1] +fib[i-2];
          if(n==fib[i])
        {
            cout<<i;
             z=1;
            break;

        }
        }

if(z==0){
    cout<<"-1";
}


}
