#include <iostream>

int main() {
    int n;

    std::cout<<"N: ";
    std::cin>>n;

    int *numeri = (int*) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++) {
        std::cout<<"N."<<i<<": ";
        std::cin>>numeri[i];
    }

    for (int i = 0; i < n; i++) {
        std::cout<<i<<". "<<numeri[i]<<std::endl;
    }

    free(numeri);

    return 0;
}
