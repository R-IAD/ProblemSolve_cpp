#include <iostream>
#include <array>
#define SIZE 200

using namespace std;

void print_rev_arr(array<int, SIZE> &arr)
{
  //  cout << "print_rev_arr\n";

    bool flag{true};
    for (auto i = 1; i <= SIZE; i++)
    {
        if (arr[SIZE - i] == 0 && flag)
            continue;
        cout << to_string(arr[SIZE - i]);
        flag = false;
    }
   // cout << '\n';
}

int calc_units(int num)
{
    int iterator{};

    while (((num / 10) != 0)||((num % 10) != 0))
    {

        iterator++;
        num /= 10;
    }
    return iterator;
}

void Shift_Mechanism(array<int, SIZE> &arr)
{
    int i{}, j{}, temp{},temp_units{};
    for (j = 0; j < arr.size(); j++)
    {
        i=0;
        temp = arr[j];
        arr[j] = 0;
        temp_units=calc_units(temp);
     //   cout << "Temp is " << temp << " arr[j] is " << arr[j] << " calc "<< calc_units(temp)<<'\n';
        for (i ; i < temp_units; i++)
        {
            arr[j + i] += temp % 10;
    //        cout<< "Temp " << temp ;
            temp /= 10;
      //      cout << " arr[j + i] is " << arr[j + i] <<" j i "<<j<<" "<<i<< '\n';
        }
    }
}

void Big_Fact(array<int, SIZE> &arr, int num)
{
   // cout << "Big\n";
    bool flag{false};
    int res{}, j{}, i{};
    for (j = 1; j <= num; j++)
    {
        for (i = 0; i < SIZE; i++)
        {
            arr[i] *= j;
            if (arr[i] > 9)
                flag = true;
        }

        if (flag)
        {
            Shift_Mechanism(arr);
            flag = false;
        }
    }
}

int main()
{
    array<int, SIZE> arr{1};
    Big_Fact(arr, 100);
    print_rev_arr(arr);
}
