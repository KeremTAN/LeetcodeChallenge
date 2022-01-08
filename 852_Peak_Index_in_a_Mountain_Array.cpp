class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
	int left = 0, right = arr.size() - 1, m;
	    while (left <= right) {
		    m = floor((left + right) / 2);
		    if (arr[m] > arr[m + 1] && arr[m] > arr[m - 1]) return m;
		    else if (arr[m] < arr[m + 1]) left = m + 1;
		    else right = m - 1;
	    }
	    return 0;
    }
};