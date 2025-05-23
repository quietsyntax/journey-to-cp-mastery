#include <iostream>
#include <vector>
using namespace std;

void peakEle(vector<int> &arr)
{
    int n = arr.size();

    if (n == 1)
    {
        cout << arr[0] << " ";
        return;
    }
    if (arr[0] > arr[1])
    {
        cout << arr[0] << " ";
    }
    if (arr[n - 1] > arr[n - 2])
    {
        cout << arr[n - 1] << " ";
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            cout << arr[i] << " ";
        }
    }
}

int main()
{
    int n;
    cout << "Enter size of Vector: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of Vector: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Peak elements: ";
    peakEle(arr);

    return 0;
}
