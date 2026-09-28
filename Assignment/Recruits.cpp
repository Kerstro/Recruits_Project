
#include <iostream>
#include <utility>
using namespace std;

double height;
int Recruits = 0;
double TotalHeight = 0;
double maxH = height;
double minH = height;
double Average;

double getH()
{
    double height;
    cout << "Enter the person's Height: ";
    cin >> height;

    return height;
}

pair<int, double> setMaxAndMinH(double height)
{
    if (Recruits < 1)
    {
        maxH = height;
        minH = height;
    }

    else if (height > maxH)
    {
        maxH = height;
    }

    else if (height < minH)
    {
        minH = height;
    }

    Recruits += 1;
    TotalHeight += height;

    return {Recruits, TotalHeight};
}
double getAverage(pair<int, double> Recruits_TotalHeight)
{
    Recruits_TotalHeight.first;
    Recruits_TotalHeight.second;
    Average = TotalHeight / Recruits;
    return Average;
}

void ProcessCandidate()
{
    while (true)
    {
        getAverage(setMaxAndMinH(getH()));
        cout << "The max height is: " << maxH << " and min height is: " << minH << endl;
        cout << "Also their total is: " << TotalHeight << " with an average of: " << Average << endl;
        cout << "No of recruits: " << Recruits << endl;
    }
}
int main()
{

    // for (int count = 0; count < 3; count++)
    // {
    //     double maxH = height;
    //     double minH = height;
    //     cout << "Enter the person's Height: ";
    //     cin >> height;

    //     if (count < 1)
    //     {
    //         maxH = height;
    //         minH = height;
    //     }

    //     if (height > maxH)
    //     {
    //         maxH = height;
    //     }

    //     else if (height < minH)
    //     {
    //         minH = height;
    //     }

    //     cout << "The max height is: " << maxH << " and min height is: " << minH << endl;
    // }
    // ========================================//

    // double height;
    // int Recruits = 0;
    // double TotalHeight = 0;
    // double maxH = height;
    // double minH = height;

    // while (true)
    // {

    //     cout << "Enter the person's Height: ";
    //     cin >> height;

    //     if (Recruits < 1)
    //     {
    //         maxH = height;
    //         minH = height;
    //     }

    //     else if (height > maxH)
    //     {
    //         maxH = height;
    //     }

    //     else if (height < minH)
    //     {
    //         minH = height;
    //     }

    //     Recruits += 1;
    //     TotalHeight += height;

    //     double Average = TotalHeight / Recruits;

    //     cout << "The max height is: " << maxH << " and min height is: " << minH << endl;
    //     cout << "Also their total is: " << TotalHeight << " with an average of: " << Average << endl;
    //     cout << "No of recruits: " << Recruits << endl;
    // }

    // return 0;

    // ========================================//

    ProcessCandidate();
}