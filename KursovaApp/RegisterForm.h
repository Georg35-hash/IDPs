#pragma once
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <iostream>
namespace KursovaApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnRegister;
	protected:
	private: System::Windows::Forms::Label^ lblUserName;
	private: System::Windows::Forms::TextBox^ txtUserName;
	private: System::Windows::Forms::Label^ lblPassword;
	private: System::Windows::Forms::TextBox^ txtPassword;
	private: System::Windows::Forms::Button^ btnLogin;
	private: System::Windows::Forms::Label^ lblConfirmPassword;
	private: System::Windows::Forms::TextBox^ txtConfirmPassword;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnRegister = (gcnew System::Windows::Forms::Button());
			this->lblUserName = (gcnew System::Windows::Forms::Label());
			this->txtUserName = (gcnew System::Windows::Forms::TextBox());
			this->lblPassword = (gcnew System::Windows::Forms::Label());
			this->txtPassword = (gcnew System::Windows::Forms::TextBox());
			this->btnLogin = (gcnew System::Windows::Forms::Button());
			this->lblConfirmPassword = (gcnew System::Windows::Forms::Label());
			this->txtConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnRegister
			// 
			this->btnRegister->Location = System::Drawing::Point(158, 142);
			this->btnRegister->Name = L"btnRegister";
			this->btnRegister->Size = System::Drawing::Size(119, 23);
			this->btnRegister->TabIndex = 11;
			this->btnRegister->Text = L"Registration";
			this->btnRegister->UseVisualStyleBackColor = true;
			this->btnRegister->Click += gcnew System::EventHandler(this, &RegisterForm::btnRegister_Click);
			// 
			// lblUserName
			// 
			this->lblUserName->Location = System::Drawing::Point(28, 19);
			this->lblUserName->Name = L"lblUserName";
			this->lblUserName->Size = System::Drawing::Size(100, 23);
			this->lblUserName->TabIndex = 6;
			this->lblUserName->Text = L"Username:";
			this->lblUserName->Click += gcnew System::EventHandler(this, &RegisterForm::lblUserName_Click);
			// 
			// txtUserName
			// 
			this->txtUserName->Location = System::Drawing::Point(158, 19);
			this->txtUserName->Name = L"txtUserName";
			this->txtUserName->Size = System::Drawing::Size(120, 20);
			this->txtUserName->TabIndex = 7;
			// 
			// lblPassword
			// 
			this->lblPassword->Location = System::Drawing::Point(28, 58);
			this->lblPassword->Name = L"lblPassword";
			this->lblPassword->Size = System::Drawing::Size(100, 23);
			this->lblPassword->TabIndex = 8;
			this->lblPassword->Text = L"Password:";
			// 
			// txtPassword
			// 
			this->txtPassword->Location = System::Drawing::Point(158, 58);
			this->txtPassword->Name = L"txtPassword";
			this->txtPassword->PasswordChar = '*';
			this->txtPassword->Size = System::Drawing::Size(120, 20);
			this->txtPassword->TabIndex = 9;
			// 
			// btnLogin
			// 
			this->btnLogin->Location = System::Drawing::Point(30, 142);
			this->btnLogin->Name = L"btnLogin";
			this->btnLogin->Size = System::Drawing::Size(104, 23);
			this->btnLogin->TabIndex = 10;
			this->btnLogin->Text = L"Back";
			this->btnLogin->UseVisualStyleBackColor = true;
			this->btnLogin->Click += gcnew System::EventHandler(this, &RegisterForm::btnLogin_Click);
			// 
			// lblConfirmPassword
			// 
			this->lblConfirmPassword->Location = System::Drawing::Point(28, 100);
			this->lblConfirmPassword->Name = L"lblConfirmPassword";
			this->lblConfirmPassword->Size = System::Drawing::Size(100, 23);
			this->lblConfirmPassword->TabIndex = 12;
			this->lblConfirmPassword->Text = L"Confirm password:";
			// 
			// txtConfirmPassword
			// 
			this->txtConfirmPassword->Location = System::Drawing::Point(158, 100);
			this->txtConfirmPassword->Name = L"txtConfirmPassword";
			this->txtConfirmPassword->PasswordChar = '*';
			this->txtConfirmPassword->Size = System::Drawing::Size(120, 20);
			this->txtConfirmPassword->TabIndex = 13;
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(300, 187);
			this->Controls->Add(this->lblConfirmPassword);
			this->Controls->Add(this->txtConfirmPassword);
			this->Controls->Add(this->btnRegister);
			this->Controls->Add(this->lblUserName);
			this->Controls->Add(this->txtUserName);
			this->Controls->Add(this->lblPassword);
			this->Controls->Add(this->txtPassword);
			this->Controls->Add(this->btnLogin);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"RegisterForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	

private: System::Void btnRegister_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ userName = txtUserName->Text;
	String^ password = txtPassword->Text;
	String^ confirmPassword = txtConfirmPassword->Text;

	if (userName->Length == 0 || password->Length == 0 || confirmPassword->Length == 0) {
		MessageBox::Show("Please fill in all fields", "Registration Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	if (password != confirmPassword) {
		MessageBox::Show("Please fill in all fields", "Registration Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		// Перетворення System::String^ у std::string для MySQL
		std::string stdUserName = msclr::interop::marshal_as<std::string>(userName);
		std::string stdPassword = msclr::interop::marshal_as<std::string>(password);

		// Ініціалізація MySQL драйвера та з'єднання
		sql::mysql::MySQL_Driver* driver;
		sql::Connection* conn;

		driver = sql::mysql::get_mysql_driver_instance();
		conn = driver->connect("tcp://localhost:3306", "root", "admin");  
		conn->setSchema("kursova_schema");  

		
		sql::PreparedStatement* checkUserStmt = conn->prepareStatement("SELECT * FROM users WHERE login = ?");
		checkUserStmt->setString(1, stdUserName);
		sql::ResultSet* res = checkUserStmt->executeQuery();

		if (res->next()) {
			MessageBox::Show("A user with this username already exists. Please try another.", "Registration Error" "Помилка реєстрації", MessageBoxButtons::OK, MessageBoxIcon::Error);

		
			delete res;
			delete checkUserStmt;
			delete conn;
			return;
		}

		
		delete res;
		delete checkUserStmt;

		
		sql::PreparedStatement* insertUserStmt = conn->prepareStatement("INSERT INTO users (login, password) VALUES (?, ?)");
		insertUserStmt->setString(1, stdUserName);
		insertUserStmt->setString(2, stdPassword);
		insertUserStmt->executeUpdate();

		
		MessageBox::Show("Registration successful!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);


		
		delete insertUserStmt;
		delete conn;
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("Error SQL: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}

private: System::Void btnLogin_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void lblUserName_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
