
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

void DisplaySummary()
{
    cout << "The max height is: " << maxH << " and min height is: " << minH << endl;
    cout << "Also their total is: " << TotalHeight << " with an average of: " << Average << endl;
    cout << "No of recruits: " << Recruits << endl;
}
void ProcessCandidate()
{
    while (true)
    {
        getAverage(setMaxAndMinH(getH()));
        DisplaySummary();
    }
}

int main()
{
    ProcessCandidate();
}