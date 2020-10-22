#include<simplecpp>
main_program{
int query,dim;
float euclid_dist=0,x,y,sq=0;
cin>>query;
repeat(query)
{cin>>dim; sq=0;
   repeat(dim)
   {cin>>x>>y;
    sq+=(x-y)*(x-y);}
    euclid_dist=sqrt(sq);
    printf("%.2f\n",euclid_dist);
} }
