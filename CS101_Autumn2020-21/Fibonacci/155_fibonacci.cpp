#include<simplecpp>
main_program{
int n,k;
cin>>n>>k;
int fib0 = 0, fib1 = 1,temp = 0;
cout<<fib0<<endl;
cout<<fib1<<endl;
n = n-2;
    while (n)
    {  temp = fib1;
    fib1 = (fib1 + fib0) % k;
        fib0 = temp;
        n--;
    cout<<fib1<<endl;}

}
