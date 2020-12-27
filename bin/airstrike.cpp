/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 * NOTE: it is recommended to use this even if you don't
 * understand the following code.
 */

#include <bits/stdc++.h>
using namespace std;
// constraints
#define MAXN 10000

// input data
int N, i;
int X[MAXN], Y[MAXN];

int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);

    assert(1 == scanf("%d", &N));
    bool buindings [4][4] = {false};
    for(i=0; i<N; i++)
    {
        assert(2 == scanf("%d %d", &X[i], &Y[i]));
        buindings[X[i]][Y[i]] = true;
    }

    int result = INT_MAX;

    for (int x1 = 0; x1 != 1; x1++)
    {
        for (int x2 = 0; x2 != 1; x2++)
        {
            for (int x3 = 0; x3 != 1; x3++)
            {
                for (int x4 = 0; x4 != 1; x4++)
                {
                    for (int y1 = 0; y1 != 1; y1++)
                    {
                        for (int y2 = 0; y2 != 1; y2++)
                        {
                            for (int y3 = 0; y3 != 1; y3++)
                            {
                                for (int y4 = 0; y4 != 1; y4++)
                                {
                                    bool test_buindings [4][4];

                                    for (int x= 0; x < 4; ++x)
                                    {
                                        for (int y= 0; y < 4; ++y)
                                        {
                                            test_buindings[x][y] = buindings[x][y];
                                        }
                                    }
                                    if(x1 == 1)
                                    {
                                        for(int i = 0; i < 4; ++i)
                                        {
                                            test_buindings[i][0] = false;
                                        }
                                    }
                                    if(x2 == 1)
                                    {
                                        for(int i = 0; i < 4; ++i)
                                        {
                                            test_buindings[i][1] = false;
                                        }
                                    }
                                    if(x3 == 1)
                                    {
                                        for(int i = 0; i < 4; ++i)
                                        {
                                            test_buindings[i][2] = false;
                                        }
                                    }
                                    if(x4 == 1)
                                    {
                                        for(int i = 0; i < 4; ++i)
                                        {
                                            test_buindings[i][3] = false;
                                        }
                                    }
                                    if(y1 == 1)
                                    {
                                        for(int i = 0; i < 4; ++i)
                                        {
                                            test_buindings[0][i] = false;
                                        }
                                    }
                                    if(y2 == 1)
                                    {
                                        for(int i = 0; i < 4; ++i)
                                        {
                                            test_buindings[1][i] = false;
                                        }
                                    }
                                    if(y3 == 1)
                                    {
                                        for(int i = 0; i < 4; ++i)
                                        {
                                            test_buindings[2][i] = false;
                                        }
                                    }
                                    if(y4 == 1)
                                    {
                                        for(int i = 0; i < 4; ++i)
                                        {
                                            test_buindings[3][i] = false;
                                        }
                                    }
                                    bool ok = true;
                                    for (int x= 0; x < 4; ++x)
                                    {
                                        for (int y= 0; y < 4; ++y)
                                        {
                                            if(test_buindings[x][y])
                                                ok = false;
                                        }
                                    }
                                    if (ok)
                                        result = min(result, x1 + x2 + x3 + x4 + y1 + y2 + y3 + y4);
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // insert your code here

    printf("%d\n", result); // print the result
    return 0;
}
