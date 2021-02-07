#include<simplecpp>

main_program{
//Write your code here
    int a,b=1,c=0,n,k;
    cin>>n>>k;
    cout<<c%k<<endl<<b%k<<endl;
    for(int i=1;i<=n-2;i++){
        a=b%k+c%k;
        cout<<a%k<<endl;
        c=b;
        b=a;
        }
}
