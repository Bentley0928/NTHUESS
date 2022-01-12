#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
int binarysearch(int n)
{
    int mid, low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        mid=(low+high)/2;
        if (n == arr[mid])
        {
            for(int i=low;i<mid;i++){
                cout << arr[i] << ' ';
            }
            cout << arr[mid];
            cout << '*';
            for(int i=mid+1;i<=high;i++){
                cout << arr[i] << ' ';
            }
            cout << endl;
            return mid;
        }
        else if (n > arr[mid])
        {
            for(int i=low;i<mid;i++){
                cout << arr[i] << ' ';
            }
            cout << arr[mid];
            cout << '*';
            for(int i=mid+1;i<=high;i++){
                cout << arr[i] << ' ';
            }
            cout << endl;
            low = mid + 1;
            
        }
        else
        {
            for(int i=low;i<mid;i++){
                cout << arr[i] << ' ';
            }
            cout << arr[mid];
            cout << '*';
            for(int i=mid+1;i<=high;i++){
                cout << arr[i] << ' ';
            }
            cout << endl;
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int n, trash;
    cin >> n >> trash;
    for (int i = 0; i < trash; i++)
    {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    int ans = binarysearch(n);
    if(ans!=-1) cout << n << " found in element " << ans << endl;
    else cout << n << " not found\n"; 
    return 0;
}