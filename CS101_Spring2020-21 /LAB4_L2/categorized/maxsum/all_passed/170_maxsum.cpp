#include<simplecpp>
main_program
{

    int n;
    cin>>n;
    long long int a,b,c,max,d;
    cin>>a>>b;
    max=a+b;
    repeat(n-2)
    {
        cin>>c;
        d=b+c;
        if(max<d){
            max=d;
            b=c;
        }

    }
    cout<<max<<endl;
}
