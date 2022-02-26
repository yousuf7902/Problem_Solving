#include <bits/stdc++.h>
using namespace std;

int main()
{
    int input;
    float num1, num2, num3, num4, ex_num, total, avg, new_avg, new_total;
    cout << fixed << setprecision(1);
    cin >> num1 >> num2 >> num3 >> num4;
    total = num1 * 2 + num2 * 3 + num3 * 4 + num4 * 1;
    avg = total / (2 + 3 + 4 + 1);
    cout << "Media: " << avg << endl;
    if (avg >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (avg < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (avg >= 5.0 && avg <= 6.9)
    {
        cout << "Aluno em exame." << endl;

        cin >> ex_num;
        new_avg = avg + ex_num / 2.0;
        cout << "Nota do exame: " << ex_num << endl;
        if (new_avg >= 5.0)
        {
            cout << "Aluno aprovado." << endl;
        }
        else if (new_avg >= 4.9)
        {
            cout << "Aluno reprovado." << endl;
        }
        new_total = (avg + ex_num) / 2.0;
        cout << "Media final: " << new_total << endl;
    }
}