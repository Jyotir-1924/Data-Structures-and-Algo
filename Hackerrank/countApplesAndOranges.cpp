// #include <iostream>
// #include <vector>
// using namespace std;

// Version 1: Verbose with extra vectors (beginner-friendly)
// void countApplesAndOrangesVerbose(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
//     vector<int> applePoints;
//     vector<int> orangePoints;
//     int countApple = 0, countOrange = 0;

//     Calculate landing points for apples
//     for (int i = 0; i < apples.size(); i++) {
//         applePoints.push_back(a + apples[i]);
//     }

//     Calculate landing points for oranges
//     for (int i = 0; i < oranges.size(); i++) {
//         orangePoints.push_back(b + oranges[i]);
//     }

//     Count apples falling within range
//     for (int i = 0; i < applePoints.size(); i++) {
//         if (applePoints[i] >= s && applePoints[i] <= t)
//             countApple++;
//     }

//     Count oranges falling within range
//     for (int i = 0; i < orangePoints.size(); i++) {
//         if (orangePoints[i] >= s && orangePoints[i] <= t)
//             countOrange++;
//     }

//     cout << "Verbose Version:\n";
//     cout << countApple << endl << countOrange << endl;
// }

// Version 2: Optimized without extra vectors
// void countApplesAndOrangesOptimized(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
//     int countApple = 0, countOrange = 0;

//     for (const int &d : apples) {
//         int landing = a + d;
//         if (landing >= s && landing <= t)
//             countApple++;
//     }

//     for (const int &d : oranges) {
//         int landing = b + d;
//         if (landing >= s && landing <= t)
//             countOrange++;
//     }

//     cout << "Optimized Version:\n";
//     cout << countApple << endl << countOrange << endl;
// }

// Main function to test both versions
// int main() {
//     int s = 2, t = 3;
//     int a = 1, b = 5;
//     vector<int> apples = {1};     // lands at 2
//     vector<int> oranges = {-2};   // lands at 3

//     countApplesAndOrangesVerbose(s, t, a, b, apples, oranges);
//     cout << "----------\n";
//     countApplesAndOrangesOptimized(s, t, a, b, apples, oranges);

//     return 0;
// }
