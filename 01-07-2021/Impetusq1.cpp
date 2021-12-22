#include <bits/stdc++.h>
using namespace std;


int GCD(int a, int b)
{
    if (b == 0)
        return a;
    return GCD(b, a % b);
}


int maxGCDInRange(int L, int R)
{
    int ans = 1;

    for (int Z = R; Z >= 1; Z--) {


        if ((R / Z) - (L - 1) / Z > 1) {

            ans = Z;
            break;
        }
    }


    return ans;
}


int main()
{
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("../input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("../output.txt", "w", stdout);
#endif



    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        long long int ans = maxGCDInRange(x, y);
        cout << ans << endl;

    }

    return 0;
}