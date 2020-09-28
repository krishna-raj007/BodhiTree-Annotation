#include<simplecpp>

main_program{
int q,i,s=0,a,t;
cin >> q;
for(i=1;i<=q;i++)
{
    cin >> a;
    if(a%2) s++;
    if(a%3) s++;
    if(a%5) s++;
    if(a%7) s++;
    if(a%11) s++;
}
t=5-s;
cout << t;

}
