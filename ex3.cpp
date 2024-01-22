#include <iostream>
#include <cmath>

using namespace std;

int solve(int m, int d, int k, int c) {
    int amountTimesHitMonsterBeforeNeedToFixSword = (d - 1) / k;
    int amountTimesNeedToFixSword = ceil((double) (m - 1) / amountTimesHitMonsterBeforeNeedToFixSword) - 1;
    return c * amountTimesNeedToFixSword;
}

int main() {
    cout << solve(7, 8, 3, 5);
}
