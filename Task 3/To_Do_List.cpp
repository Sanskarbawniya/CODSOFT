#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> tasks;

void showMenu() {
    cout << "\n--- To-Do List Manager ---\n";
    cout << "1. Add Task\n";
    cout << "2. View Tasks\n";
    cout << "3. Delete Task\n";
    cout << "4. Exit\n";
    cout << "Choose an option: ";
}

void addTask() {
    string task;
    cout << "Enter your task: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added.\n";
}

void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks to show.\n";
        return;
    }
    cout << "\nYour Tasks:\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". " << tasks[i] << "\n";
    }
}

void deleteTask() {
    if (tasks.empty()) {
        cout << "No tasks to delete.\n";
        return;
    }
    viewTasks();
    int index;
    cout << "Enter the task number to delete: ";
    cin >> index;
    if (index < 1 || index > tasks.size()) {
        cout << "Invalid task number.\n";
    } else {
        tasks.erase(tasks.begin() + index - 1);
        cout << "Task deleted.\n";
    }
}

int main() {
    int choice;
    do {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1: addTask(); break;
            case 2: viewTasks(); break;
            case 3: deleteTask(); break;
            case 4: cout << "Exiting... Goodbye!\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
