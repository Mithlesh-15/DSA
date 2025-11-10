class Solution {
public:
    bool possible(vector<int> &bloomDay, int m, int k, int day)
{
    int count = 0, bouquets = 0;
    for (int b : bloomDay)
    {
        if (b <= day)
        {
            count++;
            if (count == k)
            {
                bouquets++;
                count = 0;
            }
        }
        else
        {
            count = 0;
        }
    }
    return bouquets >= m;
}

int minDays(vector<int> &bloomDay, int m, int k)
{
    long long total = (long long)m * k;
    if (total > bloomDay.size())
        return -1; // not enough flowers

    int start = *min_element(bloomDay.begin(), bloomDay.end());
    int end = *max_element(bloomDay.begin(), bloomDay.end());

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (possible(bloomDay, m, k, mid))
        {
            end = mid -1;
        }
        else
        {
            start = mid + 1;
        }
    }

    return start;
}
};
