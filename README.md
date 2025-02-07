# IDPs app
Step 1: Environment Setup

1. Install Required Tools
MySQL Database:

Download MySQL Server: MySQL Downloads
Install and note the root login/password.
Verify MySQL installation:
mysql -u root -p
Development Environment:

Install Visual Studio (Community Edition).
Include support for:
C++ Development
C++/CLI (.NET Framework support)
MySQL C++ Driver:

Download MySQL Connector/C++: Connector Download
Extract and configure library paths in Visual Studio.

2. Database Setup

Import the database schema:

mysql -u root -p < schema.sql
Verify database structure:


SHOW DATABASES;
USE kursova_schema;
SHOW TABLES;
Step 2: Project Configuration
1. Database Connection Setup
Locate the MySQL connection settings in your code:

conn = driver->connect("tcp://127.0.0.1:3306", "root", "password");
conn->setSchema("kursova_schema");
Replace "root" and "password" with your credentials.
Ensure port 3306 is open.

2. Visual Studio Configuration
Add MySQL Connector libraries:
Set .lib and .dll paths in Linker → Additional Dependencies.
Copy required DLLs to the program folder.
Ensure the MySQL Connector version matches MySQL Server.
Step 3: Running the Application
Start MySQL Server:

systemctl start mysql
Compile the project:
Open the .sln file in Visual Studio.
Run Build Solution.
Run the program:
Ensure database connection and queries execute properly.
Check MySQL logs and exception handling in case of errors.

