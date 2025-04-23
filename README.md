# ✅ C++ To-Do List Console Application

Welcome to my **To-Do List App**, a simple yet powerful console-based task manager written in **C++**.  
This project was built to help users organize their tasks through a friendly and interactive terminal interface — and to sharpen my C++ and OOP skills!

---

## 🧠 Why I Built This

As a student passionate about development, I wanted to create something practical using C++.  
This app was the perfect opportunity to apply the fundamentals of:

- Object-Oriented Programming (OOP)  
- Working with dynamic arrays using `std::vector`  
- Input validation and menu-based navigation  
- Code organization using header/source files  

I believe building real-world projects is the best way to learn!

---

## ✨ Features

Here's what the app can do:

- 📝 **Add** new tasks  
- 📋 **Display** all tasks with numbering  
- ✏️ **Edit** an existing task by index  
- ❌ **Delete** a task  
- ✅ **Mark** tasks as done  
- 🧹 **Clear** the full list  
- 🚪 **Exit** the app safely

Simple. Fast. Clean.

---

## 🗂️ Project Structure

- `main.cpp` – The main loop and user interface  
- `task.h` – Declaration of the `tasks` class and its methods  
- `task.cpp` – Implementation of all class methods (add, show, edit, etc.)

The app uses a single `tasks` object that manages all task operations.

---

## ⚙️ How to Run

You’ll need a C++ compiler like `g++`.

```bash
g++ main.cpp task.cpp -o todo
./todo