#include <simplecpp>
main_program{
    int n,k;
    cout <<"Enter the value of n and k :";
    cout <<"\n";
    cin >> n >> k ;
    long long int a=0,b=1,p=3;
    long long int c=0,r;
    cout <<"The fibonacci series is :";
    if(n==1){
        cout <<"\n";
        cout <<a%k;
    }
    if(n==2){
        cout <<"\n";
        cout <<a%k;
        cout <<"\n";
        cout <<b%k;
        cout <<"\n";
    }
   else if(n>2){
    cout <<"\n";
    cout <<a%k;
    cout <<"\n";
    cout <<b%k;
    cout <<"\n";
    do{
        c=a+b;
        r=abs(c%k);
        cout <<r;
        cout <<"\n";
        a=b;
        b=c;
        p=p+1;
        }
    while(p<=n);
    }
}
