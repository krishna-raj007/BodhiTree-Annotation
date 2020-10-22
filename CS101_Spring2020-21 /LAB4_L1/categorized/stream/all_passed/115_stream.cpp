#include<simplecpp>

main_program{

int i,j=0,temp, stream[10000];

for(i= 0 ; i <10000;i++)
{
   cin>>stream[i];
   j++;
   if(stream [i]==-1)
   {
    break;
   }
}

temp = stream [ 0 ];
for ( i = 0 ; i<j;i++)
{



 for(int k = 0;k<j;k++)
 {
    if(temp<stream[i])
    {
        temp = stream[i];
    }
 }
}
cout<<temp;
}


