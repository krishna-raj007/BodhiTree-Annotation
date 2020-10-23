#include<simplecpp>

main_program{
    int n;
    cin>>n;
    int i = 0;
    double answer = 0, term;
    while(i<=n)
    {
        term = (pow(-1, i)*1.0)/(2*i+1);
        answer = answer + term;
        i++;
    }
    cout<<4*answer<<endl;
}
