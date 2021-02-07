#include <simplecpp>

main_program{
    int i=1, j=0, jbar=1, n, k;
    cin>>n>>k;
    while(i<=n){
        cout<<j<<endl;
        jbar+=j;
        j=jbar-j;
        j=j%k;
        jbar=jbar%k;
        ++i;
    }
}
