#include <iostream>

using namespace std;

int main(){
    int n;
    bool isPrime = true; 

    cout<<"Enter a Number: ";
    cin>>n;

    for(int i=2;i<n;i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime == true){
        cout<<"The Number is Prime Number \n";
    }
    else{
        cout<<"The number is not a prime Number \n";
    }


}