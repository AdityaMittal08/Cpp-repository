#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number to check if it is prime or not: ";
    cin >> num;
    bool isPrime = true;
    for(int i = 2; i <= num-1; i++){
        if(num%i == 0){
            isPrime = false;
            break;
        }
    }
    if (isPrime == true){
        cout << "Is a Prime number \n";
    } else {
        cout << "Not a prime number \n";
    }
}
