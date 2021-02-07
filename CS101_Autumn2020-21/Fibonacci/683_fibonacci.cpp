using namespace std;
#include<simplecpp>

main_program
{

long int n, k;
long int a_1=0, a_2=1, t;
cin>>n>>k;
if (n==1)
cout<<a_1;
else
{
    cout<<a_1<<endl<<a_2<<endl;
    repeat(n-2)
    {
        t=a_2;
        a_2+=a_1;
        a_1=t%k;
        a_2=a_2%k;
        cout<<a_2<<endl;
    }
}



}
