#include<simplecpp>
#
main_program{
int n,Q ;
  float  s=0, euclidean_distance;
  cin>>Q;
  repeat(Q){cin>>n;
            s=0;

    repeat(n){float a,b;
            cin>>a>>b;
            s=s + (b-a)*(b-a);
             }
              euclidean_distance=sqrt(s);
           printf("%.2f\n",euclidean_distance);

  }
	//Write your code here

}
