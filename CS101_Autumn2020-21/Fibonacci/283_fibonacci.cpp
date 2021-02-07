#include<simplecpp>

main_program{
    unsigned long long int n,k, out, i;
    cin>>n>>k;
    unsigned long long int f0 = 0, f1 = 1,fn;

    if(n>=1){
    cout<<f0<<endl;
    }
    if(n>=2){
        cout<<f1<<endl;
    }

    for( i = 3; i <= n; i++){
        fn = f0 + f1;
        out = (fn % k);
        cout<<out<<"\n";
        f0 = f1 % k;
        f1 = fn % k;
    }




}
