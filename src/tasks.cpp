#include <iostream>   // cout
#include <algorithm>  // copy, fill

#include "tasks.hpp"

// ИСПОЛЬЗОВАНИЕ ЛЮБЫХ ДРУГИХ БИБЛИОТЕК НЕ СОВЕТУЕТСЯ И МОЖЕТ ПОВЛИЯТЬ НА ВАШИ БАЛЛЫ

using std::cout;
using std::fill;
using std::copy;

// Задание 1
void swap_args(int *lhs, int *rhs) {
    // напишите код здесь ...
    if (lhs && rhs)
    {
        int a = *lhs;
        *lhs = *rhs;
        *rhs = a;
    }

}

// Задание 2
int **allocate_2d_array(int num_rows, int num_cols, int init_value) {
    // напишите код здесь ...
    if (num_rows < 1 || num_cols < 1)
    {
        return nullptr;
    } else
        {
        int **array_2d = new int *[num_rows];
        for (int i = 0; i < num_rows; ++i)
        {
            array_2d[i] = new int[num_cols];
            for (int j = 0; j < num_cols; ++j)
            {
                array_2d[i][j] = init_value;
            }
        }
        return array_2d;
    }
}

// Задание 3
bool copy_2d_array(int **arr_2d_source, int **arr_2d_target, int num_rows, int num_cols) {
    // напишите код здесь ...
    if (!arr_2d_source || !arr_2d_target || num_rows < 1 || num_cols < 1)
    {
        return false;
    }
    else
        {
        for(int i = 0; i < num_rows; ++i)
        {
            for(int j = 0; j < num_cols; ++j)
            {
                arr_2d_target[i][j] = arr_2d_source[i][j];
            }
        }
        return arr_2d_target;
    }
}

// Задание 4
void reverse_1d_array(vector<int> &arr) {
    // напишите код здесь ...
    for(int i = 0; i < (arr.size() / 2); i++)
    {
        int mem = arr[i];
        arr[i] = arr[arr.size() - i - 1];
        arr[arr.size() - i - 1] = mem;
    }
}

// Задание 5
void reverse_1d_array(int *arr_begin, int *arr_end) {
    // напишите код здесь ...
    if (arr_end && arr_begin)
    {
        int size = arr_end - arr_begin + 1;
        int *k = arr_end;
        for (int *j = arr_begin; j < (arr_begin + size / 2); ++j)
        {
            int mem = *j;
            *j = *k;
            *k = mem;
            k -= 1;
        }
    }
}

// Задание 6
int *find_max_element(int *arr, int size) {
    // напишите код здесь ...
    if ((arr == nullptr) || (size <= 0))
    {
        return nullptr;
    }
    else {
        int *max = arr;
        for(int i = 1; i < size; ++i)
        {
            if (*(arr + i) > *max)
            {
                *max = *(arr + i);
            }
        }
        return max;
    }
}

// Задание 7
vector<int> find_odd_numbers(vector<int> &arr) {
    // напишите код здесь ...
    vector<int> ansarr;
    int k = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 1 || arr[i] % 2 == -1)
        {
              ansarr.push_back(arr[i]);
        }
    }
    return ansarr;
}

// Задание 8
vector<int> find_common_elements(vector<int> &arr_a, vector<int> &arr_b) {
    // напишите код здесь ...
    vector<int> ansarr;
    for (int i = 0; i < arr_a.size(); i++)
    {
        for (int j = 0; j < arr_b.size(); j++)
        {
            if (arr_b[j] == arr_a[i])
            {
                ansarr.push_back(arr_b[j]);
            }
        }
    }
    return ansarr;
}
