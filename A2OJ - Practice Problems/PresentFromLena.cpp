#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

std::string rtrim(const std::string &s)
{
    size_t end = s.find_last_not_of(" ");
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

int main()
{
    int n;
    cin >> n;

    vector<string> output;
    int rows = 2*n+1;

    for (int i=0; i < rows; i++) {
        output.push_back("");
    }
    
    for (int i=0; i < rows; i++) {
        for (int j=0; j < rows; j++) {    
            if (n - abs(i-n) - abs(j-n) < 0) {
                output[j] = output[j] + "  ";
            }
            else {
                output[j] = output[j] + to_string(n - abs(i-n) - abs(j-n)) + " ";
            }              
        }
    }


    for (int i=0; i < output.size(); i++) {
        cout << rtrim(output[i]) << endl;
    }



    return 0;
}
