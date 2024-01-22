#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool solve(string str) {
    stack<char> s;

    for (char x: str) {
        if (x == '(' || x == '[' || x == '{') {
            s.push(x);
        } else if (x == ')' || x == ']' || x == '}') {
            if (s.empty()) {
                return false;
            }

            char top = s.top();
            s.pop();

            if ((x == ')' && top != '(') ||
                (x == ']' && top != '[') ||
                (x == '}' && top != '{')) {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    int T;
    cin >> T;

    cin.ignore(); 

    for (int i = 0; i < T; i++) {
        string testCase;
        getline(cin, testCase);

        if (solve(testCase)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }

    return 0;
}