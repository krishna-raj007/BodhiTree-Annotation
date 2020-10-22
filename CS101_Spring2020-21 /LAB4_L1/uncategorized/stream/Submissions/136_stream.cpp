#include<simplecpp>

main_program
{
    int stream_num,largest_num = 0;
    cin >> stream_num;
    while(stream_num != -1)
    {
        if (stream_num > largest_num)
        {
            largest_num = stream_num;
        }
        cin >> stream_num;
    }

    cout << largest_num;
}
