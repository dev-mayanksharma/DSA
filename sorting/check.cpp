#include <iostream>
using namespace std;

long long summation(long long i) {
    long long sum = 0;

    sum = i*(i+1)/2;

    return sum;
}

int main() {
    long long call = 0;

    for (long long i = 0; i <= 10000000000000000; i += 10000) {
        call += summation(i);
    }

    cout << "sum is " << call<<endl;
}