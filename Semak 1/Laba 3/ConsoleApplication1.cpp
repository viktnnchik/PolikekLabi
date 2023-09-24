#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    const int n = 8;
    double X[n];

    // заполняем массив Х по формуле
    for (int i = 0; i < n; i++) {
        X[i] = log(i + 0.5);
        cout << "X[" << i << "] = " << X[i] << endl;
    }


    // находим количество элементов, удовлетворяющих условию -0,3<cos(xi)<0,3
    int count = 0;
    for (int i = 0; i < n; i++) {
        double cos_xi = cos(X[i]);
        if (cos_xi > -0.3 && cos_xi < 0.3) {
            count++;
        }
    }
    cout << "Количество элементов, удовлетворяющих условию: " << count << endl;

    // меняем местами второй и пятый элементы
    double temp = X[1];
    X[1] = X[4];
    X[4] = temp;

    // выводим массив Х после замены элементов
    cout << "Массив Х после замены элементов: ";
    for (int i = 0; i < n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    // находим максимальный и минимальный элементы и меняем их местами
    double max_x = X[0];
    double min_x = X[0];
    int max_index = 0;
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (X[i] > max_x) {
            max_x = X[i];
            max_index = i;
        }
        if (X[i] < min_x) {
            min_x = X[i];
            min_index = i;
        }
    }
    double temp = X[max_index];
    X[max_index] = X[min_index];
    X[min_index] = temp;

    // выводим массив на экран после замены максимального и минимального элементов
    cout << "Массив после замены максимального и минимального элементов: ";
    for (int i = 0; i < n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;

    // находим минимальный положительный элемент и меняем его местами с третьим элементом
    double min_pos_x = INFINITY;
    int min_pos_index = -1;
    for (int i = 0; i < n; i++) {
        if (X[i] > 0 && X[i] < min_pos_x) {
            min_pos_x = X[i];
            min_pos_index = i;
        }
    }
    if (min_pos_index != -1) {
        double temp = X[2];
        X[2] = X[min_pos_index];
        X[min_pos_index] = temp;
    }

    // выводим массив на экран после замены минимального положительного элемента
    cout << "Массив после замены минимального положительного элемента: ";
    for (int i = 0; i < n; i++) {
        cout << X[i] << " ";
    }
    cout << endl;


    return 0;
}

//Поставь звездочку на Github https://github.com/viktnnchik


#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    const int n = 6;
    double Y[n] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
    double sum = 0;

    for (int i = 0; i < n; i++) {
        sum += i * pow(Y[i], 3) + sin(Y[i]);
    }

    cout << "Sum: " << sum << endl;

    ofstream file("result.txt");
    if (file.is_open()) {
        file << "Array Y: ";
        for (int i = 0; i < n; i++) {
            file << Y[i] << " ";
        }
        file << endl;
        file << "Sum: " << sum << endl;
        file.close();
    }
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}
//Поставь звездочку на Github https://github.com/viktnnchik


#include <iostream>
#include <fstream>

using namespace std;

int main() {
    const int n = 5;
    double A[n][n];
    double B[n] = { 0 };
    double prod = 1;
    double sum = 0;

    ifstream file("matrix.txt");
    if (file.is_open()) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                file >> A[i][j];
                if (i == j && A[i][j] < 0) {
                    prod *= A[i][j];
                }
                sum += A[i][j] * (i == 0 ? 1 : i == 1 ? 2 : i == 3 ? -3 : 0);
                B[j] += A[i][j] / n;
            }
        }
        file.close();

        cout << "Product of negative elements on the main diagonal: " << prod << endl;
        cout << "Sum: " << sum << endl;
        cout << "Array B: ";
        for (int i = 0; i < n; i++) {
            cout << B[i] << " ";
        }
        cout << endl;

        ofstream outfile("result.txt");
        if (outfile.is_open()) {
            outfile << "Matrix A:" << endl;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    outfile << A[i][j] << " ";
                }
                outfile << endl;
            }
            outfile << "Product of negative elements on the main diagonal: " << prod << endl;
            outfile << "Sum: " << sum << endl;
            outfile << "Array B: ";
            for (int i = 0; i < n; i++) {
                outfile << B[i] << " ";
            }
            outfile << endl;
            outfile.close();
        }
        else {
            cout << "Unable to open file" << endl;
        }
    }
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}
//Поставь звездочку на Github https://github.com/viktnnchik
