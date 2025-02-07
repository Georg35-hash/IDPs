#pragma once
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <iostream>
#include "RegisterForm.h"
#include "MainForm.h"
using namespace std;

namespace KursovaApp {

	using namespace sql::mysql;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{
	public:
		LoginForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::Windows::Forms::TextBox^ txtUserName;
		System::Windows::Forms::TextBox^ txtPassword;
		System::Windows::Forms::Button^ btnLogin;
		System::Windows::Forms::Label^ lblUserName;
		System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::Button^ btnRegister;
		   System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->lblUserName = (gcnew System::Windows::Forms::Label());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtUserName
			// 
			this->txtUserName->Location = System::Drawing::Point(200, 25);
			this->txtUserName->Margin = System::Windows::Forms::Padding(4);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(159, 22);
			this->txtUserName->TabIndex = 1;
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(200, 74);
			this->txtPassword->Margin = System::Windows::Forms::Padding(4);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(159, 22);
			this->txtPassword->TabIndex = 3;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(30, 124);
			this->btnLogin->Margin = System::Windows::Forms::Padding(4);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(139, 28);
			this->btnLogin->TabIndex = 4;
			this->btnLogin->Text = L"Login";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &LoginForm::btnLogin_Click);
			// 
			// lblUserName
			// 
			this->lblUserName->Location = System::Drawing::Point(27, 25);
			this->lblUserName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUserName->Name = L"lblUserName";
			this->lblUserName->Size = System::Drawing::Size(133, 28);
			this->lblUserName->TabIndex = 0;
			this->lblUserName->Text = L"Username:";
			// 
			// lblPassword
			// 
			this->lblPassword->Location = System::Drawing::Point(27, 74);
			this->lblPassword->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(133, 28);
			this->lblPassword->TabIndex = 2;
			this->lblPassword->Text = L"Password:";
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(200, 124);
			this->btnRegister->Margin = System::Windows::Forms::Padding(4);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(159, 28);
			this->btnRegister->TabIndex = 5;
			this->btnRegister->Text = L"Registration";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &LoginForm::btnRegister_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(400, 185);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->lblUserName);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->btnLogin);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LoginForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Authorization";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		bool authorizeUser(std::string username, std::string password) {
			try {
				// Створення драйвера та з'єднання
				sql::mysql::MySQL_Driver* driver;
				sql::Connection* con;

				driver = sql::mysql::get_mysql_driver_instance();
				con = driver->connect("tcp://localhost:3306", "root", "gera123S!");
				con->setSchema("kursova_schema"); 

				// Підготовка запиту
				sql::PreparedStatement* pstmt = con->prepareStatement("SELECT * FROM users WHERE login = ? AND password = ?");
				pstmt->setString(1, username);
				pstmt->setString(2, password);

				// Виконання запиту
				sql::ResultSet* res = pstmt->executeQuery();

				bool loginSuccessful = false;

				// Перевірка результату
				if (res->next()) {
					loginSuccessful = true;  // Авторизація пройшла успішно
				}
				else {
					loginSuccessful = false; // Невірні логін або пароль
				}

				// Очищення ресурсів
				delete res;
				delete pstmt;
				delete con;

				return loginSuccessful;
			}
			catch (sql::SQLException& e) {
				// Виведення повідомлення про помилку
				MessageBox::Show("SQL Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				return false;
			}

		}
	private:
		System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
			std::string username = msclr::interop::marshal_as<std::string>(this->txtUserName->Text);
			std::string password = msclr::interop::marshal_as<std::string>(this->txtPassword->Text);

			if (authorizeUser(username, password)) {
				MessageBox::Show("Вхід успішний!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->Hide();
				MainForm^ fm = gcnew MainForm();
				fm->textBox1->Text = txtUserName->Text;
				fm->ShowDialog();
			}
			else {
				MessageBox::Show("Помилка. Невірний логін або пароль.", "Повідомлення про помилку", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	    RegisterForm^ registerForm = gcnew RegisterForm();
		registerForm->ShowDialog();
		this->Show();
	}
private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}