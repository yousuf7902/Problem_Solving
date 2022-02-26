#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double salary, new_salary, total_salary, percent;
    cin >> salary;

    if (salary >= 0.0 && salary <= 400.00)
    {
        percent = 0.15;
    }
    else if (salary >= 400.01 && salary <= 800.00)
    {
        percent = 0.12;
    }
    else if (salary >= 800.01 && salary <= 1200.00)
    {
        percent = 0.10;
    }
    else if (salary >= 1200.01 && salary <= 2000.00)
    {
        percent = 0.07;
    }
    else
    {
        percent = 0.04;
    }

    new_salary = salary * percent;
    total_salary = salary + new_salary;
    percent = percent * 100;
    cout << fixed << setprecision(2) << "Novo salario: " << total_salary << endl
         << "Reajuste ganho: " << new_salary << endl
         << "Em percentual: " << setprecision(0) << percent << " %" << endl;
}