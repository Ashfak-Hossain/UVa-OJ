#include <bits/stdc++.h>

using namespace std;

// Ashfak Hossain Evan, CSE, American International University-Bangladesh (AIUB)

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL), cout.tie(NULL);

    // Code Start From Here

    int a, b;

    while ((cin >> a >> b))
    {
        int a1 = a;
        int b1 = b;

        if (a > b)
            swap(a, b);

        int mcl = 0, cl;

        while (a <= b)
        {
            cl = 1;
            unsigned int n = a;
            while (n != 1)
            {
                if (n % 2 == 1)
                {
                    n = 3 * n + 1;
                }
                else
                {
                    n = n / 2;
                }
                cl++;
            }

            if (cl > mcl)
            {
                mcl = cl;
            }
            a++;
        }

        cout << a1 << " " << b1 << " " << mcl << endl;
    }

    return 0;
}
