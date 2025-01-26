#include<iostream>
#include <vector>
using namespace std;
  
  struct S {
    string d;
    bool done;
  };

  vector < S > s;



  void add() {
    S newS ;
    cout << "Enter the task to add : ";
    cin.ignore();
    getline(cin,newS.d);
    newS.done = false;
    s.push_back(newS);
  }

 

  void display() {
    for (int i = 0; i < s.size();i++) {
        cout << i+1 << "."<<s[i].d << " [" << (s[i].done ? " done ": "Pending")<< "]\n";
    }
  }

  void markCompleted() {
    int i;
    display();
    cout << "Enter task number to mark completed : ";
    cin >> i;
    if (i > 0 &&i <= s.size()) s[i-1].done = true;
  }

  void remove() {
    int i ;
    display();
    cout << " Enter task number to remove : ";
    cin >> i;
    if(i > 0 && i <= s.size())s.erase(s.begin() + i -1);
  }


int main()
{
    int choice ;
    while (true) {
        cout<< "************To Do List**************** "<< endl;
        cout <<"1. Add task"<< endl;
        cout <<"2. View task"<< endl;
        cout <<"3. Mark task as completed "<< endl;
        cout <<"4. Remove task"<< endl;
        cout <<"5. Exit "<< endl;
        cout << "Please enter a number :";
        cin >> choice;

        if (choice == 1) {
            add();
        }

        else if(choice == 2) {
            display();
        }

        else if(choice == 3) {
           markCompleted();
        }

        else if(choice == 4) {
           remove();
        }

        else {
            break;
        }
       
    }
    return 0;
}