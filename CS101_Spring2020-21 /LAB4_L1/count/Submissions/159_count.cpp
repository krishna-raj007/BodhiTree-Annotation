#include<simplecpp>
main_program{
    int q;
    cin >> q;
    repeat(q){
        int a,t=0;
        cin >> a;

        if(a%2==0)
        t++;
        if(a%3==0)
        t++;
        if(a%5==0)
        t++;
        if(a%7==0)
        t++;
        if(a%11==0)
        t++;
        cout << t;
    }
}



