#include<simplecpp>

main_program{
    int m,n,q;
float s,a,b,t;
cin>>m;
    repeat(m){
        s=0;
        cin>>n;
    repeat(n){
    cin>>a>>b;
    t=(a-b)*(a-b);
    s=s+t;}
    printf("%.2f\n",sqrt(s));
    }
}
