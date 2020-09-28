#include<simplecpp>

main_program{

    int q;
    cin>>q;
    int m = 0;

    repeat(q){
    int a;
    cin>>a;
    if (a%2==0){
        m++;
    }
    if (a%3==0){
        m++;
    }
    if (a%5==0){
        m++;
    }
    if (a%7==0){
        m++;
    }
    if (a%11==0){
        m++;
    }

    cout<<m;
    m=0;
    }

}
