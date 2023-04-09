https://www.geeksforgeeks.org/median-of-two-sorted-arrays-of-different-sizes/
​
```
class Solution {
public:
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
int s1 = nums1.size();
int s2 = nums2.size();
double m1 = -1; // will be current Median;
double m2 = -1; // to store previous Median;
// Iterators for input array;
int i = 0;
int j = 0;
// iterating till middle point of the merged array (s1 + s2) / 2;
for(int count = 0; count <= (s1 + s2) / 2 ; count++){
​
// storing the previous median value;
m2 = m1;
// storing the smallest value in m1 if both iterators are less than
// their original input array;
if( i != s1 && j != s2){
m1 = nums1[i] > nums2[j] ? nums2[j++] : nums1[i++];
}