#include <simplecpp>
main_program
{
    int q,i,a,c,j;
    cin>>q;
    for(i=1; i<=q; i++)
    {
        cin>>a;
        c=0;
        for(j=1;j<=11;j++){
            switch(j)
            {
            case 2:
                if(a%2==0)c++;
                break;
            case 3:
                if(a%3==0)c++;
                break;
            case 5:
                if(a%5==0)
                    c++;
                break;
            case 7:
                if(a%7==0)
                    c++;
                break;
            case 11:
                if(a%11==0)
                    c++;
                break;

            }
        }
        cout<<c<<endl;
    }
}
