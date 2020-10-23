#include<simplecpp>
main_program{
 float a,b,c;
 char n;
 int m;
 cin >> m;
 repeat(m){
     cin >> a >> n >> b;
      switch(n){
         case '+' : c=a+b; cout << c << endl; break;
         case '-' : c=a-b; cout << c << endl; break;
         case '*' : c=a*b; cout << c << endl; break;
         case '/' : c=a/b; cout << c << endl; break;
         default: cout << "-1" << endl;
         }

    }
 }
