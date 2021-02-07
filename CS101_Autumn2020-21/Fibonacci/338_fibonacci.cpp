#include<simplecpp>

main_program{
//Write your code here
int n,k;
cin>>n>>k;
int fn2 = 0;
int fn1 = 1;
if(n==1)
{
    cout<<fn2;
    return 0;
}
cout<<fn2<<"\n"<<fn1<<"\n";
for(int i=2;i<n;i++)
{
    int temp = (fn1+fn2)%k;
    cout<<temp<<"\n";
    fn2 = fn1%k;
    fn1 = temp%k;
}
}
