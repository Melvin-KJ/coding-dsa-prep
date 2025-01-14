// first approach
//  #include <bits/stdc++.h>
//  using namespace std;

// int main()
// {
//     int a, b, n, c=0;
//     cin >> a >> b;
//     if (a > b)
//     {
//         n = a;
//     }
//     else
//     {
//         n = b;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         if (a % i == 0 && b % i == 0)
//         {
//             c++;
//         }
//     }
//     cout << c;
//     return 0;
// }

// Optimized second approach using GCD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, n, c = 0;
    cin >> a >> b;

    // Compute GCD of a and b
    int gcd = __gcd(a, b);

    for (int i = 1; i * i <= gcd; i++)
    {
        if (gcd % i == 0)
        {
            c++;
            if (i != gcd / i)
            {
                c++;
            }
        }
    }

    cout << c;
    return 0;
}
