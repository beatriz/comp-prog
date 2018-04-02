#include <iostream>
#include <vector>

using namespace std;

int birthdayCakeCandles(int n, vector <int> ar) {
    // Complete this function
    int tallestCandles = 0, max = 0;
    for (int i = 0; i < n; i++) {
        if (max < ar[i]) {
            max = ar[i];
            tallestCandles = 1;
        } else if (max == ar[i]) {
            tallestCandles++;
        }
    }

    return tallestCandles;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
        cin >> ar[ar_i];
    }
    int result = birthdayCakeCandles(n, ar);
    cout << result << endl;
    return 0;
}

