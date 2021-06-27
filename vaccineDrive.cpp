#include<bits/stdc++.h>
using namespace std;
void solve()
{

    // if ((D >= 1 && D <= 10) && (d >= 1 && d <= 5) && (A < B) && (B < C) && A >= 1) {
    // }
    int personsAgeGroup, vaccinesperday;
    int arr[10];
    cin >> personsAgeGroup >> vaccinesperday;
    personsAgeGroup -= 1;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    if (personsAgeGroup >= 1 && personsAgeGroup <= 10) {
        int totalBeforeAgeGroup = 0, i;
        for (i = 9; i > personsAgeGroup; i--) {
            totalBeforeAgeGroup += arr[i];
        }
        int mindays = 0, maxdays = 0;
        int daysBeforeAgeGroup = totalBeforeAgeGroup / vaccinesperday;
        int remainderBeforeAgeGroup = totalBeforeAgeGroup % vaccinesperday;
        if (remainderBeforeAgeGroup > 0) {
            if (daysBeforeAgeGroup == 0) {
                mindays = 1;
                maxdays = mindays + (arr[i] / vaccinesperday);

            } else {
                mindays = daysBeforeAgeGroup + 1;
                maxdays = mindays + (arr[i] / vaccinesperday);
                maxdays = arr[i] % vaccinesperday > 0 ? maxdays += 1 : maxdays;
            }
        }
        else if (remainderBeforeAgeGroup == 0) {
            mindays = daysBeforeAgeGroup + 1;
            maxdays = mindays + (arr[i] / vaccinesperday) - 1;
            maxdays = arr[i] % vaccinesperday > 0 ? maxdays += 1 : maxdays;
        }
        cout << mindays << " " << maxdays;
    }
}
int main()
{

    int t;
    cin >> t;
    if ((t >= 1 && t <= 10000) )
    {
        while (t--)
        {
            solve();
            cout << endl;
        }
    }


}