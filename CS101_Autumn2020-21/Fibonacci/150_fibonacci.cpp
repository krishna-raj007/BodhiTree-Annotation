#include<simplecpp>

main_program{
    //Write your code here
    long long int n,k;
    cin>>n;
    cin>>k;
    long long int p=1,p1=0;
    for (int i=1; i<=n; i++){
        p1=p1%k;
        cout<<p1<<endl;
        long long int temp=p;
        p=p+p1;
        p1=temp;
    }
}
