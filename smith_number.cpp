#include <iostream>
using namespace std;

int digitsum(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

bool prime(int n){
    if(n < 2) return false;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;

    int original = n;
    int sum_digits = digitsum(n);
    int sum_factors = 0;

    // If number is prime → not Smith number / smith means in decimal ...........
    if(prime(n)){
        cout << "Not a Smith Number";
        return 0;
    }

    for(int i = 2; i <= n; i++){
        while(n % i == 0){
            sum_factors += digitsum(i);
            n /= i;
        }
    }

    if(sum_digits == sum_factors){
        cout << "Smith Number";
    } else {
        cout << "Not a Smith Number";
    }

    return 0;
}
