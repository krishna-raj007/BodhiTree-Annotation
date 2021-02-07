#include <simplecpp>
main_program{

   int p , k, i=1,j=0;
   cin>>p>>k;
   cout<<j<<endl;
   cout<<i<<endl;
   repeat(p-2)
    {
        int next_term=(i%k+j%k)%k;
        cout<<next_term%k<<endl;
        j=i;
        i=next_term;
    }
    }