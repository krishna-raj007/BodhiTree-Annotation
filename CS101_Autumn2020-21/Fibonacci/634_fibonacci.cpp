#include<simplecpp>
main_program{
    int a=0,b=1,c;
    int n,k;
    cin>>n>>k;


    int temp;
    cout<<a<<endl<<b<<endl;
    for(int i=1;i<n-1;i++){
       c=a+b;
       temp=a;
       a=b;
       b=c;
       cout<<c%k<<endl;

    }

}
