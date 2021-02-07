# include <simplecpp>

main_program{

    long long int n,k,t;
    cin>>n>>k;
    long long int F0=0,F1=1;

    repeat(n){
        cout<<(F0)%k<<endl;
        t=(F0+F1)%k;
        F0=F1%k;
        F1=t%k;      
    }
    

}