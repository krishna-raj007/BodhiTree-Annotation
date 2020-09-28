#include<simplecpp>
#include<stdio.h>
#include<math.h>

main_program
{
    int Q,A,i;

    int c= 0;

    cin >> Q;

    for(i=1; i<=Q; i++)
    {
        cin >> A;
        c =0 ;
        if(A % 2 ==0 )
        {
            c = c + 1;
        }
        if(A % 3 ==0 )
        {
            c = c + 1;
        }
        if(A % 5 ==0 )
        {
            c = c + 1;
        }
        if(A % 7 ==0 )
        {
            c = c + 1;
        }
        if(A % 11 ==0 )
        {
            c = c + 1;
        }

        switch (c)
    {
    case 1 :
        cout << 1;
        break;
    case 2 :
        cout << 2;
        break;
    case 3 :
        cout << 3;
        break;
    case 4 :
        cout << 4;
        break;
    case 5 :
        cout << 5;
        break;
    default :
        cout << 0;

    }
    cout << "\n";

    }


}
