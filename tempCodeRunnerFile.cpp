 for (int i = 0; i < r; i++)
    {
        for (int a = 0; a < c; a++)
        {
            cout << *(arrPtr[i] + a) << " ";
            cout << setw(5) << (arrPtr[i] + a) << " ";
        }
        cout << endl;
    }