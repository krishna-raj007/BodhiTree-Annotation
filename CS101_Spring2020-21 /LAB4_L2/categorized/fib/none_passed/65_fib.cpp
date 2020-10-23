#include<simplecpp>

main_program{

    int n,f1=1,f2=1,sum=0;
    cin>>n;
    cout<<"0"<<endl;
    repeat(2){
    cout<<"1"<<endl;}
    for(int i=1;i<=n-3;i++){
        sum=f1+f2;
        f2=sum;
        f1=f2;
        cout<<sum<<endl;
    }
}

