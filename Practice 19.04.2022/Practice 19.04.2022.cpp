#include <iostream>
#include <Windows.h>

using namespace std;

// пузырьковая сортировка

//void bubleSort(int a[], int s) {
//    int temp;
//    for (int i = 0; i < s; i++) {
//        for (int j = s - 1; j > i; j--) {
//            if (a[j - 1] > a[j]) {
//                temp = a[j - 1];
//                a[j - 1] = a[j];
//                a[j] = temp;
//            }
//        }
//    }
//}

// сортировка выбором

//void chosenSort(int a[], int s) {
//    int temp, a1;
//    for (int i = 0; i < s; i++) {
//        temp = i;
//        a1 = a[i];
//        for (int j = i + 1; j < s; j++) {
//            if (a[j] < a1) {
//                temp = j;
//                a1 = a[j];
//            }
//        }
//        if (temp != i) {
//            a[temp] = a[i];
//            a[i] = a1;
//        }
//    }
//}

// сортировка вставками

//void insertSort(int a[], int s) {
//    int temp, j;
//    for (int i = 0; i < s; i++) {
//        temp = a[i];
//        for (int j = i - 1; j >= 0 && a[j] > temp; j--) {
//            a[j + 1] = a[j];
//        }
//        a[j + 1] = temp;
//    }
//}

// быстрая сортировка

//void fastSort(int a[], int s) {
//    int i = 0, j = s;
//    int temp, p;
//    p = a[s / 2];
//    do {
//        while (a[i] < p) i++;
//        while (a[j] > p) j--;
//        if (i <= j) {
//            temp = a[i];
//            a[i] = a[j];
//            a[j] = temp;
//            i++;
//            j--;
//        }
//    } while (i <= j);
//    if (j > 0) fastSort(a, j);
//    if (s > i) fastSort(a+i,s-i);
//    
//}



// линейный поиск

int linearSearch(int a[], int s, int k) {
    for (int i = 0; i < s; i++) {
        if (a[i] == k) {
            return i;
        }
    }
    return -1;
}

// двойной поиск

int doubleSearch(int a[], int Lb, int Ub, int k) {
    int temp;
    while (1) {
        temp = (Lb + Ub) / 2;
        if (k < a[temp])
            Ub = temp - 1;
        else if (k > a[temp])
            Lb = temp + 1;
        else
            return temp;

        if (Lb > Ub) 
            return -1;
    }

}


template <class T> void f(T a[], T s) {
    T x;
}


/*
const int s = 9;
int arr[s] = { -48,5,14,-65,0,3,-66,-23,6 };
void reverse(int a[], int s) {
    int temp;
    for (int i = s, j = ::s - 1; i < j && j >= i; i++, j--) {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
}
void sort(int a[], int s) {
    int temp;
    for (int i = 0; i < s; i++) {
        for (int j = s - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                temp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = temp;
            }
        }
    }
    reverse(a, s);
}
void Sortmas(int a[], int s) {
    int middle = 0;
    for (int i = 0; i < s; i++) {
        middle += i;
    }
    (middle / s > 0) ? sort(a, s*2 /3) : sort(a, s/3);
}
*/


const int s = 10;
int arr[s] = { -48,5,14,-65,0,3,-66,-23,6,8 };


void sort1(int a[], int s) {
    int temp, j;
        for (int i = 0; i < s/2; i++) {
            temp = a[i];
            for (int j = i - 1; j >= 0 && a[j] > temp; j--) {
                a[j + 1] = a[j];
            }
           a[j + 1] = temp;
        }
        for (int i = s/2; i < s ; i++) {
            temp = a[i];
            for (int j = i - 1; j >= 0 && a[j] > temp; j--) {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;
        }
    }


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

   

    sort1(arr, s);
    for (int i = 0; i < s; i++) {
        cout << i << " ";
    }





}
