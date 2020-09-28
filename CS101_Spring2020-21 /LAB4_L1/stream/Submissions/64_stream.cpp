#include<simplecpp>

main_program{



int p=0,t,s=0;


while (s!=-1)
{
    cin>>s;
    t= std::max(p,s);
    p=t;


    if (s==-1)
        break;
}
cout << p;
}
