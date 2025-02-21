#include <stdio.h>

int main() {
    int n, search, i, linearComparisons = 0, binaryComparisons = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements (sorted for binary search to work):\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter a number to search: ");
    scanf("%d", &search);

    int linearIndex = -1;
    for (i = 0; i < n; i++) {
        linearComparisons++;
        if (arr[i] == search) {
            linearIndex = i;
            break;
        }
    }

    int low = 0, high = n - 1, binaryIndex = -1;
    while (low <= high) {
        binaryComparisons++;
        int mid = low + (high - low) / 2;

        if (arr[mid] == search) {
            binaryIndex = mid;
            break;
        }
        if (arr[mid] < search)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("\nResults:\n");
    if (linearIndex != -1)
        printf("Linear Search: Found at index %d (Comparisons: %d)\n", linearIndex, linearComparisons);
    else
        printf("Linear Search: Not found (Comparisons: %d)\n", linearComparisons);

    if (binaryIndex != -1)
        printf("Binary Search: Found at index %d (Comparisons: %d)\n", binaryIndex, binaryComparisons);
    else
        printf("Binary Search: Not found (Comparisons: %d)\n", binaryComparisons);

    if (binaryIndex != -1 && (binaryComparisons < linearComparisons)) {
        printf("\nBinary Search is more efficient for this test case.\n");
    } else {
        printf("\nLinear Search is more efficient for this test case.\n");
    }

    return 0;
}
