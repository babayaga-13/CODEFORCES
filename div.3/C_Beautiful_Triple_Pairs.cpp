#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

// Function to calculate the number of beautiful pairs
ll countBeautifulPairs(vector<int> &a, int n)
{
    map<tuple<int, int, int>, ll> tripleCount;
    vector<tuple<int, int, int>> triples;

    // Extract triples using sliding window
    for (int j = 0; j < n - 2; ++j)
    {
        triples.push_back(make_tuple(a[j], a[j + 1], a[j + 2]));
        tripleCount[triples.back()]++;
    }

    ll beautifulPairs = 0;

    // Count beautiful pairs
    for (int j = 0; j < triples.size(); ++j)
    {
        auto &triple = triples[j];
        int x = get<0>(triple), y = get<1>(triple), z = get<2>(triple);

        // Compare current triple with all other triples
        if (tripleCount[make_tuple(x, y, z)] > 1)
            beautifulPairs += (tripleCount[make_tuple(x, y, z)] - 1);

        // Checking all potential beautiful pairs
        if (tripleCount.count(make_tuple(x + 1, y, z)))
            beautifulPairs += tripleCount[make_tuple(x + 1, y, z)];
        if (tripleCount.count(make_tuple(x - 1, y, z)))
            beautifulPairs += tripleCount[make_tuple(x - 1, y, z)];
        if (tripleCount.count(make_tuple(x, y + 1, z)))
            beautifulPairs += tripleCount[make_tuple(x, y + 1, z)];
        if (tripleCount.count(make_tuple(x, y - 1, z)))
            beautifulPairs += tripleCount[make_tuple(x, y - 1, z)];
        if (tripleCount.count(make_tuple(x, y, z + 1)))
            beautifulPairs += tripleCount[make_tuple(x, y, z + 1)];
        if (tripleCount.count(make_tuple(x, y, z - 1)))
            beautifulPairs += tripleCount[make_tuple(x, y, z - 1)];
    }

    // Divide by 2 because each pair is counted twice
    return beautifulPairs / 2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        cout << countBeautifulPairs(a, n) << endl;
    }

    return 0;
}
