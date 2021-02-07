#include <iostream>
using namespace std;

int main()
{

    int n,k;
    long int t1=0,t2=1,nT=0;


    cin >> n >>k;



    for(int i=1; i<= n; ++i)
    {

    if(i == 1)
    {

      cout << t1 <<endl;

      continue;
      }
         if(i == 2)

         {
         cout<< t2<<endl;
         continue;

           }
        nT = t1 + t2;
        t1 = t2;
        t2 = nT;

        double a=nT%k;
        cout<<a<<endl;

}
return 0;
}
