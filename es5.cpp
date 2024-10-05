#include <iostream>
#include <ctime>

int* allocaArray(int n) {
    int* ptr = (int*) calloc(n, sizeof(int));

    return ptr;
}

int** allocaMatrice(int RIGHE, int COLONNE) {
    int** ptr = (int**) calloc(RIGHE, sizeof(int*));

    for (int i = 0; i < RIGHE; i++) {
        ptr[i] = allocaArray(COLONNE);
    }

    return ptr;
}

void stampaArray(int* arr, int dim) {
    for (int i = 0; i < dim; i++) {
        std::cout<<i<<". "<<arr[i]<<std::endl;
    }
}

void stampaMatrice(int** mat, int RIGHE, int COLONNE) {
    for (int i = 0; i < RIGHE; i++) {
        for (int j = 0; j < COLONNE; j++) {
            std::cout<<mat[i][j]<<" ";
        }
        std::cout<<"\n";
    }
}

int main() {
    srand(time(NULL));

    int RIGHE, COLONNE;

    std::cout<<"Righe: ";
    std::cin>>RIGHE;

    std::cout<<"Colonne: ";
    std::cin>>COLONNE;

    if (RIGHE > 0 && COLONNE > 0) {
        int** mat = allocaMatrice(RIGHE, COLONNE);

        // Riempie la matrice con numeri casuali da 0 a 9
        for (int i = 0; i < RIGHE; i++) {
            for (int j = 0; j < COLONNE; j++) {
                mat[i][j] = rand()%10;
            }
        }
        
        stampaMatrice(mat, RIGHE, COLONNE);

        for (int i = 0; i < RIGHE; i++) {
            free(mat[i]);
        }

        free(mat);
    }
    else {
        std::cout<<"Valore non valido"<<std::endl;
    }


    return 0;
}