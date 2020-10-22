
#include<simplecpp>


int main()
{
    float n1, n2,n3,n4;
    cout << "Enter  numbers: ";
    cin >> n1 >> n2 >> n3>>n4;
    if(n1 >= n2 && n1 >= n3 )                                                                                      0
{ cout << "Largest number: " << n1;
    }
    if(n2 >= n1 && n2 >= n3)
    {
        cout << "Largest number: " << n2;
    }
    if(n3 >= n1 && n3 >= n2) {
        cout << "Largest number: " << n3;
    }
        if (n4 >=n1 && n4>=n3 ) {
            cout<< "Largest number: " << n4;
        }
    }
    return 0;
}
