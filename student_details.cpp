#include <iostream>
#include <string>

using namespace std;

// Structure to store student details
struct Student {
    int rollNo;
    string name;
    string branch;
    float marks;
    string address;
    Student* next;
};

// Function to create a new student node
Student* createStudent(int rollNo, string name, string branch, float marks, string address) {
    Student* newStudent = new Student;
    newStudent->rollNo = rollNo;
    newStudent->name = name;
    newStudent->branch = branch;
    newStudent->marks = marks;
    newStudent->address = address;
    newStudent->next = nullptr;
    return newStudent;
}

// Function to insert student at the end of the linked list
void insertStudent(Student*& head, Student* newStudent) {
    if (head == nullptr) {
        head = newStudent;
    } else {
        Student* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newStudent;
    }
}

// Function to display all students
void displayStudents(Student* head) {
    Student* temp = head;
    while (temp != nullptr) {
        cout << "Roll No: " << temp->rollNo << endl;
        cout << "Name: " << temp->name << endl;
        cout << "Branch: " << temp->branch << endl;
        cout << "Marks: " << temp->marks << endl;
        cout << "Address: " << temp->address << endl;
        cout << "--------------------------" << endl;
        temp = temp->next;
    }
}

int main() {
    Student* head = nullptr;

    // Adding 5 students manually
    insertStudent(head, createStudent(101, "Alice", "CSE", 89.5, "New York"));
    insertStudent(head, createStudent(102, "Bob", "ECE", 76.0, "Los Angeles"));
    insertStudent(head, createStudent(103, "Charlie", "ME", 82.3, "Chicago"));
    insertStudent(head, createStudent(104, "David", "CSE", 91.2, "Houston"));
    insertStudent(head, createStudent(105, "Eva", "IT", 85.0, "Phoenix"));

    // Displaying the students
    displayStudents(head);

    // Free the memory
    Student* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
