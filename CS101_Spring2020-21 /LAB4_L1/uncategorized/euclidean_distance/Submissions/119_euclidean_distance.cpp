#include<simplecpp>

main_program{


float d=0,q,n,a,b;
cin>>q;
repeat(q)
{

    cin>>n;
    repeat(n)
    {


    cin>>a>>b;
    d=d+(a-b)*(a-b);



}

d=sqrt(d);
printf("%.2f\n",d);
d=0;


}

}
