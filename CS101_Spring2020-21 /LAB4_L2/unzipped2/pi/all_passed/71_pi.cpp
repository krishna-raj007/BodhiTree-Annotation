#include<simplecpp>

main_program{

    double t=1,sum=1,n,term;
    term=(-1)/(2*t+1);
    cin>>n;
    repeat(n){
        sum=sum+term;
        term=term*(-1)*(2*t+1)/(2*t+3);
        t=t+1;
    }
    cout<<sum*(4);
}
