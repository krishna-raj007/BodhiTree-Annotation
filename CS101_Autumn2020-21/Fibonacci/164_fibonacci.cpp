#include<simplecpp>

main_program{
        int n,k,first=0,second=1;
        cin>>n>>k;

        long third=first + second;

       cout<<first%k<<"\n"<<second%k; /*if we dont divide by k then we end b fabo series only*/

        for(int i=0;i<n-2;++i)
        {
           third=first%k+second%k;
            cout<<"\n"<<third%k;
            first=second%k;
            second=third%k;        }}
