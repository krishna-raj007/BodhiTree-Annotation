#include<simplecpp>

main_program{
    int i,n,k,fbb=0,fb=1,f;
    cin>>n>>k;

    cout<<fbb<<endl<<fb<<endl;
    repeat(n-2){
        f=(fb+fbb)%k;
        cout<<f<<endl;
        fbb=fb;
        fb=f;
        }
}
