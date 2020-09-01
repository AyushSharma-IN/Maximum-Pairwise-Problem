#include <iostream>
#include <vector>
using namespace std;

long long MPw(const vector<int>& a)
{
    int n = a.size();
    int i, j;
    int i1 = -1;
    int i2 = -1;

    for(i = 0; i < n; i++)
    {
        if ((i1 == -1) || (a[i] > a[i1]))
        {
            i1 = i;
        }
    }

    for (j = 0; j < n; j++)
    {
        if ((j != i1) && (( i2 == -1) || (a[j] > a[i2])))
        {
            i2 = j;
        }        
    }
    
    return ((long long)a[i1]) * a[i2];
}

int main()
{
    int n, i;
    long long result = 0;

    cin >> n;
    vector<int> a(n);

    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    result = MPw(a);
    cout << result << endl;
    
    return 0;
}