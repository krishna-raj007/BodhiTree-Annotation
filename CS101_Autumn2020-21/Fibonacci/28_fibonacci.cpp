#include <simplecpp>

main_program{
    int n,k,x,y,a,b;
    cin>>n>>k;
    x = 0;y = 1;

    if(n==1){
        cout<<x<<endl;
    }else{
    cout<<x<<endl;
    cout<<y<<endl;
    for(int i = 2;i<n;i++){
        a = y;
        b = (x+y)%k;
        cout<<((x+y)%k)<<endl;
        x = a;
        y = b;
    }}
}
