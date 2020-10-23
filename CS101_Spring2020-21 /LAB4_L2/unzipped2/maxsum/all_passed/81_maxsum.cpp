#include<simplecpp>

main_program{

    int n,a,b,maxi,d;
    cin>>n>>a>>b;
    maxi=a+b;
    repeat(n-2){
    cin>>d;
    maxi=max(maxi,b+d);
    b=d;

    }
    cout<<maxi;
}
