# 📚 Library Management System in C

A simple system for library management, allowing you to add, list, and search for books by author.

## 🚀 How to Use

### Installation
```bash
git clone https://github.com/Pedr88/LibraryManager-C
cd LibraryManager-C
```

### Compilation and Execution
```bash
# Compile the code
gcc -o main main.c

# Run the program
./main.exe
```

## ⚙️ Features
- `Add Book`  
  Allows registering a book by providing its name, author, number of pages, and price.
- `Display Books`  
  Lists all registered books.
- `Search by Author`  
  Displays the books written by a specific author.
- `Count Books`  
  Shows the total number of books in the library.

## 📖 Example of Use

When starting the program, a menu will be displayed with the options:
```bash
1. Add Book
2. Display Books
3. Search by Author
4. Count Books
5. Exit
```

## 🛠 Code Structure
- **Structure `library`**: Defines the attributes of the book (name, author, pages, price).
- **Function `main`**: Contains the main loop and user interactions.
