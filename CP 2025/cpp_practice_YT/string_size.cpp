#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << "string size= " << s.length() << endl; // s.size()
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Song
{
public:
    string name;
    string singer;
    float duration;
    int release_year;
    Song()
    {
    }
    Song(string n, string s, float d, int y)
    {
        name = n;
        singer = s;
        duration = d;
        release_year = y;
    }
};
void sortByName(Song playlist[], int n)
{
    for (int i = 1; i < n; i++)
    {
        Song key = playlist[i];
        int j = i - 1;
        while (j >= 0 && playlist[j].name > key.name)
        {
            playlist[j + 1] = playlist[j];
            j = j - 1;
        }
        playlist[j + 1] = key;
    }
}
void sortBySinger(Song playlist[], int n)
{
    for (int i = 1; i < n; i++)
    {
        Song key = playlist[i];
        int j = i - 1;
        while (j >= 0 && playlist[j].singer > key.singer)
        {
            playlist[j + 1] = playlist[j];
            j = j - 1;
        }
        playlist[j + 1] = key;
    }
}
void sortByDuration(Song playlist[], int n)
{
    for (int i = 1; i < n; i++)
    {
        Song key = playlist[i];
        int j = i - 1;
        while (j >= 0 && playlist[j].duration < key.duration)
        {
            playlist[j + 1] = playlist[j];
            j = j - 1;
        }
        playlist[j + 1] = key;
    }
}
void sortByReleaseYear(Song playlist[], int n)
{
    for (int i = 1; i < n; i++)
    {
        Song key = playlist[i];
        int j = i - 1;
        while (j >= 0 && playlist[j].release_year < key.release_year)
        {
            playlist[j + 1] = playlist[j];
            j = j - 1;
        }
        playlist[j + 1] = key;
    }
}
int main()
{
    int n = 5;
    Song playlist[5] =
        {
            Song("Song D", "Singer z", 3.00, 2000),
            Song("Song L", "Singer b", 1.25, 2024),
            Song("Song A", "Singer w", 2.50, 2020),
            Song("Song Q", "Singer t", 4.00, 2018),
            Song("Song R", "Singer l", 1.00, 2012)};
    cout << "Original Playlist:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Name: " << playlist[i].name << ", Singer: " << playlist[i].singer
             << ", Duration: " << playlist[i].duration << " mins, Release Year: "
             << playlist[i].release_year << endl;
    }
    int choice;
    do
    {
        cout << "\nSelect sorting criteria:\n";
        cout << "1. Name (ascending)\n";
        cout << "2. Singer (ascending)\n";
        cout << "3. Duration (descending)\n";
        cout << "4. Release Year (descending)\n";
        cout << "5. Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            sortByName(playlist, n);
            break;
        case 2:
            sortBySinger(playlist, n);
            break;
        case 3:
            sortByDuration(playlist, n);
            break;
        case 4:
            sortByReleaseYear(playlist, n);
            break;
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
            continue;
        }
        if (choice != 5)
        {
            cout << "\nSorted Playlist:" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << "Name: " << playlist[i].name << ", Singer: " << playlist[i].singer << ", Duration: " << playlist[i].duration << " mins, Release_Year: " << playlist[i].release_year << endl;
            }
        }
    } while (choice != 5);
    return 0;
}
