#include<simplecpp>
main_program{
    int n,k;
    cin>>n>>k;
    int a,b;
    a=0;
    b=1;
    while(n>0){
    cout<<a%k<<endl;
    int c=a;
    a=a+b;
    a=a%k;
    b=c%k;
    n--;
    }
}