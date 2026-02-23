#include<iostream>
using namespace std;

class invertory{
    int size, capacity;
    int item[100];

    bool is_valid_index(int index){
        return index >= 0 && index < size;
    }

public:
    invertory(int c){
        capacity = c;
        size = 0;
    }

    void add_item(int item_id){
        if(size < capacity){
            item[size] = item_id;
            size++;
            cout<<"Item added successfully."<<endl;
        }
        else{
            cout<<"Inventory is full. Cannot add more items."<<endl;
        }
    }

    void remove_item(int index){
        if(is_valid_index(index)){
            for(int i = index; i < size - 1; i++){
                item[i] = item[i+1];
            }
            size--;
            cout<<"Item removed successfully."<<endl;
        }
        else{
            cout<<"Invalid index. Cannot remove item."<<endl;
        }
    }

    void display_items(){
        if(size == 0){
            cout<<"Inventory is empty."<<endl;
        }
        else{
            cout<<"Items in inventory: ";
            for(int i = 0; i < size; i++){
                cout<<item[i]<<" ";
            }
            cout<<endl;
        }
    }

    // 🔹 Find Maximum
    void find_max(){
        if(size == 0){
            cout<<"Inventory is empty."<<endl;
            return;
        }

        int max = item[0];
        for(int i = 1; i < size; i++){
            if(item[i] > max){
                max = item[i];
            }
        }

        cout<<"Maximum item ID: "<<max<<endl;
    }

    // 🔹 Find Minimum
    void find_min(){
        if(size == 0){
            cout<<"Inventory is empty."<<endl;
            return;
        }

        int min = item[0];
        for(int i = 1; i < size; i++){
            if(item[i] < min){
                min = item[i];
            }
        }

        cout<<"Minimum item ID: "<<min<<endl;
    }

    // 🔹 Sort Items (Ascending Order)
    void sort_items(){
        if(size == 0){
            cout<<"Inventory is empty."<<endl;
            return;
        }

        for(int i = 0; i < size - 1; i++){
            for(int j = 0; j < size - i - 1; j++){
                if(item[j] > item[j+1]){
                    int temp = item[j];
                    item[j] = item[j+1];
                    item[j+1] = temp;
                }
            }
        }

        cout<<"Items sorted successfully."<<endl;
    }
};

int main(){
    invertory inv(5);

    inv.add_item(101);
    inv.add_item(150);
    inv.add_item(103);
    inv.add_item(120);

    inv.display_items();

    inv.find_max();
    inv.find_min();

    inv.sort_items();
    inv.display_items();

    return 0;
}