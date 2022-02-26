#include <bits/stdc++.h>
using namespace std;

int main()
{
    string temp;
    int s_day, s_hour, s_min, s_sec, f_day, f_hour, f_min, f_sec, all_sec, day_count, hour_count, min_count, sec_count;
    cin >> temp >> s_day;
    cin >> s_hour >> temp >> s_min >> temp >> s_sec;
    cin >> temp >> f_day;
    cin >> f_hour >> temp >> f_min >> temp >> f_sec;

    if ((s_day > 0 && f_day < 31) || f_min >= 1 || s_min >= 1)
    {
        all_sec = (f_day * 86400 + f_hour * 3600 + f_min * 60 + f_sec) - (s_day * 86400 + s_hour * 3600 + s_min * 60 + s_sec);
        if (all_sec < 0)
        {
            all_sec = all_sec + 86400;
        }
        day_count = all_sec / 86400;
        all_sec = all_sec - (day_count * 86400);
        hour_count = all_sec / 3600;
        all_sec = all_sec - (hour_count * 3600);
        min_count = all_sec / 60;
        sec_count = all_sec % 60;

        cout << day_count << " dia(s)\n"
             << hour_count << " hora(s)\n"
             << min_count << " minuto(s)\n"
             << sec_count << " segundo(s)\n";
    }
    return 0;
}