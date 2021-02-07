#include<simplecpp>

main_program{
    int n,k;
    cin>>n>>k;
    int i1=0;
    int i2=1;
    cout<<i1<<endl;
    cout<<(i2%k)<<endl;
    int temp;

    for(;(n-2)>0;n--){
    temp=i1;
    i1=i2;
    i2=(i2+temp)%k;

    cout<<(i2%k)<<endl;
    }
}
