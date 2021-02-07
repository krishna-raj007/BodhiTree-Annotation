#include<simplecpp>
main_program
{
long long int f1 = 0, f2 = 1,n,k,next;
cin>>n>>k;
cout<<f1%k<<endl<<f2%k<<endl;
        for (int i = 1; i< n-1; i++) {
        next=f1%k+f2%k;
        cout<<next%k<<endl;
        f1 = f2;
        f2 = next;}
}
