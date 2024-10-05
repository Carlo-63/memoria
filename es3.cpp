#include <iostream>

int* allocaArray(int n) {
    int* ptr = (int*) calloc(n, sizeof(int));

    return ptr;
}

void stampaArray(int* arr, int dim) {
    for (int i = 0; i < dim; i++) {
        std::cout<<i<<". "<<arr[i]<<std::endl;
    }
}

int main() {
    int n;

    std::cout<<"N: ";
    std::cin>>n;

    int* arr = allocaArray(n);

    for (int i = 0; i < n; i++) {
        std::cout<<"N."<<i<<": ";
        std::cin>>arr[i];
    }

    stampaArray(arr, n);

    free(arr);      

    return 0;
}