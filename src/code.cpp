#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy


namespace assignment {

  // Task 1
  int squared_diff(int left, int right)
  {
    return ((left - right )*(left - right ));
  }

  // Task 2
  bool check_bit(int mask, int bit_pos)
  {
    if(mask<=0 || bit_pos<=0)
      {
        return false;
      }
    else {
      int mask2 = mask;
      int count = 0;
      int mass[100];
      while (mask2 > 0)
      {
        mass[count] = (mask2 % 2);
        mask2 /= 10;
        count++;
      }
      for (int j = 0; j < count; j++) {
        if (bit_pos == j) {
          if (mass[j] == 1) {
            return true;
          } else {
            return false;
          }
        }
      }
    }
  }

  // Task 3
  int max3(int left, int middle, int right) {
    int j=2;
    int mass[3]={left,middle,right};
    int max=0;
    for (int i=0;i<=j;i++)
    {
      if (max<=mass[i])
      {
        max=mass[i];
      }
      else
      {
        max=max;
      }
    }
    return max;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    if(left != nullptr and right != nullptr){
      int ptr = *left;
      *left = *right;
      *right = ptr;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
  if(arr != nullptr and length>0) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
      sum += arr[i];
    }
    return sum;
  }
  else
    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    if(arr== nullptr or length<=0)
    {
      return nullptr;
    }
    else
    {
      int max=0;
      int * id_max = nullptr;
      for(int i =0;i<length;i++)
      {
        if(max<arr[i])
            max=arr[i];
            id_max=&arr[i];

      }
      return id_max;
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value)
  {
    if(length > 0)
      {
      int arr[length];
      for (int i = 0; i < length; i++)
        {
          arr[i] = init_value;
        }
        return arr;
      }
    else
      return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    if (length <=0 or arr_in == nullptr)
      return nullptr;
    else
    {
      int clone_arr[length];
      for(int i =0; i<length;i++)
      {
        clone_arr[i] = arr_in[i];
      }
      return clone_arr;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr)
    {
      os<< "Invalid argument: arr\n";
    }
    else
    {
      if (length <= 0)
      {
        os << "Invalid argument: length\n";
      }
      else
      {

        if (k <= 0)
        {
          os << "Invalid argument: k\n";
        }
        else
        {
          for (int i=0;i<length;i+=k)
          {
            os << arr[i] << "\t";
          }
        }
      }
    }

  }


}