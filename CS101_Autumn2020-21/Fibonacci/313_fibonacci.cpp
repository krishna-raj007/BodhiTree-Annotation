#include <simplecpp>
main_program{
int n , first_term = 0, second_term = 1, next_term, i , k ;
cin >> n >> k ;
for ( i = 0 ; i < n  ; i++ )
    {
       if ( i <= 1 )
          next_term = i;
       else
       {
          next_term = first_term + second_term;
          first_term = second_term;
          second_term = next_term;
       }

         cout << next_term << endl;
        


       }
}
