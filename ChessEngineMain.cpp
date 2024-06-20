// #include <Cocoa/Cocoa.h>

// #include <GLFW/glfw3.h>
// #include <ChessEngine.h>

#include <iostream>
#include <vector>
using namespace std;

void printVect(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

class Solution
{
public:
    vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n)
    {
        int i1 = m - 1;
        int i2 = n - 1;
        int k = m + n - 1;
        while (k > -1)
        {
            if (nums1[i1] > nums2[i2])
            {
                nums1[k] = nums1[i1];
                i1--;
            }
            else
            {
                nums1[k] = nums2[i2];
                i2--;
            }
            k--;
            printVect(nums1);
            cout << "############" << endl;
        }

        return nums1;
    }
};

int main()
{
    // s
    Solution s;
    vector<int> n1(6);
    n1[0] = 1;
    n1[1] = 2;
    n1[2] = 3;
    n1[3] = 0;
    n1[4] = 0;
    n1[5] = 0;
    vector<int> n2(3); // Allocate space for 3 elements
    n2[0] = 2;
    n2[1] = 5;
    n2[2] = 6;
    vector<int> nums = s.merge(n1, 3, n2, 3);
    printVect(nums);
    return 0;
}
