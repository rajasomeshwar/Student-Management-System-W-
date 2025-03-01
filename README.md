# Faculty & Student Management System

## 📌 Overview
The **Faculty & Student Management System** is a **C-based application** designed to manage student and faculty interactions. The system provides **secure login functionality**, faculty-student communication, quiz management, and result tracking. 

## 🔹 Features
✅ **Faculty & Student Authentication** – Secure login using unique credentials.  
✅ **Student Management** – Student creation, login, and access to relevant information.  
✅ **Faculty Management** – Faculty login, password management, and student communication.  
✅ **Quiz Management** – Faculty can create quizzes, students can attempt them, and results are stored.  
✅ **Notifications & Messaging** – Students and faculty can exchange important messages.  
✅ **File Storage & Data Handling** – Stores data in text files for persistent access.

---

## 🛠 Technologies Used
- **Programming Language:** C
- **File Handling:** Text file-based data storage
- **Compilation:** GCC (Recommended Compiler)

---

## 📂 Project Structure
```
📁 Faculty-Student-Management-System/
│-- 📜 main.c                     # Main entry point
│-- 📜 studentcreation.c           # Handles student account creation
│-- 📜 studentloginsen.c           # Manages student login
│-- 📜 studentsection.c            # Provides student functionalities
│-- 📜 studentpasswords.txt        # Stores student passwords
│-- 📜 facultyloginsectin.c        # Manages faculty login
│-- 📜 facultyfile.c               # Handles faculty-related data
│-- 📜 facultostudent.c            # Faculty-student communication
│-- 📜 quizquestion.txt            # Stores quiz questions
│-- 📜 resultquiz.txt              # Stores quiz results
│-- 📜 informtoteacherfromstdnt.txt # Messages from students to teachers
│-- 📜 noticationtostduent.txt     # Notifications sent to students
│-- 📜 loadingsymbol.c             # Loading effect for UI improvement
│-- 📜 main.exe                    # Executable file
```

---

## 🛠 Installation & Setup
### 🔹 Prerequisites
- **GCC Compiler** installed (for compilation)
- **Text Editor** (VS Code, Sublime Text, etc.)
- **Command Line Interface (CLI)**

### 🔹 Steps to Run
1️⃣ **Clone the repository**  
```bash
git clone https://github.com/rajasomeshwar/Faculty-Student-Management-System.git
cd Faculty-Student-Management-System
```

2️⃣ **Compile the program**  
```bash
gcc main.c -o main.exe
```

3️⃣ **Run the program**  
```bash
./main.exe
```

---

## 📌 System Workflow
1️⃣ **Faculty & Students login using credentials.**  
2️⃣ **Students can view assignments, quizzes, and messages.**  
3️⃣ **Faculty can manage students, create quizzes, and send notifications.**  
4️⃣ **Quiz results are stored and can be accessed later.**  

---



---

## 📜 License
This project is open-source and available for learning purposes.  

📌 **Star the repository if you found it useful!** 🚀
