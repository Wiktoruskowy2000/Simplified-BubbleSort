#include <iostream>

using namespace std;

int main()
{
    srand((unsigned)time(0));       //define random range 
    int tab[20];                    //define array (tab) with 20 index
        
    for (int i = 0; i < 20; i++) {  //define every index from tab 
        tab[i] = 5 + rand() % 150;
    }
    for (int i = 0; i < 20; i++) {  //write numbers from every tab index 
        cout << " " << tab[i];
    }
    cout << endl;


    int max = 20;                   //array size
    int tempNum;                    //temporary variable with number
    int right;                      //number from right side
    int left;                       //number from left side
    right = max - 1;                //right index is 19


    while (right != 0) {            //while right (19, 18, ..., 0)
        left = 0;                       
        while (left != right) {                //while left (1, 2, ... , -> n <- ... 18, 19) right
            if (tab[left] > tab[right]) {           //exchange left number with right number if left number will be like right number

                tempNum = tab[left];            
                tab[left] = tab[right];
                tab[right] = tempNum;

            }
            else
            {
                left++;                         //left -->;
            }
        }
        right--;                                // <-- right
    }




    for (int i = 0; i < 20; i++) {      //write sorted array
        cout << " " << tab[i];
    }
}

