#include <bits/stdc++.h>

using namespace std;

int findGCD(int a, int b) {
    if (b==0) return a;
    return findGCD(b, a%b);
}

int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int abMultiplier = 1, cdMultiplier = 1;

    a *= abMultiplier;
    b *= abMultiplier;
    c *= cdMultiplier;
    d *= cdMultiplier;

    int numerator = 0, denominator = 0;

    if (a == c) {
        numerator = b-d;
        denominator = b;
    } else if (b == d) {
        numerator = a-c;
        denominator = a;
    }
    
    int gcd = findGCD(max(numerator,denominator), min(numerator, denominator));
    numerator /= gcd;
    denominator /= gcd;

    cout << numerator << "/" << denominator;
}