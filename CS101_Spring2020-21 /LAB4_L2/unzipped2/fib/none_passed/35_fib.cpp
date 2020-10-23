#include<simplecpp>

main_program{
    long long int n;
    int flag=0;
    cin>>n;
    for(long long int i=0; i<=1*pow(10,19);i++)
    {
        long long int p,q;
        p=0,q=1;
        repeat(i)
        {
            p=p+q;
            q=q+p;
        }
        if(n=p){
            cout<<2*i+1;
            flag=1;
            break;
        }
        if (flag=0){
            cout << -1<<endl;
        }
    }
}
