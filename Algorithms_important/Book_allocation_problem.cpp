#include <iostream>
#include <vector>
using namespace std;

bool allocateBooks(vector<int> A, int N, int M, int target)
{
    // This function tells if "Target" no. of books can be that maximum
    // number of books that can be allocated to each student
    int currentStudent = 0;
    int studentNumber = 1;

    int i = 0;
    while (i < N)
    {
        // cout << "studentNumber, currentStudent: " << studentNumber << ", " << currentStudent << endl;
        if (studentNumber > M)
            return 0;

        currentStudent += A[i];
        if (currentStudent <= target)
            i++;

        else
        {
            currentStudent = 0;
            studentNumber++;
        }
    }
    return 1;
}

int findPages(vector<int> A, int N, int M)
{
    if (M > N)
        return -1;
    // Through this fucntion, we return the maximum number of books that any of the "M" student will read
    // If we have minimised the number of books read by each student

    // Using Binary Search approach

    int sum = 0; // To find the sum of the array
    for (int i : A)
        sum += i;

    int low = 0;
    int high = sum; // This is the maximum no. of books that can be given to a student
    int mid = (low + high) / 2;
    // So we know that our solution lies between this range (0 -> 203)

    // our goal is to find the number just at which the allocateBooks function returns true value
    while (low <= high)
    {
        if (allocateBooks(A, N, M, mid) == true)
            high = mid - 1;
        if (allocateBooks(A, N, M, mid) == false)
            low = mid + 1;
        // important step
        mid = (low + high) / 2;
    }
    return low;
}
int main()
{
    int n = 11;
    //"n" is the total number of books that we have

    vector<int> arr = {11, 16, 19, 55, 60, 71, 76, 80, 88, 90, 90};
    // This "arr" stores the number of pages in each book

    int M = 2;
    // This "M" shows the number of students we have to distribute these books to

    // Now we have to distribute these books CONTIGUOSLY in order to:-
    // minimise the number of pages each student has to read

    cout << findPages(arr, n, M) << endl;
    return 0;
}