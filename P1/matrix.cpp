#include <iostream>
#include <cstdlib>
#include <ctime>

void createMatrix(double** &m, int rows, int cols)
{
    try
    {
        m = new double*[rows];
        for (int i = 0; i < rows; ++i)
        {
            m[i] = new double[cols];
            for (int j = 0; j < cols; ++j)
            {
                m[i][j] = std::rand() % 50 + 1;
                std::cout << m[i][j] << "\t";
            }
            std::cout << "\n";
        }
    } 
    catch (const std::bad_alloc&)
    {
        std::cerr << "Error de memoria al crear la matriz.\n";
        if (m)
        {
            for (int i = 0; i < rows; ++i)
            {
                delete[] m[i];
            }
            delete[] m;
            m = nullptr;
        }
    }
}

void transposed_matrix(double** &transp, double** const &m, int original_rows, int original_cols)
{
    if (!m) return;
    try
    {
        transp = new double*[original_cols];
        for (int i = 0; i < original_cols; ++i) 
        {
            transp[i] = new double[original_rows];
            for (int j = 0; j < original_rows; ++j) 
            {
                transp[i][j] = m[j][i];
                std::cout << transp[i][j] << "\t";
            }
            std::cout << "\n";
        }
    } 
    catch (const std::bad_alloc&)
    {
        std::cerr << "Error de memoria al crear la traspuesta.\n";
        if (transp)
        {
            for (int i = 0; i < original_cols; ++i) 
            {
                delete[] transp[i];
            }
            delete[] transp;
            transp = nullptr;
        }
    }
}

void liberarMatriz(double** &m, int filas)
{
    if (!m) return;

    for (int index = 0; index < filas; ++index) 
    {
        delete[] m[index];
    }
    delete[] m;
    m = nullptr;
    std::cout << "Matriz liberada con éxito.\n";
}

int main()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    double **matriz = nullptr;
    double **transp = nullptr;

    createMatrix(matriz, 7, 8);
    std::cout << "\n\n";
    transposed_matrix(transp, matriz, 7, 8);
    
    liberarMatriz(matriz, 7);
    liberarMatriz(transp, 8);

    return 0;
}