#include<simplecpp>
main_program
{
long long int n,F1=0,F2=1,p=0,i,k;
cin>>n;
cin>>k;
for (int i = 1; i <= n; ++i)
    {

        if(i == 1)
        {
            cout << " " << F1;
            continue;
        }
        if(i == 2)
        {
            cout << F2 << " ";
            continue;
        }
        p = F1 + F2;
        F1 = F2;
        F2 = p;
  cout<<p%k<<" ";

    }



}
