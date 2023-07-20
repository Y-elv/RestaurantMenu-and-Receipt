#include <iostream>
#include <string>
#include <map>

using namespace std;

// Define a map to store menu items and their prices
map<string, double> menu = {
    {"Burger", 8.50},
    {"Pizza", 10.00},
    {"Salad", 6.75},
    {"Pasta", 9.25},
    {"Skol", 2.00},
    {"Mutzig", 2.50},
    {"Amstel", 2.25},
    {"Fanta", 1.75}
};

void displayMenuEnglish() {
    cout << "Menu in English:" << endl;
    
    cout << "Food Menu:" << endl;
    cout << "1. Burger - $8.50" << endl;
    cout << "2. Pizza - $10.00" << endl;
    cout << "3. Salad - $6.75" << endl;
    cout << "4. Pasta - $9.25" << endl;
    
    cout << "Drink Menu:" << endl;
    cout << "5. Skol - $2.00" << endl;
    cout << "6. Mutzig - $2.50" << endl;
    cout << "7. Amstel - $2.25" << endl;
    cout << "8. Fanta - $1.75" << endl;
}

void displayMenuKinyarwanda() {
    cout << "Menu mu Kinyarwanda:" << endl;
    
    cout << "Ibyakurya:" << endl;
    cout << "1. Burger - $8.50" << endl;
    cout << "2. Pizza - $10.00" << endl;
    cout << "3. Salade - $6.75" << endl;
    cout << "4. Pasta - $9.25" << endl;
    
    cout << "Ibyyinira:" << endl;
    cout << "5. Skol - $2.00" << endl;
    cout << "6. Mutzig - $2.50" << endl;
    cout << "7. Amstel - $2.25" << endl;
    cout << "8. Fanta - $1.75" << endl;
}

int main() {
    int choice;
    int quantity;
    double totalCost = 0.0;
    
    cout << "Choose a language / Ihitiremo ururimi:" << endl;
    cout << "1. English" << endl;
    cout << "2. Kinyarwanda" << endl;
    cin >> choice;
    
    if (choice == 1) {
        displayMenuEnglish();
    } else if (choice == 2) {
        displayMenuKinyarwanda();
    } else {
        cout << "Invalid choice / Hitamo ibyo ntibyo" << endl;
        return 1;
    }
    
    // Ask the user to select items and quantity until they input 0
    while (true) {
        cout << "Enter the item number (0 to finish): ";
        cin >> choice;
        
        if (choice == 0) {
            break;
        } else if (choice >= 1 && choice <= 8) {
            cout << "Enter the quantity: ";
            cin >> quantity;
            
            if (quantity < 0) {
                cout << "Invalid quantity. Please enter a positive number." << endl;
                continue;
            }
            
            string itemName;
            switch (choice) {
                case 1:
                    itemName = "Burger";
                    break;
                case 2:
                    itemName = "Pizza";
                    break;
                case 3:
                    itemName = "Salad";
                    break;
                case 4:
                    itemName = "Pasta";
                    break;
                case 5:
                    itemName = "Skol";
                    break;
                case 6:
                    itemName = "Mutzig";
                    break;
                case 7:
                    itemName = "Amstel";
                    break;
                case 8:
                    itemName = "Fanta";
                    break;
            }
            
            double itemPrice = menu[itemName];
            double subtotal = itemPrice * quantity;
            
            cout << "Added " << quantity << " " << itemName << " to your order. Subtotal: $" << subtotal << endl;
            
            totalCost += subtotal;
        } else {
            cout << "Invalid item number. Please select a valid item." << endl;
        }
    }
    
    cout << "---------------------" << endl;
    cout << "Total Cost: $" << totalCost << endl;
    cout << "Thank you for ordering with us!" << endl;
    
    return 0;
}