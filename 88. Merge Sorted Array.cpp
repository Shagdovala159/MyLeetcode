class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int j = 0, i = m; j<n; j++){
            nums1[i] = nums2[j];
            i++;
        }
    int temp;
    for (int i = 0; i < nums1.size(); i++) {
        for (int j = i + 1; j < nums1.size(); j++) {
            if (nums1[i] > nums1[j]) {
                temp = nums1[i];
                nums1[i] = nums1[j];
                nums1[j] = temp;
            }
        }
    }

    }
};