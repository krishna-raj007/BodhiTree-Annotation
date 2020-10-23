#include<simplecpp>

main_program{

    int n;
    double a=0.0,b=0.0,c=-1.0,d=0.0;
    cin>> n;

    repeat(n+1){

        c=(-1)*c;
        a= 4*c/((2)*b+1);
        d+=a;
        b++;
    }

    cout<< d<< endl;

    }
