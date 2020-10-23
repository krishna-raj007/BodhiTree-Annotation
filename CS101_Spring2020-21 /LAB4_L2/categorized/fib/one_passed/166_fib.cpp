#include<simplecpp>

main_program{
    long long int n;
    long int x=1;
    long long int f=1,y=1;
    cin>>n;
        if(n<0)
        cout<<"-1";
        else if(n == 0)
        cout<<x;
        else if(n==1)
        cout << x+1;
        else{
        x=2;
            while(f<n){
            long long int t = y;
            y=f;
            f=f+t;
            x++;}
        if(f==n)
        cout<<x;
        else
        cout<<(-1);
        }
}
