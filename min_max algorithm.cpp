
#include <iostream>
#include <random>
#include <ctime>
#include <algorithm>
using namespace std;

    int main()

    {
        int max_size;
        int size;

       cout << "max array size: ";
       cin >> max_size;
       cout << "array size: ";
       cin >> size;

        if (max_size < 1 || size < 1 || max_size < size) {
           cout << "max array size and array size are positive numbers!!!!!!!!!! max array size is bigger than array size!!!!!!!!!!!  ";
        }
        else {
            int min, max;
            cout << "range of array element values: min    ";
            cin >> min;
            cout << "max   ";
            cin >> max;


            int* arr = new int[max_size];
            
                srand(time(NULL));
                cout << "input array: ";
                for (int i = 0; i < size; i++) {
                    arr[i] = rand() % (max - min) + min;
                    cout << " "<< arr[i]<< endl;
                }
                auto result = min_element(arr, arr + size);
                cout << "Min element" << *result<< endl;
                
                auto result1 = max_element(arr, arr + size);
                cout << "Max element" << *result1;

               
                delete[]arr;
            
        }


        return 0;
    }


