class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1 = nums1.size();
        int s2 = nums2.size();
        
        double m1 = -1;
        double m2 = -1;
        
        int i = 0;
        int j = 0;
        
        
        for(int count = 0; count <= (s1 + s2) / 2 ; count++){

            m2 = m1;
            
            if( i != s1 && j != s2){
                m1 = nums1[i] > nums2[j] ? nums2[j++] : nums1[i++];            
            } 
            
            else if (i < s1){
                m1 = nums1[i++];
            }
            
            else{
                m1 = nums2[j++];
            }
            
        }

        if((s1 + s2) % 2 == 1){
            return m1;
        }
        
        return (m1 + m2) / 2;
        
    }
};