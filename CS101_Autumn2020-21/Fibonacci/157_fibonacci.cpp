#include<simplecpp>

main_program
{
	//Write your code here
    long long int n,k,f1=0,f2=1;
    cin>>n>>k;

    cout<<f1<<"\n"<<f2<<"\n";
    for(long long int i=2;i<n;i++)
    {
        long long int fi;
        fi= (f1+f2)%k;
        cout<<fi<<"\n";
        f1= f2;
        f2= fi;
    }
}
