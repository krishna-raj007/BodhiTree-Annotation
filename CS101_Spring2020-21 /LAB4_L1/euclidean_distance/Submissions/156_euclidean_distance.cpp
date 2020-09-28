#include<simplecpp>

main_program{
 int p;
 cin >> p;

for (int i=0; i<p; i++)
{

    int n1;

     cin >> n1;
    double sum = 0.0;
    for(int i=0; i<n1;i++)

    {
         double m,n;
         cin >> m >> n;

         sum = sum + (m-n)*(m-n);
    }

     printf("%.2f\n",sqrt(sum));

    }

}


