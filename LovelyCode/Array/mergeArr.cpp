#include <iostream>
using namespace std;
int* mergeArr(int A[], int Asize, int B[], int Bsize)
{
    int *C, i, j, k;
    int Csize = Asize + Bsize;
    C = new int[Csize]; // dyanmic Array with the help of Pointers
    for (i = 0, j = 0, k = 0; i < Asize && j < Bsize; k++)
    {
        if (A[i] < B[j])
        {
            C[k] = A[i];
            i++;
        }
        else
        {
            C[k] = B[j];
            j++;
        }
        
    }
    while (i < Asize) // For remainng value of Araay A
        {
            C[k] = A[i];
            k++;
            i++;
        }
        while (j < Bsize) // For reamaining value of Array B
        {
            C[k] = B[j];
            k++;
            j++;
        }
       return C;
    }

    int main()
    {
        // Sorted Array
        int A[] = {2, 5, 7, 9, 10, 11};
        int B[] = {1, 3, 4, 6, 11, 13, 19, 20};
        int Asize = sizeof(A) / sizeof(A[0]);
        int Bsize = sizeof(B) / sizeof(B[0]);
        int *C;

       C= mergeArr(A, Asize, B, Bsize);
        for(int i=0;i<Asize+Bsize;i++){
            cout<<C[i]<<" ";
        }
        return 0;
    }