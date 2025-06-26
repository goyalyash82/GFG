template <class T>
void sortArray(T a[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[j] < a[i]) {
                T temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

template <class T>
void printArray(T a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
