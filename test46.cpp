#include <iostream>
int main()
{
    int c, r;
    std::cin >> r >> c;
    int **mat;
    mat = new int *[r];
    for (int i = 0; i < r; i++)
        mat[i] = new int[c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mat[i][j] = i * c + j;
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl;
    }
    for (int i = 0; i < r; i++)
        delete[] mat[i];
    delete[] mat;
}