#include <iostream>
using namespace std;

int main() {
    int n, tmp;
    int mn[3];        

    cin >> n;         

    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;

        if (i < 3) {

            mn[i] = value;
        } else {

            int mx_pos = 0;
            for (int j = 1; j < 3; ++j) {
                if (mn[mx_pos] < mn[j]) mx_pos = j;
            }
            if (value < mn[mx_pos]) {
                mn[mx_pos] = value;
            }
        }
    }
   
    int mx_pos = 0;
    for (int j = 1; j < 3; ++j) {
        if (mn[mx_pos] < mn[j]) mx_pos = j;
    }
    // swap max with last
    tmp = mn[2];
    mn[2] = mn[mx_pos];
    mn[mx_pos] = tmp;

    if (mn[0] > mn[1]) {
        tmp = mn[0];
        mn[0] = mn[1];
        mn[1] = tmp;
    }

    cout << mn[0] << " " << mn[1] << " " << mn[2] << "\n";

    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
//     int arr[1000];
//     bool logical = true;
//     int n;      // assume n > 0
//     cin >> n;

//     // Let's do it first with an array
//     for (int i = 0; i < n; i++)
//         cin >> arr[i];

//    for(int i=0;i<n;i++){
//     if(arr[i]!=arr[n-i]){
//         // cout<<arr[i]<<" and "<<arr[n-i];
//         logical= false;
//         break;
//     }
//    }
//    if(logical)
//        cout<<"yes";
//    else
//        cout<<"no";

//     return 0;
// }






//     int n, numbers[200];


//     int frequency[150 + 1] = {0}; //

//     cin >> n; // إدخال عدد الأرقام

//     // إدخال الأرقام وتحديث عدد مرات تكرار كل رقم
//     for (int i = 0; i < n; ++i) {
//         cin >> numbers[i];
//         frequency[numbers[i]]++; // زِد عدد مرات ظهور هذا الرقم
//     }

//     // نبحث عن الموضع الذي يحتوي على أكبر تكرار
//     int max_pos = -1;
//     for (int i = 0; i <= 150; ++i) {
//         if (max_pos == -1 || frequency[max_pos] < frequency[i])
//             max_pos = i;
//     }

//     cout << max_pos << " repeated " << frequency[max_pos] << " times";
//     return 0;
// }
