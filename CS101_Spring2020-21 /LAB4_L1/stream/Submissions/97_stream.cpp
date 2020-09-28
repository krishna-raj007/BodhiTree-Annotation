#include<simplecpp>

main_program
{

    int n;
    int max = -111111;

    while (1)
    {
        cin>>n;
        if(n==-1)
            break;
        if (n>max)
        {
            max = n;
        }
    }
    cout << max;






}
