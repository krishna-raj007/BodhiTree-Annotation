#include<simplecpp>

main_program{
    int n = 0;
        cin>>n;
    int a, b, c;
    a = 0;
    b = 1;
    int i = 2;
    int flag = 0;
    if(n == 0)
        cout<<0;
    else if(n == 1)
        cout<<1;
    else if(true)
    {
        while(i<500)
        {
            c = a + b;
            if(n == c)
            {
                cout<<i;
                flag = 1;
            }
            a = b;
            b = c;
            i++;
        }
        if(flag == 0)
            cout<<-1;
    }
}

