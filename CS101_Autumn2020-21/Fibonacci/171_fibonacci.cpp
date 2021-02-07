#include<simplecpp>

main_program{
long long int f, w ,z, x=0 , y=1;
cin >> w >> z ;
cout << x % z << endl;
cout << y % z << endl;
long long int i;
for( i=2; i < w; i++)
    {
    f = (x+y)%z;
    x = y;
    y = f;

    cout << f;
    cout << endl;
    }
}
