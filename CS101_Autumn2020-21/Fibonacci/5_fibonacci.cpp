#include<simplecpp>

main_program{
    long n,k,a=0,b=1,c=0,i=1;
    cin>>n>>k;
    if (n==1){cout<<"0";}
    else if (n==2){cout<<"0"<<endl<<"1";}
    else{
        cout<<"0"<<endl<<"1"<<endl;
        while(i<=n-2){
            c=a+b;
            c=c%k;
            a=b;
            b=c;
            cout<<c%k<<endl;
            i++;

        }
        cout<<endl;
    }
    cout<<endl;

}
