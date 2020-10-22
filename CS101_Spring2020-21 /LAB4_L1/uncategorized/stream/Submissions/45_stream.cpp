#include<simplecpp>

main_program{
int p;
cin >> p;
int max = p;
while(p!=-1)
{
cin >> p;
if(p>max)
max=p;
}
cout << max;
}
