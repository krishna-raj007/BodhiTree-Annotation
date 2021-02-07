#include<simplecpp>
void fibo(long int, long int);
main_program
{
    long int n, k;
    cin>>n>>k;
    fibo(n, k);
}
void fibo(long int a, long int b)
{
    long int i=0, j=1;
    cout<<i<<"\n";;
    repeat(a-1)
    {
        if(j>=b)
            j=j%b;
        cout<<j<<"\n";
        long int temp=j;
        j+=i;
        i=temp;
    }
}
