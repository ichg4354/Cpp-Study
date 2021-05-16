// #include <iostream>
// #include <iomanip>
// #include <vector>
// #include <ctime>

// using namespace std;

// int binary_search(const std::vector<int> &a, int seek)
// {
//     int n = a.size();
//     int first = 0,    // Initially the first element in vector
//         last = n - 1, // Initially the last element in vector
//         mid;          // The middle of the vector
//     while (first <= last)
//     {
//         mid = first + (last - first + 1) / 2;
//         if (a[mid] == seek)
//             return mid; // Found it
//         else if (a[mid] > seek)
//             last = mid - 1;  // continue with 1st half
//         else                 //
//             first = mid + 1; // continue with 2nd half
//     }
//     return -1;
// }

// int linear_search(const std::vector<int> &a, int seek)
// {
//     int n = a.size();
//     for (int i = 0; i < n && a[i] <= seek; i++)
//         if (a[i] == seek)
//             return i; // Return position immediately
//     return -1;        // Element not found
// }

// double time_execution(int (*search)(const std::vector<int> &, int), std::vector<int> &v, int trials)
// {
//     int n = v.size();
//     double elapsed = 0.0;
//     for (int iters = 0; iters < trials; iters++)
//     {
//         clock_t start_time = clock(); // Start the timer
//         for (int i = 0; i < n; i++)
//         {
//             search(v, i);
//         }                           // Search for all elements
//         clock_t end_time = clock(); // Stop the timer
//         elapsed += static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
//     }
//     return elapsed / trials; // Mean elapsed time per run
// }

// int main()
// {

//     std::cout << "---------------------------------------\n";
//     std::cout << " Vector         Linear           Binary\n";
//     std::cout << " Size           Search           Search\n";
//     std::cout << "---------------------------------------\n";
//     for (int size = 0; size <= 50000; size += 5000)
//     {
//         std::vector<int> list(size);                                                                                          // Make a vector of the appropiate size
//         std::cout << std::setw(7) << size;                                                                                    // Search for all the elements in list using linear search // Compute running time averaged over five runs
//         std::cout << std::fixed << std::setprecision(3) << std::setw(12)
//          << time_execution(linear_search, list, 5) << " sec"; // Search for all the elements in list binary search // Compute running time averaged over 25 runs
//         std::cout << std::fixed << std::setprecision(3)
//          << std::setw(12) << time_execution(binary_search, list, 25) << " sec\n";
//     }
// }
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

void print(const std::vector<int> &a)
{
    int n = a.size();
    std::cout << "{";
    if (n > 0)
    {
        std::cout << a[0]; // Print the first element
        for (int i = 1; i < n; i++)
            std::cout << ',' << a[i]; // Print the rest
    }
    std::cout << "}";
}

int random(int begin, int end)
{
    if (begin >= end)
        return 0;
    else
    {
        int range = end - begin;
        return begin + rand() % range;
    }
}

void permute(std::vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n - 1; i++)
    {
        std::swap(a[i], a[random(i, n)]);
    }
}

void faulty_permute(std::vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
    { // Select a pseudorandom position somewhere in the collection
        std::swap(a[i], a[random(0, n)]);
    }
}

int classify(const std::vector<int> &a)
{
    switch (100 * a[0] + 10 * a[1] + a[2])
    { 
    case 123:
        return 0;
    case 132:
        return 1;
    case 213:
        return 2;
    case 231:
        return 3;
    case 312:
        return 4;
    case 321:
        return 5;
    }
    return -1;
}
void report(const std::vector<int> &a)
{
    std::cout << "1,2,3: " << a[0] << '\n';
    std::cout << "1,3,2: " << a[1] << '\n';
    std::cout << "2,1,3: " << a[2] << '\n';
    std::cout << "2,3,1: " << a[3] << '\n';
    std::cout << "3,1,2: " << a[4] << '\n';
    std::cout << "3,2,1: " << a[5] << '\n';
}
void clear(std::vector<int> &a)
{
    int n = a.size();
    for (int i = 0; i < n; i++)
        a[i] = 0;
}

int main()
{
    // Initialize random generator seed
    srand(static_cast<int>(time(0)));
    std::vector<int> permutation_tally{0, 0, 0, 0, 0, 0};
    // original always holds the vector {1,2,3}
    const std::vector<int> original{1, 2, 3};
    // working holds a copy of original that gets permuted and tallied
    std::vector<int> working;
    // Run each permutation one million times
    const int RUNS = 1000000;

    std::cout << "--- Random permute #1 -----\n";
    clear(permutation_tally);
    for (int i = 0; i < RUNS; i++)
    {                       // Run 1,000,000 times // Make a copy of the original vector
        working = original; // Permute the vector with the first algorithm
        permute(working);   // Count this permutation
        permutation_tally[classify(working)]++;
    }

    report(permutation_tally); // Report results

    std::cout << "--- Random permute #2 -----\n";
    clear(permutation_tally);
    for (int i = 0; i < RUNS; i++)
    {                            // Run 1,000,000 times // Make a copy of the original vector
        working = original;      // Permute the vector with the second algorithm
        faulty_permute(working); // Count this permutation
        permutation_tally[classify(working)]++;
    }
    report(permutation_tally); // Report results
}