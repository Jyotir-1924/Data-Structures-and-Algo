🧠 DS & Algo 🚀
========================

Welcome to the **DSA and HackerRank** repository --- a curated collection of **Data Structures & Algorithms** solutions, **HackerRank** challenges, and automation scripts to speed up coding workflows.

* * * * *

📁 Project Structure
--------------------

bash

CopyEdit

`.vscode/                 → VS Code settings and configuration
DSA and Hackerrank/
│
├── Arrays/Basic/
│   └── largestElement.cpp      # Find the largest element in an array
│
├── Hackerrank/
│   ├── formatter.cpp           # Code formatting utility
│   ├── auutomateTest.py        # Python script to automate test case execution
│   └── (more problems soon)`

* * * * *

🔥 Features
-----------

-   ✅ **C++ solutions** to common DSA problems

-   🧪 **Python automation** for testing and execution

-   🗂️ **Well-organized folder structure**

-   📘 Great for **HackerRank** and other coding platforms

-   💡 Easy to navigate and expand as you learn

* * * * *

🚀 Getting Started
------------------

### 🧰 Prerequisites

Make sure you have:

-   `g++` (C++ compiler)

-   `python3`

-   A terminal or VS Code for running scripts

### ▶️ Compile & Run a C++ Program

bash

CopyEdit

`g++ Arrays/Basic/largestElement.cpp -o largest && ./largest`

### 🧪 Run Python Automation

bash

CopyEdit

`python3 Hackerrank/auutomateTest.py`

* * * * *

📌 Topics Covered
-----------------

-   Arrays

-   Conditional Logic

-   Loops and Iteration

-   HackerRank Challenges

-   Python Automation Scripts

-   C++ Code Formatting

* * * * *

🧠 Sample: `largestElement.cpp`
-------------------------------

cpp

CopyEdit

`#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {4, 9, 2, 10, 3};
    int maxElement = arr[0];

    for (int num : arr) {
        if (num > maxElement)
            maxElement = num;
    }

    cout << "The largest element is: " << maxElement << endl;
    return 0;
}`

* * * * *

🧪 Sample: `auutomateTest.py`
-----------------------------

python

CopyEdit

`import subprocess

def run_test():
    print("Running C++ program...")
    subprocess.run(["g++", "Arrays/Basic/largestElement.cpp", "-o", "largest"])
    subprocess.run(["./largest"])

if __name__ == "__main__":
    run_test()`

* * * * *

🤝 Contributing
---------------

Want to contribute?

1.  Fork this repo 🍴

2.  Create a new branch: `git checkout -b feature-name`

3.  Make your changes

4.  Commit: `git commit -m "Add feature"`

5.  Push and create a PR ✅

* * * * *

✨ Author
--------

Made with 💻 by **Jyotiraditya Gautam**

-   💼 [LinkedIn](https://www.linkedin.com/in/jyotiradityagautam/)

-   🌐 Portfolio (Coming soon!)
