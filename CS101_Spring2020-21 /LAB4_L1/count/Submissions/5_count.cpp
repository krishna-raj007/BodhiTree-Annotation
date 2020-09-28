#include<simplecpp>

main_program{
int n,m,c=0;
cin>>n;
repeat(n){
    cin>>m;
    switch(m%2==0)
    {
        case 1:c++;
        break;
    }
   switch(m%3==0)
    {
        case 1:c++;
        break;
    }
    switch(m%5==0)
    {
        case 1:c++;
        break;
    }
    switch(m%7==0)
    {
        case 1:c++;
        break;
    }
    switch(m%11==0)
    {
        case 1:c++;
        break;
    }
    cout<<c;
}
}
