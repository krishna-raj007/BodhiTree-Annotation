#include<simplecpp>

main_program{
int n, k, t1 = 0, t2 = 1, f,ans;

    cin>>n>>k;

    cout<<t1<<endl;
    cout<<t2<<endl;


    for (int i = 1; i <= n-2; ++i){

    f=t1+t2;

    cout<<f%k<<endl;

    t1=t2%k;
    t2=f%k;



    }

}
