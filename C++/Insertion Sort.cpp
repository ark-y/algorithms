#include <iostream>
using namespace std;

void insertion_sort(int arr[], int n)
{
    // There is nothing wrong with naming your variables as descriptive as you want.
    // Doing it will make the code more readable than just calling everything i and j. So let's do it.
    // I need to know what is the index of the first unsorted item. This is the one I need to insert in.
    for (int first_unsorted_index = 0; first_unsorted_index < n; first_unsorted_index++)
    {

        // Now I need to keep pushing this item back in, until it reaches the beginning of the array
        // or until it reaches an item smaller than itself.
        // That means, I need to remember what is its current position. Initially, it's at first_unsorted_index
        // but it will move towards the left after every 'push'
        int current_index = first_unsorted_index;

        // While there is still at least one item behind, and that item is larger than this...
        while (current_index - 1 >= 0 && arr[current_index - 1] > arr[current_index])
        {
            // Swap the items (aka 'push' this one further in)
            swap(arr[current_index - 1], arr[current_index]);

            // And update current_index - the item is now at one index closer to the beginning
            current_index--;
        }

        // Once the code reaches here, the item has been inserted in its correct place. We can move on
        // to the next unsorted item.
    }

    // Once the loop finishes, we have sorted every item.
}

int main() {
    int arr[10] = {9, 4, 10, 2, 1, 8, 6, 3, 5, 7};
    insertion_sort(arr, 10);
    cout << "Old array items: {9, 4, 10, 2, 1, 8, 6, 3, 5, 7}\n" << "New array items:" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}