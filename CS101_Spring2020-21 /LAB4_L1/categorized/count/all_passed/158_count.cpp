#include<simplecpp>

main_program
{
    int q, i=0, f=2;
    int a=0;
    cin>>q;
    repeat(q)
    {
        i=0;
        cin>>a;
        switch(f)
        {
            case 2: if(a%2==0)  i++;
            case 3: if(a%3==0)  i++;
            case 5: if(a%5==0)  i++;
            case 7: if(a%7==0)  i++;
            case 11: if(a%11==0)  i++;
        }
        cout<<i<<"\n";
    }
}
