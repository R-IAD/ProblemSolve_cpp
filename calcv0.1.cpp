#include <iostream>

using namespace std;
void Display();

int main()
{
    double dNum1 = 0;
    double dNum2 = 0;

    double dResult = 0;
    int iChoice = 0;

    cout << "\t\t\t********* Welcome to calcv0.1 *********\n\n\n";
CalculatorStartingPoint:
    cout << "Please enter 2 numbers: \n";
    cin >> dNum1 >> dNum2;

    if (cin.fail())
    {

        cout << "You should enter correct values\n\n";
        cin.clear();
        cin.ignore(10000, '\n');
        goto CalculatorStartingPoint;
    }

MenuStartPoint:
    Display();
    cout << "enter the choice: \n";
    cin >> iChoice;

    if (cin.fail())
    {
        cout << "You should enter correct values\n\n";
        cin.clear();
        cin.ignore(10000, '\n');
        goto MenuStartPoint;
    }

    switch (iChoice)
    {
    case 1:
        dResult = dNum1 + dNum2;
        break;
    case 2:
        dResult = dNum1 - dNum2;
        break;
    case 3:
        dResult = dNum1 * dNum2;
        break;
    case 4:
        if (dNum2 == 0)
        {
            cout << "\t\t We can't divid by zero. Try other two digits\n\n";
            goto CalculatorStartingPoint;
        }
        else
            dResult = dNum1 / dNum2;
        break;

    case 5:
        goto CalculatorStartingPoint;
        break;
    default:
        cout << "\t Manup and Enter real values\n";
        goto MenuStartPoint;
    }
    cout << "\t ******** " << dResult << " ********" << endl;
}

void Display()
{
    cout << "\n Menu Options:\n";
    cout << "\t Press 1 to + the numbers\n";
    cout << "\t Press 2 to - the numbers\n";
    cout << "\t Press 3 to * the numbers\n";
    cout << "\t Press 4 to // the numbers\n";
    cout << "\t Press 5 to enter the numbers again\n";
}