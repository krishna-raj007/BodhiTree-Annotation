#include<simplecpp>

main_program
{
    int n , i  ; cin >> n ;
    float x, y ,z , sum=1 ; double answer ;
    for (i=1; i <=n ; i++)
    {
        z=2*i+1;
        x=pow(-1,i);
        y=x/z;
        sum=sum+ y;
    }
    answer = sum*4 ;


    cout << answer << endl ;
}




