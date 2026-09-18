#include <iostream>
using namespace std;

int smallest_item_index(int arr[], int n, int from_index)
{
    // This time, instead of assuming the first item of the array is the smallest, I assume the first one
    // in the portion I'm searching in is the smallest
    int current_smallest_index = from_index;
    int current_smallest_number = arr[current_smallest_index];

    // Now go through items but this time only start from from_index (or from_index + 1 as we said above)
    for (int i = from_index + 1; i < n; i++)
    {
        // If this item is smaller than what we currently know as the smallest, we have found a new smallest!
        if (arr[i] < arr[current_smallest_index])
            current_smallest_index = i;
    }

    // When the code reaches here, all items in the array after from_index have been examined.
    return current_smallest_index;
}

void selection_sort(int arr[], int n)
{
    // I need to repeat the whole process of "find the next smallest item" N times
    for (int i = 0; i < n; i++)
    {
        // Get the next smallest one, but only from index i onwards.
        int next_smallest_index = smallest_item_index(arr, n, i);

        // Put it at the end of the sorted pile.
        swap(arr[i], arr[next_smallest_index]);
    }

    // Now the array is definitely sorted
}

int main()
{

    int n;

    cout << "How many numbers do we have?" << endl;
    cin >> n;

    int arr[100];

    cout << "Enter the numbers one by one:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    selection_sort(arr, 10);

    cout << "New array items:" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}