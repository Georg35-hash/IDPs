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
	/// Summary for AddFamilyRelations
	/// </summary>
	public ref class AddFamilyRelations : public System::Windows::Forms::Form
	{
	public:
		AddFamilyRelations(void)
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
		~AddFamilyRelations()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^ txtRelationName;
	public: System::Windows::Forms::TextBox^ txtRelationDocument;
	protected:

	protected:

	public: System::Windows::Forms::Label^ lblRelationName;
	public: System::Windows::Forms::Label^ lblRelationDocument;


	public: System::Windows::Forms::TextBox^ txtRelationType;
	public: System::Windows::Forms::Label^ lblRelationType;


	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Label^ lblVPO;

	public: System::Windows::Forms::ComboBox^ comboBox1;

	public:

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
			this->txtRelationName = (gcnew System::Windows::Forms::TextBox());
			this->txtRelationDocument = (gcnew System::Windows::Forms::TextBox());
			this->lblRelationName = (gcnew System::Windows::Forms::Label());
			this->lblRelationDocument = (gcnew System::Windows::Forms::Label());
			this->txtRelationType = (gcnew System::Windows::Forms::TextBox());
			this->lblRelationType = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblVPO = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// txtRelationName
			// 
			this->txtRelationName->Location = System::Drawing::Point(40, 100);
			this->txtRelationName->Margin = System::Windows::Forms::Padding(4);
			this->txtRelationName->Name = L"txtRelationName";
			this->txtRelationName->Size = System::Drawing::Size(416, 22);
			this->txtRelationName->TabIndex = 61;
			// 
			// txtRelationDocument
			// 
			this->txtRelationDocument->Location = System::Drawing::Point(40, 220);
			this->txtRelationDocument->Margin = System::Windows::Forms::Padding(4);
			this->txtRelationDocument->Name = L"txtRelationDocument";
			this->txtRelationDocument->Size = System::Drawing::Size(416, 22);
			this->txtRelationDocument->TabIndex = 59;
			// 
			// lblRelationName
			// 
			this->lblRelationName->AutoSize = true;
			this->lblRelationName->Location = System::Drawing::Point(40, 80);
			this->lblRelationName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRelationName->Name = L"lblRelationName";
			this->lblRelationName->Size = System::Drawing::Size(112, 16);
			this->lblRelationName->TabIndex = 58;
			this->lblRelationName->Text = L"Name of relations";
			// 
			// lblRelationDocument
			// 
			this->lblRelationDocument->AutoSize = true;
			this->lblRelationDocument->Location = System::Drawing::Point(40, 200);
			this->lblRelationDocument->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRelationDocument->Name = L"lblRelationDocument";
			this->lblRelationDocument->Size = System::Drawing::Size(115, 16);
			this->lblRelationDocument->TabIndex = 56;
			this->lblRelationDocument->Text = L"Type of document";
			// 
			// txtRelationType
			// 
			this->txtRelationType->Location = System::Drawing::Point(40, 160);
			this->txtRelationType->Margin = System::Windows::Forms::Padding(4);
			this->txtRelationType->Name = L"txtRelationType";
			this->txtRelationType->Size = System::Drawing::Size(416, 22);
			this->txtRelationType->TabIndex = 55;
			// 
			// lblRelationType
			// 
			this->lblRelationType->AutoSize = true;
			this->lblRelationType->Location = System::Drawing::Point(40, 140);
			this->lblRelationType->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRelationType->Name = L"lblRelationType";
			this->lblRelationType->Size = System::Drawing::Size(107, 16);
			this->lblRelationType->TabIndex = 53;
			this->lblRelationType->Text = L"Type of relations";
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(40, 337);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(416, 43);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Enter";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(40, 272);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(416, 41);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// lblVPO
			// 
			this->lblVPO->AutoSize = true;
			this->lblVPO->Location = System::Drawing::Point(40, 20);
			this->lblVPO->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblVPO->Name = L"lblVPO";
			this->lblVPO->Size = System::Drawing::Size(175, 16);
			this->lblVPO->TabIndex = 49;
			this->lblVPO->Text = L"Internally displaced persons";
			this->lblVPO->Click += gcnew System::EventHandler(this, &AddFamilyRelations::lblVPO_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(40, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(416, 24);
			this->comboBox1->TabIndex = 69;
			this->comboBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddFamilyRelations::comboBox1_MouseClick);
			// 
			// AddFamilyRelations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 423);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->txtRelationName);
			this->Controls->Add(this->txtRelationDocument);
			this->Controls->Add(this->lblRelationName);
			this->Controls->Add(this->lblRelationDocument);
			this->Controls->Add(this->txtRelationType);
			this->Controls->Add(this->lblRelationType);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblVPO);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddFamilyRelations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Додати родинний зв\'язок";
			this->Load += gcnew System::EventHandler(this, &AddFamilyRelations::AddFamilyRelations_Load);
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
			con = driver->connect("tcp://127.0.0.1:3306", "root", "gera123S!");
			con->setSchema("kursova_schema");

			// Change query to select VPO IDs alongside last names
			pstmt = con->prepareStatement("SELECT id, last_name, first_name, middle_name FROM vpo"); // Assuming `id` is the VPO ID column
			res = pstmt->executeQuery();

			while (res->next()) {
				// Get VPO ID and last name
				int id = res->getInt("id"); // Get the integer VPO ID
				System::String^ lastName = gcnew System::String(res->getString("last_name").c_str());
				System::String^ firstName = gcnew System::String(res->getString("first_name").c_str());
				System::String^ middleName = gcnew System::String(res->getString("middle_name").c_str());

				// Add the last name to the combo box
				comboBox1->Items->Add(lastName + " " + firstName + " " + middleName + " " + "(ID: " + id.ToString() + ")"); // Show ID in combo box
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

private: System::Void AddFamilyRelations_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblVPO_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
