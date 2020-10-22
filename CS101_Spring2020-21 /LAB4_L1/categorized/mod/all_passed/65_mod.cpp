#include<simplecpp>

main_program{


long int n,m,r=1,p,t=2;

cin >> n >> m;

while (t<=n)
{

r=((t%m)*(r%m))%m;
t=t+1;
}

cout << r;
}
