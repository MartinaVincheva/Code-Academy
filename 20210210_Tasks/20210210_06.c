/*Задача 6. Пренапишете функцията int linear_search(const int a[], int n, int
key); използайки пойнтер аритмртиката без инкрементиращи променливи.*/

int linear_search1(const int a[], int n, int key) {
    int *p = a;

    while((p - a < n) && (*p != key)) p++;
    return p - a; /* pointer arithmetic */
}

int linear_search(const int a[], int n, int key) {
    int i;

    for (i = 0; i < n; i++)
        if (*(a + i) == key) /* pointer arithmetic */
            return i;
    return -1;
}

int main(void) {
    int arr  [10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int n = sizeof(arr)/sizeof(int);
    int searchNumber, position;
    
    printf ("Enter number for search :");
    scanf ("%d", &searchNumber);
    if ( (position = linear_search( arr, n, searchNumber)) == -1 )
        printf("%d is not present in my array.\n", searchNumber);
    else
        printf("%d is present in my array at position : %d.\n", searchNumber, position);
    if ( (position = linear_search1( arr, n, searchNumber)) >= 10 )
        printf("%d is not present in my array.\n", searchNumber);
    else
        printf("%d is present in my array at position : %d.\n", searchNumber, position);

    return 0;
}