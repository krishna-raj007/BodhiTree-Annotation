#include<simplecpp>
main_program
{
int n, m;
cin>>n>>m;

int t2n,t1n = 1;
int tn = 0;
cout<<"0"<<endl<<"1"<<endl;
    for (int index=1; index <=n-2 ; index++)
    {
        t2n = t1n + tn;
        tn = t1n%m;
        t1n = t2n%m;

        cout<<t2n%m<<endl;
    }


}
