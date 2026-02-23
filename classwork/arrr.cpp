// #include <iostream>
// using namespace std;

// int main() {
//     int arr[100], size, choice, value, position;

//     cout << "Enter number of elements (max 100): ";
//     cin >> size;

//     if(size > 100 || size < 0) {
//         cout << "Invalid size!\n";
//         return 0;
//     }

//     cout << "Enter elements:\n";
//     for(int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     do {
//         cout << "\n------ ARRAY MENU ------\n";
//         cout << "1. Display Array\n";
//         cout << "2. Insert Element\n";
//         cout << "3. Delete Element\n";
//         cout << "4. Search Element\n";
//         cout << "5. Reverse Array\n";
//         cout << "6. Sort Ascending\n";
//         cout << "7. Sort Descending\n";
//         cout << "8. Find Min & Max\n";
//         cout << "9. Exit\n";
//         cout << "Enter your choice: ";
//         cin >> choice;

//         switch(choice) {

//         case 1: // Display
//             cout << "Array elements: ";
//             for(int i = 0; i < size; i++) {
//                 cout << arr[i] << " ";
//             }
//             cout << endl;
//             break;

//         case 2: // Insert
//             if(size >= 100) {
//                 cout << "Array is full. Cannot insert.\n";
//                 break;
//             }

//             cout << "Enter position (0 to " << size << "): ";
//             cin >> position;
//             cout << "Enter value: ";
//             cin >> value;

//             if(position >= 0 && position <= size) {
//                 for(int i = size; i > position; i--) {
//                     arr[i] = arr[i - 1];
//                 }
//                 arr[position] = value;
//                 size++;
//                 cout << "Element inserted successfully.\n";
//             } else {
//                 cout << "Invalid position.\n";
//             }
//             break;

//         case 3: // Delete
//             if(size == 0) {
//                 cout << "Array is empty.\n";
//                 break;
//             }

//             cout << "Enter position (0 to " << size - 1 << "): ";
//             cin >> position;

//             if(position >= 0 && position < size) {
//                 for(int i = position; i < size - 1; i++) {
//                     arr[i] = arr[i + 1];
//                 }
//                 size--;
//                 cout << "Element deleted successfully.\n";
//             } else {
//                 cout << "Invalid position.\n";
//             }
//             break;

//         case 4: // Search
//             cout << "Enter value to search: ";
//             cin >> value;

//             bool found = false;
//             for(int i = 0; i < size; i++) {
//                 if(arr[i] == value) {
//                     cout << "Element found at index " << i << endl;
//                     found = true;
//                     break;
//                 }
//             }

//             if(!found)
//                 cout << "Element not found.\n";

//             break;

//         case 5: // Reverse
//             for(int i = 0; i < size / 2; i++) {
//                 int temp = arr[i];
//                 arr[i] = arr[size - i - 1];
//                 arr[size - i - 1] = temp;
//             }
//             cout << "Array reversed successfully.\n";
//             break;

//         case 6: // Sort Ascending (Bubble Sort)
//             for(int i = 0; i < size - 1; i++) {
//                 for(int j = 0; j < size - i - 1; j++) {
//                     if(arr[j] > arr[j + 1]) {
//                         int temp = arr[j];
//                         arr[j] = arr[j + 1];
//                         arr[j + 1] = temp;
//                     }
//                 }
//             }
//             cout << "Array sorted in ascending order.\n";
//             break;

//         case 7: // Sort Descending
//             for(int i = 0; i < size - 1; i++) {
//                 for(int j = 0; j < size - i - 1; j++) {
//                     if(arr[j] < arr[j + 1]) {
//                         int temp = arr[j];
//                         arr[j] = arr[j + 1];
//                         arr[j + 1] = temp;
//                     }
//                 }
//             }
//             cout << "Array sorted in descending order.\n";
//             break;

//         case 8: // Min & Max
//             if(size == 0) {
//                 cout << "Array is empty.\n";
//                 break;
//             }

//             int min = arr[0], max = arr[0];

//             for(int i = 1; i < size; i++) {
//                 if(arr[i] < min)
//                     min = arr[i];
//                 if(arr[i] > max)
//                     max = arr[i];
//             }

//             cout << "Minimum element: " << min << endl;
//             cout << "Maximum element: " << max << endl;
//             break;

//         case 9:
//             cout << "Exiting program...\n";
//             break;

//         default:
//             cout << "Invalid choice.\n";
//         }

//     } while(choice != 9);

//     return 0;
// }