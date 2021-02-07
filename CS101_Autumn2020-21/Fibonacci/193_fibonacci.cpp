#include<simplecpp>

main_program{
    long long int n,k;
    cin>>n>>k;
    long long int a= 0, b= 1, c = 0;
    cout<<a<<"\n"<<b<<endl;
    for(int i = 0; i< (n-2) ; i++)
    {
        c= (a + b)%k;
        a = b;
        b = c;
        cout<<c<<endl;
    }
}
