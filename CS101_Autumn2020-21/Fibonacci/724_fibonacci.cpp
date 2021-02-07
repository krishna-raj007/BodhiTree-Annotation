#include<simplecpp>
main_program{
    int a=0,b=1,n,k,rem1,rem2,sum=0;
    cin>>n>>k;
    rem1=a%k;
    rem2=b%k;
    cout<<rem1<<endl;
    cout<<rem2<<endl;
    repeat(n-2){
        sum=(a+b)%k;
        cout<<sum%k<<endl;
        a=b%k;
        b=sum%k;
    }
}
