#include <bits/stdc++.h>
using namespace std;

string getBitsAsString(long long number) {
    std::string bitString;
    for (int i = 63; i >= 0; i--) {
        long long mask = 1LL << i;
        bitString += (number & mask) ? '1' : '0';
    }
    return bitString;
}

long long stringToLongLong(const std::string& bitString) {
    long long number = 0;
    for (int i = 0; i < 64; ++i) {
        if (bitString[i] == '1') {
            number |= 1LL << (63 - i);
        }
    }
    return number;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int test;
    cin >> test;
    
    while (test--) {
        long long a, b, r;
        cin >> a >> b >> r;

        string aBits = getBitsAsString(a);
        cout << aBits << endl;
        string bBits = getBitsAsString(b);
        cout << bBits << endl;
        string rBits = getBitsAsString(r);
        cout << rBits << endl;

        bool canAlter = false;
        bool aEncountered = false;
        bool bEncountered = false;
        int count = 0;
        bool aLarger = a > b;
        int encounteredCount = 0;

        for (int i=0; i<aBits.length(); i++) {
            if (aBits[i] == '1' && bBits[i] == '1') {
                aBits.at(i) = '0';
                bBits.at(i) = '0';
            }
            char currentA = aBits[i];
            char currentB = bBits[i];
            char currentR = rBits[i];

            if (currentA == '1') aEncountered = true;
            if (currentB == '1') bEncountered = true;
            if (currentR == '1') canAlter = true;

            if (canAlter) count++;

            if (aEncountered || bEncountered) {
                encounteredCount++;
                if (count > 1) {
                    if (aLarger) {
                        if (currentA != currentB) {
                            aBits.at(i) = '0';
                            bBits.at(i) = '1';
                        }
                    } else {
                        if (currentA != currentB) {
                            bBits.at(i) = '0';
                            aBits.at(i) = '1';
                        }
                    }
                } else if (count > 0 && encounteredCount > 1) {
                    if (aLarger) {
                        if (currentA == '1' && currentB == '0') {
                            aBits.at(i) = '0';
                            bBits.at(i) = '1';
                            canAlter = false;
                            count = 0;
                        }
                    } else {
                        if (currentA == '0' && currentB == '1') {
                            bBits.at(i) = '0';
                            aBits.at(i) = '1';
                            canAlter = false;
                            count = 0;
                        }
                    }

                }
            }
        }

        long long aChanged = stringToLongLong(aBits);
        long long bChanged = stringToLongLong(bBits);

        long long res = abs(aChanged - bChanged);

        cout << res << endl;
    }
}