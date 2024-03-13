#include <iostream>

int main() {
    int m, n, p, q;
    std::cout << "enter the no of rows in first matrix " << std::endl;
    std::cin >> m;
    std::cout << "enter the no of columns in first matrix " << std::endl;
    std::cin >> n;
    std::cout << "enter the no of rows in the second matrix " << std::endl;
    std::cin >> p;
    std::cout << "enter the no of columns in the second matrix " << std::endl;
    std::cin >> q;

    if (n == p) {
        int a[m][n];
        int b[p][q];
        int res[m][q];

        std::cout << "enter the elements in the first matrix " << std::endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                std::cin >> a[i][j];
            }
        }

        std::cout << "enter the elements in the second matrix" << std::endl;
        for (int i = 0; i < p; i++) {
            for (int j = 0; j < q; j++) {
                std::cin >> b[i][j];
            }
        }

    
        

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                res[i][j]=0;
                for (int k = 0; k < p; k++) {
                    res[i][j] = res[i][j] + a[i][k] * b[k][j];
                }
            }
        }

        std::cout << "resultant matrix " << std::endl;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < q; j++) {
                std::cout << res[i][j] << " ";
            }
            std::cout << std::endl;
        }
    } else {
        std::cout << "matrix multiplication is not possible " << std::endl;
    }

    return 0;
}
