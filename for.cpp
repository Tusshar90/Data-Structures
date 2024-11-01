#include <iostream>

using namespace std;


int main() {

    int n;
    int sum = 0;

    cout << "Enter A Number : ";
    cin >> n;

    for(int i=0;i<=n;i++){
        sum = sum + i;

    }

    cout << "Sum of numbers from 1 to " << n <<" is "<< sum << endl;

    return 0;

}




