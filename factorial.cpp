#include <iostream>

using namespace std;


int main() {

    int n;
    int factorial;

    cout << "Enter a Number : " << endl;
    cin >> n;

    while(n>=1){
        factorial = factorial * n;
        n--;
    }

    cout << factorial << endl;




    return 0;

}




