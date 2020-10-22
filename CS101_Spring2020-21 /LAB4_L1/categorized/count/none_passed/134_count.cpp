#include <simplecpp>

main_program
{
    int n_queries,num,count = 0;
    cin >> n_queries;
    repeat (n_queries)
    {
        cin >> num;
        if ((num%2) == 0)
        {
            count++;
        }
        if ((num%3) == 0)
        {
            count++;
        }
        if ((num%5) == 0)
        {
            count++;
        }
        if ((num%7) == 0)
        {
            count++;
        }
        if ((num%11) == 0)
        {
            count++;
        }
        cout << count;
        count = 0;
    }
}
