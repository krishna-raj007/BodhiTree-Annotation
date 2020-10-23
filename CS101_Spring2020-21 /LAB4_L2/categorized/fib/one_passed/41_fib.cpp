#include<simplecpp>

main_program{

    long int a=1, b=1, c=a+b, n, pos=2;

    cin>>n;
    if(n==2) cout<<"2";
    else

    while(c<=n){
    c=a+b;
    a=b;
    b=c;
    pos=pos+1;
    if(c==n)
        break;
    }

    if(c==n)
    cout<<pos;
    else
    cout<<"-1";

}
