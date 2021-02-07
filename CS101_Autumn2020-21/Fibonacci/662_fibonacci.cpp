#include<simplecpp>

main_program{
//Write your code here

    int n,k,i=2;
    long int a=0,b=1,f;

    cin>>n>>k;
    cout<<a%k<<endl<<b%k<<endl;

    while(i<=(n-1)){f=(a+b)%k;
                    cout<<f<<endl;
                    a=b;b=f;
                    i=i+1;}
}
