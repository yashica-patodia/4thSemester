#include <iostream>
using namespace std;
class Matrix; // Forward declaration
class Vector
{
    int e_[3];
    int n_;

public:
    Vector(int n) : n_(n)
    {
        // Arbitrary initialization
        for (int i = 0; i < n_; ++i)
            e_[i] = i + 1;
    }
    void Clear()
    { // Set a zero vector
        for (int i = 0; i < n_; ++i)
            e_[i] = 0;
    }
    void Show()
    { //Show the vector
        for (int i = 0; i < n_; ++i)
            cout << e_[i] << " ";
        cout << endl
             << endl;
    }
    friend Vector Prod(Matrix *pM,
                       Vector *pV);
};
class Matrix
{
    int e_[3][3];
    int m_, n_;

public:
    Matrix(int m, int n) : m_(m), n_(n)
    {
        // Arbitrary initialization
        for (int i = 0; i < m_; ++i)
            for (int j = 0; j < n_; ++j)
                e_[i][j] = i + j;
    }
    void Show()
    { //Show the matrix
        for (int i = 0; i < m_; ++i)
        {
            for (int j = 0; j < n_; ++j)
                cout << e_[i][j] << " ";
            cout << endl;
        }
        cout << endl;
    }
    friend Vector Prod(Matrix *pM,
                       Vector *pV);
};
Vector Prod(Matrix *pM, Vector *pV)
{
    Vector v(pM->m_);
    v.Clear();
    for (int i = 0; i < pM->m_; i++)
        for (int j = 0; j < pM->n_; j++)
            v.e_[i] += pM->e_[i][j] * pV->e_[j];
    return v;
}
int main()
{
    Matrix M(2, 3);
    Vector V(3);
    Vector PV = Prod(&M, &V);
    M.Show();
    V.Show();
    PV.Show();
    return 0;
}
