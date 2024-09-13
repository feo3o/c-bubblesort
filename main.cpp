#include <iostream>

void bubble_sort(int array[], int size)
{
    int hold;

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
            }
        }
    }
}

int main()
{
    int arr[] = {10, 2, 3, 6, 8, 2, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    bubble_sort(arr, size);

    for (int number : arr)
    {
        std::cout << number << " ";
    }

    return 0;
}