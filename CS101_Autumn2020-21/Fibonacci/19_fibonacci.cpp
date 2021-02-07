#include<simplecpp>

main_program{
//Write your code here


int a=0,b=1;
int c,n,k;

cin >> n >> k;

cout << "0" << endl;
cout << "1" << endl;

   for (int i=1; i<=(n-2); i++) {

        c=a+b;
        cout << c%k << endl;

        a=b%k;
        b=c%k;



   }

}
