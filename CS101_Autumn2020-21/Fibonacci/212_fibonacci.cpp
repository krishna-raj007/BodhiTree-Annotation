/*Author-Hemendra Meena*/
#include <simplecpp>
main_program{
    long long int n, k,fn1=1,fn0=0,fn;
    cin>>n>>k;
    cout<<fn0%k<<endl<<fn1%k<<endl;
    repeat(n-2){
        fn= fn1 + fn0;
        if(fn%k<=0)cout<<-fn%k<<endl;
        else cout<<fn%k<<endl;
        fn0 = fn1;
        fn1 = fn;
        }
}
