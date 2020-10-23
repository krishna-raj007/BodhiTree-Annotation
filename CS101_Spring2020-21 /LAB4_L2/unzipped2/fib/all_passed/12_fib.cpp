#include<simplecpp>

main_program{

    long int n;
    int x;
    cin>>n;
    long int a[20];
    for(int i = 0; i<=19 ;i++)
    {
        if(i == 0)
        {
            a[i]= 0;
        }
        else if (i == 1)
        {
            a[i] = 1;
        }
        else
        {
            a[i] = a[i-1]+a[i-2];
        }

        if(a[i] == n)
        {
            x = i;
            if(x == 2)
            {
                x = 1;
            }
            break;
        }
        else if (a[i]>n)
        {
            x = -1;
            break;
        }
    }
    cout<<x;


}
