/**

 * Note: The returned array must be malloced, assume caller calls free().

 */
int* twoSum(int* nums, int numsSize, int target) {
    int i, j;
    int* answer = (int*)malloc(sizeof(int) * 2);
    for (i = 0; i < numsSize - 1; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                answer[0] = i;
                answer[1] = j;
                break;
            }
        }
    }
    return answer;
}
