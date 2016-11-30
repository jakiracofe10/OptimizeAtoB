#include <iostream>

using namespace std;

int power2(int a,int b) {
    if (b==0) {
        return 1;
    } else if (b%2 == 0) {
        return power2(a,b/2)*power2(a,b/2);
    } else {
        return a*power2(a,b/2)*power2(a,b/2);
    }
}

int power(int a, int b) {
    int total = 1;
    for (int i=0; i<b; i++) {
        total *= a;
    }
    return total;
}

int main() {
    int a,b;
    cin >> a >> b;
    int result = power(a,b);
    cout << result;
}