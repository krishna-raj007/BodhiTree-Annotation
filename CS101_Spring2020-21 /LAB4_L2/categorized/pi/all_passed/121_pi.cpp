#include<simplecpp>
main_program
{
    int n;
    cin >> n;
    double sum =1;
    for(int i =1; i<=n; i++)
    {
        if(i%2 == 1)
        {
            sum -= 1.0/(2*i+1);
        }
        if(i%2 == 0)
        {
            sum += 1.0/(2*i+1);
        }
    }
    sum = 4*sum;
    cout << sum ;

}
