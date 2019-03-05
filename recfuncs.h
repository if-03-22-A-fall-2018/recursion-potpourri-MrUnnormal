#ifndef ___RECURSIVE_POTPOURRI
#define ___RECURSIVE_POTPOURRI

struct CalculationResults {
  int no_of_nums;
  int* sums;
  int* binary_sums;
  int* num_factorials;
  int no_of_sums;
};

int calc_array_size(int n);
int convert_to_binary(int n);
int* create_array(int size);
int calc_factorial(int n);
void calc_sums(int* nums, int size, int* out_arr, int* out_arr_bin);
int do_subset(int* nums, int size, int i, int index, int* out_arr, int* out_arr_bin, int sum);
CalculationResults perform_calculations(int* nums, int n);

#endif
