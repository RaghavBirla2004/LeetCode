class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> num;
        for (int i = 0; i < nums1.size(); i++) {
            num.push_back(nums1[i]);
        }
        for (int i = 0; i < nums2.size(); i++) {
            num.push_back(nums2[i]);
        }
        sort(num.begin(), num.end());

        if (num.empty()) {
            return 0.000; // or some appropriate value if the array is empty
        }

        int n = num.size();

        if (n % 2 == 1) {
            return static_cast<double>(num[n / 2]);
        } else {
            double a = num[n / 2 - 1] + num[n / 2];
            return a / 2;
        }
    }
};
