int BS(vector<int>& arr, int tar, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;
        if (tar > arr[mid])
            return BS(arr, tar, mid + 1, end);
        else if (tar < arr[mid])
            return BS(arr, tar, st, mid - 1);
        else
            return mid;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int tar = 7;
    int idx = BS(arr, tar, 0, arr.size() - 1);
    cout << idx << endl;
}
