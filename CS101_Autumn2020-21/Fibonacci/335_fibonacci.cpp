#include<simplecpp>
int F(long int n, long int k)
{
    long int a=0, b=1;
    if(n==0){return 0;}
    if(n==1){return 1;}
    for(long int i=1; i<n; i++)
    {
        long int temp;
        temp=(a+b)%k;
        a=b;
        b=temp;
    }
    return b;
}

int main()
{
    long int n,k;
    cin>>n>>k;
    for(long int i=0; i<n; i++)
    {
        cout<<(F(i,k))<<endl;
    }
}
