#include<simplecpp>

main_program{

int max,num;
cin>>max;
while(num!=-1)
{
    cin>>num;
    if(num>max)
    {
       max = num;
    }
}
cout<<max;
}
