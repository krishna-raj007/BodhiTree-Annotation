#include<simplecpp>

main_program{
int maximum,a;
cin>>a;
maximum=a;
while(a!=-1)
{
    maximum=max(a,maximum);
    cin>>a;
}
cout<<maximum;

}
