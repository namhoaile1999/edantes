#include <iostream>

using namespace std;

int main()
{
    int n, *num, i;
    cin >> n;
    n *= 2;
    num = new int[n];
    for (i = 0; i < n; ++i)
    {
        cin >> num[i];
    }
    for(i = 0;  ;i++)
    {
        if (i % 2 == 1)
        {
            if (num[i] >= num[i + 1])
            {
                int j;
                if(num[i] > num[i+2])
                {
			        num[i + 2] = num[i];
				}
                for (j = i; j < n; ++j)
                {
                    num[j] = num[j + 2];
                }
                n -= 2;  
				i--;  
            } 
        }
        if(i >= n)
        {
		    break;
		}
    }
    int check;
    check = 0;
    for (i = 0; i < n; i++)
    {
        cout << num[i] << " ";
        check++;
        if (check == 2)
        {
            cout << "\n";
            check = 0;
        }
    }
    return 0;
}
