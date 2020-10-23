#include<simplecpp>

main_program{
float x,y;
    int n;
    cin>>n;
    cin >> x >> y;

    float maxsum = x + y ;

    if (n>2)
    {
        repeat(n-2)
            {
                cin >> x;
                if ( x+y > maxsum )
                {
                    maxsum = x+y;
                }
                x=y;
            }
    }
cout << maxsum << endl;

	}
