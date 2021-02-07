#include<simplecpp>

main_program{
    long int n,k,a=0,b=1,c;
    cin>>n>>k;
    repeat(n){
        cout<<a%k<<endl;
        c=a,a=b,b=b+c;
    }

}
