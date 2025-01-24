#include <iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number you want to find the factorial of: ";
    cin >> num;
    for (int i = num-1; i < num && num >= 1 && i >=1 ; i--){
        num = num*i;
    }
    cout << "The factorial of the number is: " << num << '\n';
    return 0;
}
