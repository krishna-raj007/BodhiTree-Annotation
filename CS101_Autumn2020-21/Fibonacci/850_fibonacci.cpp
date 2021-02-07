#include<simplecpp>

main_program{
    long long int n,k,temp1,i=2,temp2,temp;
    cin>>n>>k;
    temp1=0;
    temp2=1;
    cout<<temp1<<"\n"<<temp2<<"\n";
    while(i<n)
        {temp=temp1+temp2;
        cout<<temp%k<<"\n";
        temp1=temp2%k;
        temp2=temp%k;
        i++;
        }
}
