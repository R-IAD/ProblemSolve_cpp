#include <iostream>
#include <array>
#define SIZE 6
using namespace std;

void Print_cycles(array<int, SIZE> &arr)
{
    array<int, SIZE> temp{arr[0]};
    int station{}, counter{};
    bool flag{false}, flag2{true};

    for (int i : arr)
    {

        flag = true;

        if (counter != 0)
        {
            // cout<<"dd";
            for (auto j : temp)
            {
                if (j == station)
                    flag = false;
            }
        }
        if (flag)
        {
            cout << station << " -> " << arr[station] << '\n';
            temp[counter] = station;
            station = arr[station];
        }
        else
        {
            int j{};
            for (j; j < SIZE; j++)
            {
                if (flag2)
                {
                    flag2 = false;
                    for (int k = 0; k < SIZE; k++)
                    {
                        if (j == temp[k])
                        {
                            flag2 = true;
                            break;
                        }
                        else
                            continue;
                    }
                }
                else
                    break;
            }
            station = j - 1;
            temp[counter] = station;
            flag2 = true;

            cout << station << " -> " << arr[station] << '\n';
            station = arr[station];
        }

        counter++;
    }
}

int main()
{
    array<int, SIZE> arr{1, 2, 0, 5, 3, 4};
    Print_cycles(arr);
}