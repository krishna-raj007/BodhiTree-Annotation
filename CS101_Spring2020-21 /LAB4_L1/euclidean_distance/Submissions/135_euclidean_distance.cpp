#include<simplecpp>

main_program
{
    int n_queries, n_dim;
    float a,b,dist,sq_dist;
    cin >> n_queries;

    repeat(n_queries)
    {
        cin >> n_dim;
        sq_dist = 0;
        repeat(n_dim)
        {
            cin >> a >> b;
            sq_dist += ((a-b)*(a-b));
        }

        dist = sqrt(sq_dist);
        printf("%.2f\n", dist);
    }
}
