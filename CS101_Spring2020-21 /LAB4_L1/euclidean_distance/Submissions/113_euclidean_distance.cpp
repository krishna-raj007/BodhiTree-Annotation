#include<simplecpp>
main_program{

  int  Q,i ;
  float temp = 0,ED[1000];
  float a[1000],b[1000];
  cin>>Q;

  for ( int j = 0; j<Q;j++)
  {
     int N;
     cin>>N;
     for (  i =0 ; i<N;i++)
     {
        cin>>a[i]>>b[i];
     }
     for ( int k = 0;k<N;k++)
     {
     temp = temp + pow((a[k]-b[k]),2);
     }
      ED[j] = sqrt(temp);
      temp = 0;
  }
  for(int j = 0;j<Q;j++)
  {
     printf("%.2f\n",ED[j]);
  }
  }



