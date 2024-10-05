#include <iostream>

int main() {
    int *ptr_valore = (int*) malloc(sizeof(int));

    *ptr_valore = 42;

    std::cout << "Valore: " << *ptr_valore << "\nIndirizzo: " << ptr_valore << std::endl;

    free(ptr_valore);

    return 0;
}