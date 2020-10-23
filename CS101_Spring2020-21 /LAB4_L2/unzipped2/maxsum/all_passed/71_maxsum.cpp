#include<simplecpp>

main_program{

    int n;cin>>n;
    long long int d,Max=0;
    cin>>d;
    repeat(n-1){
        long long int a,sum=d;cin>>a;
        sum=sum+a;
        Max=max(sum,Max);
        d=a;
    }
    cout<<Max;

}
