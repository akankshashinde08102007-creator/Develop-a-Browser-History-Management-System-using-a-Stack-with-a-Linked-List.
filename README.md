Develop Browser History Management System Using Stack with Linked List

Problem Statement

To develop a Browser History Management System using a stack implemented with a linked list in C++.

The system should allow the user to:

1. Visit a new web page.
2. Go back to the previous page.
3. Display browser history.
4. Exit the program.

The stack is used to manage visited web pages dynamically.

---

Algorithm

Step 1: Start

Initialize the top pointer of the stack to "NULL".

Step 2: Display Menu

Display the following options:

- Visit New Page
- Go Back
- Display Browser History
- Exit

Step 3: Visit New Page

1. Create a new node dynamically.
2. Read the web page URL.
3. Store the URL in the new node.
4. Connect the new node to the existing stack.
5. Update the top pointer.

Step 4: Go Back

1. Check whether the stack is empty.
2. Remove the top node if available.
3. Update the top pointer.
4. Display the previous page.

Step 5: Display Browser History

1. Start from the top node.
2. Display each web page URL.
3. Continue until the pointer becomes "NULL".

Step 6: Exit

Terminate the program when the user selects Exit.

---

Explanation

A stack is a linear data structure that follows the Last In, First Out (LIFO) principle.

Each node contains two parts:

- URL: Stores the web page address.
- Next: Stores the address of the next node.

The "top" pointer points to the top node of the stack. New pages are added using the push operation, and the current page is removed using the pop operation.

---

Data Structure Used

Stack using Singly Linked List

Node Structure

struct Node {
    string url;
    Node* next;
};

---

Sample Input

1
www.google.com
1
www.youtube.com
3
2
4

---

Sample Output

===== Browser History Management System =====

1. Visit New Page
2. Go Back
3. Display Browser History
4. Exit

Enter your choice: 1
Enter URL: www.google.com
Page visited successfully!

Enter your choice: 1
Enter URL: www.youtube.com
Page visited successfully!

Enter your choice: 3

--- Browser History ---
www.youtube.com
www.google.com

Enter your choice: 2
Going back from: www.youtube.com
Previous page: www.google.com

Enter your choice: 4
Thank you!

---

Time Complexity

- Visit New Page: O(1)
- Go Back: O(1)
- Display Browser History: O(n)

Here, "n" is the number of web pages stored in the stack.

---

Conclusion

The Browser History Management System was successfully developed using a stack with a linked list in C++. It allows users to visit pages, go back, and display browser history.