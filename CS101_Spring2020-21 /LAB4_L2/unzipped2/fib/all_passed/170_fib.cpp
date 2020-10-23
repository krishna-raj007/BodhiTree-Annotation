#include<simplecpp>

main_program{
    long long int f_0=0,f_1=1 ,f=1;
    int i=1 , n;
    bool found{false};

    cin>>n;

    while (f<=n){
        if (n==f){
            found = true;
            break;}
            f = f_0 + f_1 ;
            f_0=f_1;
            f_1 = f ;
            i = i+1;}

            if (n==1)
                cout<<1;

            else if  (n==0)
                {cout <<0;}
                else if (found){
                    cout << i;}
                    else
                        {cout<<"-1";}

              }
