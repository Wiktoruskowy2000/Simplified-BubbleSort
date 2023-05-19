#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(0));
    int tab[20];

    for (int i = 0; i < 20; i++) {
        tab[i] = 5 + rand() % 150;
    }
    for (int i = 0; i < 20; i++) {
        cout << " " << tab[i];
    }
    cout << endl;


    int max = 20;
    int tempNum;
    int right;
    int left;
    right = max - 1;


    while (right != 0) {
        left = 0;
        while (left != right) {
            if (tab[left] > tab[right]) {

                tempNum = tab[left];
                tab[left] = tab[right];
                tab[right] = tempNum;

            }
            else
            {
                left++;
            }
        }
        right--;
    }




    for (int i = 0; i < 20; i++) {
        cout << " " << tab[i];
    }
}

