# IDPs Setup Guide

## Step 1: Environment Setup

### 1. Install Required Tools

#### MySQL Database:
- Download MySQL Server: [MySQL Downloads](https://dev.mysql.com/downloads/)
- Install MySQL Server and note the root login credentials (username and password).
- Verify MySQL installation by running the following command:
  ```sh
  mysql -u root -p
  ```

#### Development Environment:
- Install Visual Studio (Community Edition).
- During installation, ensure the following components are selected:
  - C++ Development
  - C++/CLI (.NET Framework support)

#### MySQL C++ Driver:
- Download MySQL Connector/C++: [Connector Download](https://dev.mysql.com/downloads/connector/cpp/)
- Extract the files and configure library paths in Visual Studio.

---

## Step 2: Database Setup

### 1. Import the Database Schema
- Open a terminal and run:
  ```sh
  mysql -u root -p < schema.sql
  ```
- Verify the database structure with the following commands:
  ```sql
  SHOW DATABASES;
  USE kursova_schema;
  SHOW TABLES;
  ```

---

## Step 3: Project Configuration

### 1. Database Connection Setup
- Locate the MySQL connection settings in your code:
  ```cpp
  conn = driver->connect("tcp://127.0.0.1:3306", "root", "password");
  conn->setSchema("kursova_schema");
  ```
- Replace `root` and `password` with your actual credentials.
- Ensure that port `3306` is open and accessible.

### 2. Visual Studio Configuration
- Add MySQL Connector libraries:
  - Go to **Project Properties → Linker → Additional Dependencies** and add the required `.lib` files.
  - Copy the required `.dll` files to the program folder.
- Ensure that the MySQL Connector version matches the MySQL Server version.

---

## Step 4: Running the Application

### 1. Start MySQL Server
- Run the following command to start MySQL:
  ```sh
  systemctl start mysql
  ```
  *(For Windows, use MySQL Workbench or the MySQL Service Manager.)*

### 2. Compile the Project
- Open the `.sln` file in Visual Studio.
- Click **Build Solution**.

### 3. Run the Program
- Ensure the database connection is established.
- Run the application and verify that queries execute correctly.
- If errors occur, check MySQL logs and exception handling in your code.

---

## Troubleshooting
- **Connection Errors:** Verify database credentials and ensure MySQL service is running.
- **Library Errors:** Ensure MySQL Connector libraries are correctly configured in Visual Studio.
- **Permission Issues:** Run the application with appropriate permissions or check MySQL user grants.

---

### Author
**Heorhii**

---

### License
This project is for educational purposes and follows the standard open-source licensing agreements.

