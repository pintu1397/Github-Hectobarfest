// C++ program to find floor square root of an integer

#include <iostream>
 
using namespace std;
int floorSqrt(int x)
{
    // Base cases
    if (x == 0 || x == 1)
        return x;
 
   
    int start = 1, end = x / 2, ans;
    while (start <= end) {
        int mid = (start + end) / 2;
 
      
        int sqr = mid * mid;
        if (sqr == x)
            return mid;
 
       
        /*
           if(mid*mid<=x)
                   {
                           start = mid+1;
                           ans = mid;
                   }
 
           */
        if (sqr <= x) {
            start = mid + 1;
            ans = mid;
        }
        else 
            end = mid - 1;
    }
    return ans;
}
 
// Driver program
int main()
{
    int x = 11;
    cout << floorSqrt(x) << endl;
    return 0;
}
