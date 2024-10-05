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
    char ridimensiona;

    std::cout<<"N: ";
    std::cin>>n;

    int* arr = allocaArray(n);

    for (int i = 0; i < n; i++) {
        std::cout<<"N."<<i<<": ";
        std::cin>>arr[i];
    }

    stampaArray(arr, n);

    while(true) {
        std::cout<<"Vuoi ridimensionare l'array? (Y/N): ";
        std::cin>>ridimensiona;

        if (std::tolower(ridimensiona) == 'y') {
            int nuova_dim;
            std::cout<<"Nuova dimensione: ";
            std::cin>>nuova_dim;

            arr = (int*) realloc(arr, sizeof(int) * nuova_dim);

            for (int i = n; i < nuova_dim; i++) {
                std::cout<<"N."<<i<<": ";
                std::cin>>arr[i];
            }

            stampaArray(arr, nuova_dim);

            break;
        }
        else if (std::tolower(ridimensiona) == 'n') {
            break;
        }
        else {
            std::cout<<"Opzione non valida!"<<std::endl;
        }
    }


    free(arr);      

    return 0;
}