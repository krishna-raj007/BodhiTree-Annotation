#include<simplecpp>

main_program{
   long int n,a,b,c,max,d;
    cin>>n;
    cin>>a;
    cin>>b;
    max=a+b;
    repeat(n-2){
        cin>>c;
        d=b+c;
        if(d>max)
        {max=d;}
        b=c;
    }
    cout<<max;
}
