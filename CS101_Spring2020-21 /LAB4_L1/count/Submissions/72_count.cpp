#include<simplecpp>

main_program{
int q,f=0,n;
cin>>q;
repeat(q){f=0;
    cin>>n;switch(n%2==0){case(1):f++;}
switch(n%3==0){case(1):f++;}
switch(n%5==0){case(1):f++;}
switch(n%7==0){case(1):f++;}
switch(n%11==0){case(1):f++;}
cout<<f;}
}

