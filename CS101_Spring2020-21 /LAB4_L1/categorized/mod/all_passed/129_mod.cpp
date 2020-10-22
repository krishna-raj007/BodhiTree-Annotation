#include<simplecpp>
main_program{

        long long int n,m,i=1,r=1;
        cin>>n>>m;
        repeat(n){

            r=(r*(i%m))%m;
            i++;

        }

            cout<<r%m;

}
