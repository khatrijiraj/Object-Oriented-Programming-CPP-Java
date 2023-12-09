#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    // a. Using a vector to store a collection of integers
    vector<int> numbers = {5, 2, 8, 1, 9, 3, 7};

    // b. Sorting the vector using the sort algorithm from STL
    sort(numbers.begin(), numbers.end());

    // c. Displaying the sorted vector
    cout << "Sorted Numbers: ";
    for (const auto& num : numbers) {
        cout << num << " ";
    }
    cout << endl;

    // d. Using an iterator to find the minimum element
    auto minElement = min_element(numbers.begin(), numbers.end());
    cout << "Minimum Element: " << *minElement << endl;

    // e. Using accumulate to find the sum of elements
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    cout << "Sum of Elements: " << sum << endl;

    // f. Using copy_if to copy only even numbers to another vector
    vector<int> evenNumbers;
    copy_if(numbers.begin(), numbers.end(), back_inserter(evenNumbers), [](int x) { return x % 2 == 0; });

    // g. Displaying the even numbers
    cout << "Even Numbers: ";
    for (const auto& num : evenNumbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
