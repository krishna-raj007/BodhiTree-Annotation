#include<simplecpp>

main_program
{

    int Q;
    cin>>Q;
    int A;

    int j;

    repeat(Q)
    {
        int n=0;
        cin>>A;

        for(j=1;j<=11;j++){
        switch(j)
        {
        case 1:
            if((A%2)==0)
                n=n+1;
            break;
        case 2:
            if((A%3)==0)
                n=n+1;
            break;
        case 3:
            if((A%5)==0)
                n=n+1;
            break;
        case 4:
            if((A%7)==0)
                n=n+1;
            break;
        case 5:
            if((A%11)==0)
                n=n+1;
            break;

        }
        }
        cout<<n<<endl;
    }


    //Write your code here

}
