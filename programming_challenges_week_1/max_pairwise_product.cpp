#include <iostream>
#include <vector>
#include <algorithm>
#include<bits/stdc++.h>

using std::vector;
using std::cin;
using std::cout;
using namespace std;

long MaxPairwiseProduct(vector<long >& numbers, int n) {
  long result = 0;
  sort(numbers.begin(), numbers.end());
  result = numbers[n-1] * numbers[n- 2];
 
  return result;
}

int main() {
    int n;
    cin >> n;
    vector<long> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    long result = MaxPairwiseProduct(numbers, n);
    cout << result << "\n";
    return 0;
}

