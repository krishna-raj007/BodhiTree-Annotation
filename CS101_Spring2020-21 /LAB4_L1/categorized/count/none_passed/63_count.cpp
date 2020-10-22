#include<simplecpp>

main_program{


int p,r=0,t=0;
cin >> p;

switch(1)
{
case 1: if (p%2==0) r=t+1; t=r;
case 2: if (p%3==0) r=t+1; t=r;
case 3: if (p%5==0) r=t+1; t=r;
case 4: if (p%7==0) r=t+1; t=r;
case 5: if (p%11==0) r=t+1; t=r;
default: cout << t;
}
}
