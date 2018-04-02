#include <iostream>
#include <vector>

using namespace std;

void miniMaxSum(vector <int> arr) {
    // Complete this function
  unsigned long long int min = ULONG_LONG_MAX, max = 0;
  for (int i = 0; i < arr.size(); i++) {
    unsigned long long int sum = 0;
    for (int j = 0; j < arr.size(); j++) {
      if (i != j)
        sum += arr[j];
    }
    if (min > sum)
      min = sum;
    if (max < sum)
      max = sum;
  }
  cout << min << " " << max;
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
        cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}

