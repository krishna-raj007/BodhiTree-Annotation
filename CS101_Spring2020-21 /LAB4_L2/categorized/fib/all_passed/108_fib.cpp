#include<simplecpp>

main_program
{
    long int n;
    cin >> n;
    int a=0,b=1,c,i=1;
    if (n==0) cout <<"0";
    else if (n==1) cout << "1";
    else
    while(true)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        if (c==n)
        {
            cout << i;
            break;
        }
        if (c>n)
        {
            cout << "-1";
            break;
        }

    }

}
