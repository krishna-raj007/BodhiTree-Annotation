#include<simplecpp>

main_program{
    long int n,k,x1=0,x2=1,i;
    cin>>n>>k;
    cout<<x1<<endl;
    cout<<x2<<endl;
    repeat(n-2){
        i=x2%k;
        x2=(x1+x2)%k;
        x1=i;
        cout<<(x2)<<endl;
        }


    }



