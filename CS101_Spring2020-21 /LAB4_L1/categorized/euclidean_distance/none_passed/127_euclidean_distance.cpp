#include<simplecpp>
main_program
{
    int q;
    cin>>q;
    float sum=0;
    repeat(q)
    {
        int n;
        cin>>n;
        repeat(n)
        {
            float a,b;
            cin>>a>>b;
            sum=sum+(a-b)*(a-b);

        }
        float c=sqrt(sum);
        printf("%.2f\n", c);
        cout<<endl;
        sum=0;
    }
}
