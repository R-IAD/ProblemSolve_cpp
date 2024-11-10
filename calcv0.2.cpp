#include <iostream>

using namespace std;
void Display();
void getChoice(int &iChoice);

template <class type>
void readTwoNum(type &dNum1, type &dNum2)
{
    while (1)
    {
        cout << "Please enter 2 numbers: \n";
        cin >> dNum1 >> dNum2;
        if (cin.fail())
        {

            cout << "You should enter correct values\n\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else
            break;
    }
}

int main()
{
    double dNum1 = 0;
    double dNum2 = 0;
    bool restart = false;
    double dResult = 0;
    int iChoice = 0;

    while (true)
    {
        restart = false;
        std::cout << "\t\t\t********* Welcome to calcv0.1 *********\n\n\n";
        readTwoNum(dNum1, dNum2);
        Display();

        getChoice(iChoice);

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
                restart = true;
                break;
            }
            else
                dResult = dNum1 / dNum2;
            break;

        case 5:
            restart = true;
            break;
        default:
            cout << "\t Manup and Enter real values\n";
            restart = true;
        }
        if (!restart)
        {
            cout << "\t ******** " << dResult << " ********" << endl;
            break;
        }

        else
            continue;
    }
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

void getChoice(int &iChoice)
{
    while (1)
    {
        cout << "enter the choice: \n";
        cin >> iChoice;

        if (cin.fail())
        {
            cout << "You should enter correct values\n\n";
            cin.clear();
            cin.ignore(10000, '\n');
        }
        else
            break;
    }
}