#include<simplecpp>

main_program{
    int s,n,a,b,c,d,e,p;
    s = a+b+c+d+e;
    cin>>p;
    repeat(p){
        cin>>n;
        if (n%2 == 0) a=1; else a=0;
        if (n%3 == 0) b=1; else b=0;
        if (n%5 == 0) c=1; else c=0;
        if (n%7 == 0) d=1; else d=0;
        if (n%11 == 0) e=1; else e=0;
        cout<<s;
    }
}

