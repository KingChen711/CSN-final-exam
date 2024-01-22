#include <iostream>
#include <stack>
#include <string>

using namespace std;

int solve(int x, int y) {
// f(x,y) = f(x-1,y) + f(x,y-1) (x,y > 0)
// f(x,y) = f(y,x)
// f(x,0) =f (0,x) = 1
    if (x == 0 || y == 0) return 1;
    return solve(x - 1, y) + solve(x, y - 1);
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int x, y;
        cin >> x >> y;
        cout << solve(x, y) << endl;
    }

    return 0;
}