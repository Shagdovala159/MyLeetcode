class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        arr = nums1+nums2
        arr.sort()
        n =len(arr)
        if n % 2 == 0:
            a = float(arr[(n/2)-1])
            b = float(arr[((n+1)/2)])
            res = (a + b) /2
            return float(res)
        else:
            res = arr[((n+1)/2)-1]
            return float(res)

            
        
