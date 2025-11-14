class Solution {
public:
    bool canShip(vector<int> &weights, int days, int cap)
{
    int countDay = 1;
    int load = 0;

    for (int i = 0; i < weights.size(); i++) {
        if (load + weights[i] <= cap) {
            load += weights[i];
        } else {
            countDay++;
            load = weights[i];
        }

        if (countDay > days) return false;
    }

    return true;
}

int shipWithinDays(vector<int> &weights, int days)
{
    int start = *max_element(weights.begin(), weights.end());
    int end = accumulate(weights.begin(), weights.end(), 0);

    while (start < end)
    {
        int mid = start + (end - start) / 2;

        if (canShip(weights, days, mid)) {
            end = mid;
        } else {
            start = mid + 1;
        }
    }
    return start;
}

};
