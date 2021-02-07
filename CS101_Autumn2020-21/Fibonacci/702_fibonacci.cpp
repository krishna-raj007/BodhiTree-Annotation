#include<simplecpp>

main_program{
    int n,k;
    cin >> n >> k;
    long int a=0,b=1;

    if(n==1)
        cout << 0;
    else if(n==2)
        cout << 0 << endl << 1%k;
    else{
        cout << 0 << endl << 1%k << endl;
        for(int i=0;i<n-2;i++)
        {
            long int temp=(a+b)%k;
            a=b;
            b=temp;
            cout << temp << endl;
        }
    }
}
