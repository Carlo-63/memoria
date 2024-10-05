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

int*** allocaMatrice3D(int X, int Y, int Z) {
    int*** ptr = (int***) calloc(Z, sizeof(int**));

    for (int i = 0; i < Z; i++) {
        ptr[i] = allocaMatrice(X, Y);
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

void stampaMatrice3D(int*** mat, int X, int Y, int Z) {
    for (int i = 0; i < Z; i++) {
        std::cout<<"\nLayer "<<i<<std::endl;
        for (int j = 0; j < X; j++) {
            for (int k = 0; k < Y; k++) {
                std::cout<<mat[i][j][k]<<" ";
            }
            std::cout<<"\n";
        }
    }
}

int main() {
    srand(time(NULL));

    int x, y, z;

    std::cout<<"X: ";
    std::cin>>x;

    std::cout<<"Y: ";
    std::cin>>y;

    std::cout<<"Z: ";
    std::cin>>z;

    if (x > 0 && y > 0 && z > 0) {
        int*** mat = allocaMatrice3D(x, y, z);

        // Riempie la matrice 3D e i vari layer con numeri casuali da 0 a 9
        for (int i = 0; i < z; i++) {
            for (int j = 0; j < x; j++) {
                for (int k = 0; k < y; k++) {
                    mat[i][j][k] = rand()%10;
                }
            }
        }

        stampaMatrice3D(mat, x, y, z);

        for (int i = 0; i < z; i++) {
            for (int j = 0; j < x; j++) {
                free(mat[i][j]);
            }
            free(mat[i]);
        }

        free(mat);

    }
    else {
        std::cout<<"Valore non valido"<<std::endl;
    }

    return 0;
}