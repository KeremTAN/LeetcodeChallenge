class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int left, right, tmpIx, num;
        for(int i=0; i<nums1.size(); i++){
            right = -1, left=nums2.size(), num = nums1[i];
            while(++right <= --left){
                if(num==nums2[right]) {
                    tmpIx = right;
                    break;
                }
                else if (num==nums2[left]) {
                    tmpIx = left;
                    break;
                }
            }
            while(tmpIx < nums2.size()){
                if (num < nums2[tmpIx]){
                    nums1[i]=nums2[tmpIx];
                    num=-2;
                    break;
                }
                tmpIx++;
            }
            if(num !=-2){
                nums1[i] = -1;
            }
        }
        return nums1;
    }
};