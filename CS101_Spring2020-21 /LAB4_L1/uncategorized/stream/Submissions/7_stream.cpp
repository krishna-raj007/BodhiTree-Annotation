#include <iostream>
    using namespace std;
    int main()
    {
        int temp = 0;
        int largest = -1;
        while(temp != -1){
        cin >> temp;
        largest = max(largest, temp);
              }
                cout << largest << endl;
    }
