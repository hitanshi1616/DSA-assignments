#include <iostream>
using namespace std;
char arr[100];
int n;
void create() {
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter elements:";
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
}
void display() {
    for (int i=0;i<n;i++) {
        cout<<arr[i];
    }
    cout<<endl;
}
void insert() {
    int pos;
    char value;
    cout<<"Enter position: ";
    cin>>pos;
    cout<<"Enter value: ";
    cin>>value;
    for (int i=n;i>=pos;i--) {
        arr[i]=arr[i-1];
    }
    n++;
    arr[pos-1]=value;
}
void delete_element(){
    int pos;
    cout<<"Enter position: ";
    cin>>pos;
    for (int i=pos-1;i<n;i++) {
        arr[i]=arr[i+1];
    }
    n--;
}
void linear_search() {
    char value;
    cout<<"Enter value: ";
    cin>>value;
    bool found =false;
    for (int i=0;i<n;i++) {
        if (arr[i]==value) {
            cout<<"Element found at position "<<i+1<<endl;
            found=true;
        }
    }
    if (!found) {
        cout<<"Element Not Found"<<endl;
    }
}
int main() {

    int choice;
    do {
        cout<<"__MENU__"<<endl;
        cout<<"1. Create"<<endl;
        cout<<"2. Display"<<endl;
        cout<<"3. Insert"<<endl;
        cout<<"4. Delete"<<endl;
        cout<<"5. Linear Search"<<endl;
        cout<<"6. Exit"<<endl;
        cin>>choice;
        switch (choice) {
            case 1: {
                create();
                break;
            }
            case 2: {
                display();
                break;
            }
            case 3: {
                insert();
                break;
            }
            case 4: {
                delete_element();
                break;
            }
            case 5: {
                linear_search();
                break;
            }
            case 6: {
                cout<<"Exiting program";
                break;
            }
                default: {
                cout<<"Enter from 1 to 6"<<endl;
            }
        }
    }
    while (choice!=6);
}
