#include<simplecpp>

main_program{
     int n;
     long int x,y,maxsum;
     cin>>n;
     cin>>x>>y;
     maxsum=x+y;
     repeat(n-2)
     {
        x=y;
        cin>>y;
        if(x+y>maxsum)
           maxsum=x+y;
     }
     cout<<maxsum;
}
