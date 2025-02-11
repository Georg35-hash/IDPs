#pragma once
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
namespace KursovaApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddManagers
	/// </summary>
	public ref class AddManagers : public System::Windows::Forms::Form
	{
	public:
		AddManagers(void)
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
		~AddManagers()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ComboBox^ comboBox1;
	public: System::Windows::Forms::TextBox^ txtManagerFullName;
	protected:

	public: System::Windows::Forms::Label^ lblUser;

	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Label^ lblManager;


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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtManagerFullName = (gcnew System::Windows::Forms::TextBox());
			this->lblUser = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblManager = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(40, 100);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(416, 24);
			this->comboBox1->TabIndex = 79;
			this->comboBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddManagers::comboBox1_MouseClick);
			// 
			// txtManagerFullName
			// 
			this->txtManagerFullName->Location = System::Drawing::Point(40, 40);
			this->txtManagerFullName->Margin = System::Windows::Forms::Padding(4);
			this->txtManagerFullName->Name = L"txtManagerFullName";
			this->txtManagerFullName->Size = System::Drawing::Size(416, 22);
			this->txtManagerFullName->TabIndex = 78;
			// 
			// lblUser
			// 
			this->lblUser->AutoSize = true;
			this->lblUser->Location = System::Drawing::Point(40, 80);
			this->lblUser->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblUser->Name = L"lblUser";
			this->lblUser->Size = System::Drawing::Size(36, 16);
			this->lblUser->TabIndex = 76;
			this->lblUser->Text = L"User";
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(40, 220);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(416, 53);
			this->button2->TabIndex = 72;
			this->button2->Text = L"Enter";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(40, 140);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(416, 53);
			this->button1->TabIndex = 71;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// lblManager
			// 
			this->lblManager->AutoSize = true;
			this->lblManager->Location = System::Drawing::Point(40, 20);
			this->lblManager->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblManager->Name = L"lblManager";
			this->lblManager->Size = System::Drawing::Size(89, 16);
			this->lblManager->TabIndex = 70;
			this->lblManager->Text = L"Add manager";
			// 
			// AddManagers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 306);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->txtManagerFullName);
			this->Controls->Add(this->lblUser);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblManager);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddManagers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add manager";
			this->Load += gcnew System::EventHandler(this, &AddManagers::AddManagers_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void comboBox1_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	comboBox1->Items->Clear();
	sql::mysql::MySQL_Driver* driver;
	sql::Connection* con;
	sql::PreparedStatement* pstmt;
	sql::ResultSet* res;
	try {
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "admin");
		con->setSchema("kursova_schema");

		// Change query to select VPO IDs alongside last names
		pstmt = con->prepareStatement("SELECT id, login FROM users WHERE login='manager'"); // Assuming `id` is the VPO ID column
		res = pstmt->executeQuery();

		while (res->next()) {
			// Get VPO ID and last name
			int id = res->getInt("id"); // Get the integer VPO ID
			System::String^ lastName = gcnew System::String(res->getString("login").c_str());

			// Add the last name to the combo box
			comboBox1->Items->Add(lastName + " " + "(ID: " + id.ToString() + ")"); // Show ID in combo box
		}
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("Database Error: " + gcnew String(e.what()));
	}
	finally {
		delete res;
		delete pstmt;
		delete con;
	}

}
private: System::Void AddManagers_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
