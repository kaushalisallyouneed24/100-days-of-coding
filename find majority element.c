#include <stdio.h>

int main() {
    int n, i, count;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    int majority = -1;
    for(i = 0; i < n; i++) {
        count = 0;
        for(int j = 0; j < n; j++) {
            if(nums[j] == nums[i])
                count++;
        }
        if(count > n / 2) {
            majority = nums[i];
            break;
        }
    }
    printf("%d\n", majority);
    return 0;
}
