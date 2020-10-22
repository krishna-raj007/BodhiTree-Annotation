#include<simplecpp>
main_program
{
    int n, lar=0;

    while(true)
    {
        cin>>n;
        if(n==-1)
        {
            break;
        }
        else if(lar<n)
        {
            lar=n;

        }
    }
    cout<<lar;
}
