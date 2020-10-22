#include<simplecpp>

main_program
{
    int Q,A,k=0;
    cin >> Q;
    repeat(Q)
    {
        cin >> A;
        for(int j=1; j<12; j++){
        switch(j)
        {
        case 2:
            if(A%2==0)
            {
                k++;
            }
            break;
        case 3:
            if(A%3==0)
            {
                k++;
            }
            break;
        case 5:
            if(A%5==0)
            {
                k++;
            }
            break;
        case 7:
            if(A%7==0)
            {
                k++;
            }
            break;
        case 11:
            if(A%11==0)
            {
                k++;
            }
            break;
    }
        }
cout << k << endl;
k=0;
    }
}
