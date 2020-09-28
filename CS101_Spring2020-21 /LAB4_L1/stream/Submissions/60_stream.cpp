#include<simplecpp>

main_program{
float i;
float y = -1;
 cin >> i;
while (i!=-1){

    y = max(i,y);
     cin >> i;
}
cout << y;
}
