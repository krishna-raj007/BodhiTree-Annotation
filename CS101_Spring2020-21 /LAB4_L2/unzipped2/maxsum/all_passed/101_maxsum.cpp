#include<simplecpp>

main_program
{
    int n;
    cin>>n;
    int p,q;
    cin>>p>>q;
    int max_n(p+q);
   if (n>2){
    repeat(n-2)
    {
        cin>>p;
        if (p+q>max_n)
            {max_n=p+q;}
            q=p;




    }

    cout<<max_n;
}
}
