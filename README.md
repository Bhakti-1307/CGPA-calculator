# 🎓 CGPA Calculator – Menu Driven C++ Project

## 📌 Project Overview

The **CGPA Calculator** is a menu-driven C++ program designed to calculate a student’s **percentage, CGPA, and grade** based on marks entered for multiple subjects.
The program includes **input validation, grade calculation, dynamic total marks**, and **file storage**, making it a well-structured academic mini project.
This project is ideal for understanding **modular programming, file handling, vectors, and menu-based logic in C++**.

---

## ✨ Features

* Menu-driven interface
* Accepts student name and number of subjects dynamically
* Validates user input (marks between 0–100)
* Automatically calculates:
  * Total marks
  * Percentage
  * CGPA
  * Grade
* Stores student results in a file (`results.txt`)
* Clean, modular, and easy-to-read code

---

## 🛠️ Technologies Used

* **Programming Language:** C++
* **Standard Libraries:**

  * `<iostream>`
  * `<fstream>`
  * `<vector>`
  * `<string>`
  * `<iomanip>`

---

## 📐 Calculation Logic

### 🔹 Percentage

```
percentage = (totalMarks / totalMaximumMarks) × 100
```

### 🔹 CGPA

```
CGPA = percentage / 9.5
```

### 🔹 Grade Criteria

| Percentage Range | Grade |
| ---------------- | ----- |
| ≥ 90             | O     |
| ≥ 80             | A+    |
| ≥ 70             | A     |
| ≥ 60             | B+    |
| ≥ 50             | B     |
| ≥ 40             | C     |
| < 40             | F     |

---

## ▶️ How to Compile and Run

1. Open terminal/command prompt
2. Compile the program:

   ```bash
   g++ cgpa.cpp -o cgpa
   ```
3. Run the executable:

   ```bash
   ./cgpa
   ```

---

## 📋 Menu Options

```
1. Calculate CGPA
2. Exit
```

---

## 🧪 Sample Input

```
Enter student name: Bhakti
Enter number of subjects: 5
Enter marks for subject 1: 85
Enter marks for subject 2: 78
Enter marks for subject 3: 82
Enter marks for subject 4: 90
Enter marks for subject 5: 88
```

---

## 📤 Sample Output

```
----- RESULT -----
Name      : Bhakti
Percentage: 84.60%
CGPA      : 8.90
Grade     : A
Result saved to file successfully!
```

---

## 📁 File Output (`results.txt`)

```
Name: Bhakti | Percentage: 84.60% | CGPA: 8.90 | Grade: A
```

---

## 🎯 Learning Outcomes

* Menu-driven programming
* Input validation techniques
* File handling in C++
* Modular code design
* Real-world academic calculation logic

---

## 👨‍💻 Author

**Bhakti**

Learnt C/C++, exploring Python and learning DSA.

---
