#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long h1, b1, c1, h2, b2, c2;
    cin >> h1 >> b1 >> c1 >> h2 >> b2 >> c2;
    auto time_to_deplete = [](long long health, long long base_damage, long long cooldown)
    {
        long long total_damage = 0;
        long long time = 0;
        long long special_damage = base_damage * 2;
        while (health > 0)
        {
            if (time % cooldown == 0)
            {
                health -= special_damage;
            }
            else
            {
                health -= base_damage;
            }
            total_damage += base_damage;
            if (health > 0) time++;
        }
        return time;
    };

    long long time_to_beat_jake = time_to_deplete(h2, b1, c1);
    long long time_to_beat_mike = time_to_deplete(h1, b2, c2);

    if (time_to_beat_jake < time_to_beat_mike)
    {
        cout << "MIKE TYSON" << endl;
    }
    else if (time_to_beat_jake > time_to_beat_mike)
    {
        cout << "JAKE PAUL" << endl;
    }
    else
    {
        cout << "DRAW" << endl;
    }

    return 0;
}
