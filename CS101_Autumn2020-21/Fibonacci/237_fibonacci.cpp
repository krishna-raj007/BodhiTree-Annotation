#include<simplecpp>

main_program{
//Write your code here
    unsigned long long int n,k,a,b,x,rem;
    cin>>n>>k;
    a=0;
    b=1;
    cout<<0<<endl;
    if(n>1){cout<<1%k<<endl;}

    while(n>2){
        x=(a%k)+(b%k);
        cout<<x%k<<endl;
        a=b;
        b=x;
        n--;}

}
