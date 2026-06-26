/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int size = (nums1Size < nums2Size) ? nums1Size : nums2Size;
    int* arr = (int*)malloc(size * sizeof(int));
    int k = 0;

    for (int i = 0; i < nums1Size; i++) {
        for (int j = 0; j < nums2Size; j++) {
            if (nums1[i] == nums2[j]) {
                
                bool exists = false;

                for (int x = 0; x < k; x++) {
                    if (arr[x] == nums1[i]) {
                        exists = true;
                        break;
                    }
                }
                if (!exists) {
                    arr[k] = nums1[i];
                    k++;
                }
            }
        }
    }
    *returnSize = k;
    return arr;
}