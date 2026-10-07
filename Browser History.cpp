#include <iostream>
using namespace std;

struct Node
{
    string page;
    Node* next;
};

Node* top = NULL;

// Visit a new page
void visitPage(string page)
{
    Node* newNode = new Node;
    newNode->page = page;
    newNode->next = top;
    top = newNode;

    cout << "Visited: " << page << endl;
}

// Go back
void goBack()
{
    if (top == NULL)
    {
        cout << "No history available!" << endl;
        return;
    }

    cout << "Back from: " << top->page << endl;

    Node* temp = top;
    top = top->next;
    delete temp;
}

// Display history
void displayHistory()
{
    if (top == NULL)
    {
        cout << "History is empty!" << endl;
        return;
    }

    Node* temp = top;

    cout << "Browser History: ";

    while (temp != NULL)
    {
        cout << temp->page << " ";
        temp = temp->next;
    }

    cout << endl;
}

int main()
{
    visitPage("Google");
    visitPage("YouTube");
    visitPage("GitHub");

    displayHistory();

    goBack();

    displayHistory();

    return 0;
}
