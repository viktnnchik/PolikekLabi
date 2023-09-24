
// Программа с использованием While
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 0.0;
    double y = 0.0;
    while (x <= 0.34) {
        y = tan(exp(x) + cos(x));
        cout << "x = " << x << ", y = " << y << endl;
        x += 0.06;
    }
    return 0;
}

// Программа с использованием For

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double y = 0.0;
    for (double x = 0.0; x <= 0.34; x += 0.06) {
        y = tan(exp(x) + cos(x));
        cout << "x = " << x << ", y = " << y << endl;
    }
    return 0;
}



// Программа с использованием Do while

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = 0.0;
    double y = 0.0;
    do {
        y = tan(exp(x) + cos(x));
        cout << "x = " << x << ", y = " << y << endl;
        x += 0.06;
    } while (x <= 0.34);
    return 0;
}

//Поставь звездочку на Github https://github.com/viktnnchik


//использовать оператор for найти сумму, произведение, минимальное и максимальное значение


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double sum = 0.0;
    double proizv = 1.0;
    double min_val = INFINITY;
    double max_val = -INFINITY;
    for (double x = 1.8; x <= 2.5; x += 0.6) {
        for (double y = 0.8; y <= 1.3; y += 0.4) {
            double z = 0.0;
            if (x - y <= 1) {
                z = sqrt(x) + sin(y);
            }
            else {
                z = sqrt(x) / y;
            }
            sum += z;
            proizv *= z;
            if (z < min_val) {
                min_val = z;
            }
            if (z > max_val) {
                max_val = z;
            }
            cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
        }
    }
    cout << "Sum = " << sum << endl;
    cout << "proizv = " << proizv << endl;
    cout << "Minimum value = " << min_val << endl;
    cout << "Maximum value = " << max_val << endl;
    return 0;
}

//Поставь звездочку на Github https://github.com/viktnnchik

// оператор while
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = -8.7;
    while (x <= -5) {
        double y = 0.5;
        while (y <= 1.5) {
            double z = max(pow(y, 1.0 / 3.0), x + y);
            cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
            y += 0.8;
        }
        x += 2.4;
    }
    return 0;
}
//Поставь звездочку на Github https://github.com/viktnnchik


// оператор do while
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x = -8.7;
    do {
        double y = 0.5;
        do {
            double z = max(pow(y, 1.0 / 3.0), x + y);
            cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
            y += 0.8;
        } while (y <= 1.5);
        x += 2.4;
    } while (x <= -5);
    return 0;
}
//Поставь звездочку на Github https://github.com/viktnnchik














