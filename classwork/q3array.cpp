#include<iostream>
using namespace std;
class invertory{
    int size,capacity;
    int item[100];
    bool is_valid_index(int index){
        return index >= 0 && index < size;
    }
public:
    invertory(int c){
        capacity=c;
        size=0;
    }
    void add_item(int item_id){
        if(size<capacity){
            item[size]=item_id;
            size++;
            cout<<"Item added successfully."<<endl;
        }
        else{
            cout<<"Inventory is full. Cannot add more items."<<endl;
        }
    }   
    void remove_item(int index){
        if(is_valid_index(index)){
            for(int i=index;i<size-1;i++){
                item[i]=item[i+1];
            }
            size--;
            cout<<"Item removed successfully."<<endl;
        }
        else{
            cout<<"Invalid index. Cannot remove item."<<endl;
        }
    }
    void display_items(){
        if(size==0){
            cout<<"Inventory is empty."<<endl;
        }
        else{
            cout<<"Items in inventory: ";
            for(int i=0;i<size;i++){
                cout<<item[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    invertory inv(5);
    inv.add_item(101);
    inv.add_item(102);
    inv.add_item(103);
    inv.display_items();
    inv.remove_item(1);
    inv.display_items();
    inv.remove_item(5); // Invalid index
    return 0;
}