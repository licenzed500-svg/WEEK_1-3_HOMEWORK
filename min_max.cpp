//11

#include <iostream>

short found_max(short* arr)
{
    
    short max = arr[0];
    for (int i = 0; i < 3; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

short found_min(short* arr)
{
    short min = arr[0];
    for (int i = 0; i < 3; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void arr_out(short* arr)
{
    std::cout << "your arr is:\t";
    for (int i = 0; i < 3; i++)
    {
        std::cout << arr[i] << "\t";
    }
    std::cout << "\n\n";
}

void fill_arr(short* arr)
{
    std::cout << "fill arr:\n\n";
    for (int i = 0; i < 3; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << "\n\n";
}

void max_min_out(short max, short min)
{
    std::cout << "max is:" << max << "\n\n";
    std::cout << "min is:" << min << "\n\n";
}

void change_min_max(short* max, short* min)
{
    *max += 5;
    *min -= 1;
    std::cout << "\n" << "changed" << "\n\n";
}


void __program()
{
    short arr[3] = {};
    fill_arr(arr);
    arr_out(arr);
    short min = found_min(arr);
    short max = found_max(arr);
    short* pointer_of_min;
    pointer_of_min = &min;
    short* pointer_of_max;
    pointer_of_max = &max;
    max_min_out(max, min);
    change_min_max(pointer_of_max, pointer_of_min);
    max_min_out(max, min);

}

int main()
{
    __program();
}
