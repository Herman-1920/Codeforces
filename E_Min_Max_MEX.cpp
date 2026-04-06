#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        auto ok = [&](int m)
        {
            if (m == 0)
                return true;

            set<ll> s;
            int segment = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] < m)
                    s.insert(a[i]);

                if (s.size() == m)
                {
                    segment++;
                    s.clear();
                }
            }
            return segment >= k;
        };

        int l = 0, r = n + 1, mid, ans;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << "\n";
    }
}