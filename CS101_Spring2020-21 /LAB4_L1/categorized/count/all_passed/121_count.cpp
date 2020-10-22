#include<simplecpp>


main_program{
    int a,n,i;
    cin>>n;

    repeat(n){
        i=0;
        cin>>a;
        if(a%2==0) i++;
        if(a%3==0) i++;
        if(a%5==0) i++;
        if(a%7==0) i++;
        if(a%11==0) i++;
        cout<<i<<endl;}
}



