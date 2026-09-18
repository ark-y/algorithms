#include <iostream>
using namespace std;

void bubble_sort(int arr[], int n)
{
    // We said we need at most N passes, so let's run a loop that many times

    for (int pass_counter = 0; pass_counter < n; pass_counter++)
    {
        // Inside this loop, I need to implement the logic of one passing
        // First, I define a variable that will tell me whether this pass had any swaps
        // Initially it's false, if I ever see a swap, I'll make it true.
        bool pass_had_swaps = false;

        // Start from the left, every time compare the current item to the one next to it
        for (int left_item = 0; left_item < n - 1; left_item++)
        {
            // Did you notice how my left_item ^ doesn't go all the way to the end?
            // That's because if I want to compare it with the right item, the left item cannot be
            // the last one in the array.
            if (arr[left_item] > arr[left_item + 1]) {
                swap(arr[left_item], arr[left_item + 1]);
                // Set the flag! There was a swap, the list may not be sorted yet.
                pass_had_swaps = true;
            }
        }

        // This pass was done. Did we have any swaps? If not, we can break the loop
        // so the next pass won't run
        if (!pass_had_swaps)
            break;
    }
}

int main() {
    int arr[10] = {9, 4, 10, 2, 1, 8, 6, 3, 5, 7};
    bubble_sort(arr, 10);
    cout << "Old array items: {9, 4, 10, 2, 1, 8, 6, 3, 5, 7}\n" << "New array items:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}