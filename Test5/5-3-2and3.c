#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student
{
    char name[255];
    int score;
} a[255];

int sc[255];

int n;

void adjust_heap(int *array, int i, int lef)
{
    int temp = array[i];
    for (int k = i * 2 + 1; k < lef; k = k * 2 + 1)
    {
        if (k + 1 < lef && array[k] < array[k + 1])
        {
            k++;
        }
        if (array[k] > temp)
        {
            array[i] = array[k];
            i = k;
        }
        else
        {
            break;
        }
    }
    array[i] = temp;
}

void swap(int *array, int a, int b) //the swap function
{
    int temp = array[a];
    array[a] = array[b];
    array[b] = temp;
}

void heap_sort(int *array, int n) //heap sort
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        adjust_heap(array, i, n);
    }
    for (int j = n - 1; j > 0; j--)
    {
        swap(array, 0, j);
        adjust_heap(array, 0, j);
    }
}

int binary_search(int array[], int low, int high, int target) //bin search
{
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] > target)
            high = mid - 1;
        else if (array[mid] < target)
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}

void set_student(void)
{
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d", a[i].name, &a[i].score);
        getchar();
    }
}

void sort_student(void)
{
    for (int i = 0; i < 255; i++)
        sc[i] = a[i].score;
    heap_sort(sc, n);
}

void get_student()
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
            if (sc[i] == a[j].score)
            /*
            * I should have used the binary sort function,
            * but in case the two students get the same score,
            * I kept a traditional approach.
            */
                printf("%s %d\n", a[j].name, sc[i]);
    }
}

void search_student(int target)
{
    int c = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i].score == target)
        {
            printf("%s %d\n", a[i].name, a[i].score);
            c++;
        }
    }
    if (c == 0)
        printf("not found");
}

int main(void)
{
    int sel;
    while (1)
    {
        printf("1.Input\n2.Sort\n3.Output\n");
        scanf("%d", &sel);
        if (sel == 1)
            set_student();
        if (sel == 2)
            sort_student();
        if (sel == 3)
            get_student();
        if (sel == 4)
        {
            int sea;
            scanf("%d", &sea);
            search_student(sea);
        }
    }
    return 0;
}