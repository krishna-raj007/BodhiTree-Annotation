#include<simplecpp>

main_program{
//Write your code here

           int n,k, a1=1, a2=1 , coll=0 , x, y;

           cin>>n >> k ;

           cout<< a1%k << endl << a2%k<<endl ;

           for(int i=3; i<=n ; i++){

                coll= (coll + a1%k + a2%k ) % k ;

                x=a1+a2;
                y=a2+x ;

                a1=x ; a2=y ;

                cout<<coll <<endl ;

           }
}
