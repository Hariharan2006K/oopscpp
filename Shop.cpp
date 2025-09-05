#include <iostream>
#include <vector>
using namespace std;

class Item {
    int code;
    float price;
public:
    Item(int c, float p) : code(c), price(p) {}
    int getCode() const { return code; }
    float getPrice() const { return price; }
    void display() const {
        cout << "Code: " << code << ", Price: " << price << endl;
    }
};

class ShoppingList {
    vector<Item> items;
public:
    void addItem(int code, float price) {
        items.push_back(Item(code, price));
        cout << "Item added.\n";
    }

    void deleteItem(int code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getCode() == code) {
                items.erase(it);
                cout << "Item deleted.\n";
                return;                     
            }
        }
        cout << "Item not found.\n";
    }

    void printList() const {
        cout << "Shopping List:\n";
        for (const auto& item : items) {
            item.display();
        }
    }

    void printTotal() const {
        float total = 0;
        for (const auto& item : items) {
            total += item.getPrice();
        }
        cout << "Total Order Value: " << total << endl;
    }
};

int main() {
    ShoppingList list;
    int choice, code;
    float price;

    do {
        cout << "\n1. Add Item\n2. Delete Item\n3. Print List\n4. Print Total\n5. Exit\nEnter choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter code and price: ";
                cin >> code >> price;
                list.addItem(code, price);
                break;
            case 2:
                cout << "Enter code to delete: ";
                cin >> code;
                list.deleteItem(code);
                break;
            case 3:
                list.printList();
                break;
            case 4:
                list.printTotal();
                break;
            case 5:
            cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}