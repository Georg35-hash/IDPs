#pragma once
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "AddManagers.h"
namespace KursovaApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	
	public ref class Managers : public System::Windows::Forms::Form
	{
	public:
		Managers(void)
		{
			InitializeComponent();
			
		}

	protected:
		
		~Managers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	protected:
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;


	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;

	private:
		
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Managers::typeid));
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStripButton3
			// 
			this->toolStripButton3->AutoSize = false;
			this->toolStripButton3->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton3.Image")));
			this->toolStripButton3->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton3->Name = L"toolStripButton3";
			this->toolStripButton3->Size = System::Drawing::Size(30, 30);
			this->toolStripButton3->Text = L"toolStripButton3";
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Managers::toolStripButton3_Click);
			// 
			// toolStripButton2
			// 
			this->toolStripButton2->AutoSize = false;
			this->toolStripButton2->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton2.Image")));
			this->toolStripButton2->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton2->Name = L"toolStripButton2";
			this->toolStripButton2->Size = System::Drawing::Size(30, 30);
			this->toolStripButton2->Text = L"toolStripButton2";
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Managers::toolStripButton2_Click);
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->AutoSize = false;
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(30, 30);
			this->toolStripButton1->Text = L"toolStripButton1";
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Managers::toolStripButton1_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton5
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(732, 33);
			this->toolStrip1->TabIndex = 12;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->AutoSize = false;
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->Size = System::Drawing::Size(30, 30);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Managers::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Margin = System::Windows::Forms::Padding(517, 1, 0, 2);
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 30);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &Managers::toolStripButton5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column1,
					this->Column2
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 47);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(732, 406);
			this->dataGridView1->TabIndex = 11;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Managers::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Number";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->Width = 125;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Lastname and firstname of manager";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 500;
			// 
			// Managers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(732, 453);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Managers";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Managers";
			this->Load += gcnew System::EventHandler(this, &Managers::Managers_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Managers_Load(System::Object^ sender, System::EventArgs^ e) {
		sql::mysql::MySQL_Driver* driver;
		sql::Connection* con;
		sql::PreparedStatement* pstmt;
		sql::ResultSet* res;
		try {
			driver = sql::mysql::get_mysql_driver_instance();
			con = driver->connect("tcp://127.0.0.1:3306", "root", "admin");
			con->setSchema("kursova_schema");

			pstmt = con->prepareStatement("SELECT id, full_name FROM managers");
			res = pstmt->executeQuery();

			dataGridView1->Rows->Clear();

			while (res->next()) {
				int rowIndex = dataGridView1->Rows->Add();
				DataGridViewRow^ row = dataGridView1->Rows[rowIndex];
				row->Cells[0]->Value = gcnew String(res->getString("id").c_str());
				row->Cells[1]->Value = gcnew String(res->getString("full_name").c_str());
			}
		}
		catch (sql::SQLException& e) {
			String^ errorMsg = "Error SQL: " + gcnew String(e.what());
			errorMsg += "\nError Code: " + e.getErrorCode();
			MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			delete res;
			delete pstmt;
			delete con;
		}

	}
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	Managers_Load(sender, e);
}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	AddManagers^ addManagers = gcnew AddManagers();
	this->Hide();
	addManagers->ShowDialog();

	// Retrieve values from input fields
	String^ userText = addManagers->comboBox1->Text; // Get text from ComboBox
	String^ full_name = addManagers->txtManagerFullName->Text;

	// Validate input fields
	if (String::IsNullOrEmpty(userText) || String::IsNullOrEmpty(full_name)) {
		MessageBox::Show("Please fill in all fields.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	sql::mysql::MySQL_Driver* driver = nullptr;
	sql::Connection* con = nullptr;
	sql::PreparedStatement* pstmt = nullptr;

	try {
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "admin");
		con->setSchema("kursova_schema");

		// Extract the VPO ID from the vpoText
		int user = 0;
		// Regular expression to match the ID from the string
		System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("ID: (\\d+)");
		System::Text::RegularExpressions::Match^ match = regex->Match(userText);
		if (match->Success) {
			user = Int32::Parse(match->Groups[1]->Value); // Extract and parse the ID
		}
		else {
			throw gcnew System::FormatException("VPO ID not found in the selected text.");
		}

		// Prepare SQL insert statement
		pstmt = con->prepareStatement("INSERT INTO managers (full_name, user_id) VALUES (?, ?)");
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(full_name));
		pstmt->setInt(2, user); // Set the integer vpo

		// Execute the insert
		pstmt->executeUpdate();

		MessageBox::Show("Manager successfully added", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (sql::SQLException& e) {
		String^ errorMsg = "Error SQL: " + gcnew String(e.what());
		errorMsg += "\nError Code: " + e.getErrorCode();
		MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		delete pstmt;
		delete con;
	}
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->CurrentRow == nullptr || dataGridView1->CurrentRow->Cells[0]->Value == nullptr) {
		MessageBox::Show("Please select a row to delete.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		int recordId = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		std::unique_ptr<sql::Connection> conn(driver->connect("tcp://localhost:3306", "root", "admin"));
		conn->setSchema("kursova_schema");

		std::unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement("DELETE FROM managers WHERE id = ?"));
		int recordId1 = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		pstmt->setInt(1, recordId1);
		int rowsAffected = pstmt->executeUpdate();

		if (rowsAffected > 0) {
			MessageBox::Show("Data successfully deleted!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Manager successfully updated!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	catch (sql::SQLException& e) {
		String^ errorMsg = " Error SQL: " + gcnew String(e.what());
		errorMsg += "\nError Code: " + e.getErrorCode();
		MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if a row is selected
	if (dataGridView1->CurrentRow == nullptr) {
		MessageBox::Show("Please select a manager to edit.", "Selection Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Open edit form
	AddManagers^ editManagers = gcnew AddManagers();
	this->Hide();
	editManagers->button2->Text = "Edit";
    editManagers->Text = "Edit Manager";

	// Get the ID of the record to be edited
	String^ manager_id = dataGridView1->CurrentRow->Cells[0]->Value->ToString(); // Assume ID is in the first column
	editManagers->txtManagerFullName->Text = dataGridView1->CurrentRow->Cells[1]->Value->ToString();

	// Show the dialog for editing
	editManagers->ShowDialog();

	// Retrieve values from input fields after the dialog is closed
	String^ userText = editManagers->comboBox1->Text; // Get text from ComboBox
	String^ full_name = editManagers->txtManagerFullName->Text;

	// Validate input fields
	if (String::IsNullOrEmpty(userText) || String::IsNullOrEmpty(full_name)) {
		MessageBox::Show("Please fill in all fields.", "Error!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	sql::mysql::MySQL_Driver* driver = nullptr;
	sql::Connection* con = nullptr;
	sql::PreparedStatement* pstmt = nullptr;

	try {
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "admin");
		con->setSchema("kursova_schema");

		// Extract the VPO ID from the vpoText
		int user = 0;
		System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("ID: (\\d+)");
		System::Text::RegularExpressions::Match^ match = regex->Match(userText);
		if (match->Success) {
			user = Int32::Parse(match->Groups[1]->Value); // Extract and parse the ID
		}
		else {
			throw gcnew System::FormatException("VPO ID not found in the selected text.");
		}

		// Prepare SQL update statement
		int id = Int32::Parse(manager_id); // Parse the ID of the record to update
		pstmt = con->prepareStatement("UPDATE managers SET full_name = ?, user_id = ? WHERE id = ?");

		// Fill parameters for the update query
		pstmt->setString(1, msclr::interop::marshal_as<std::string>(full_name));
		pstmt->setInt(2, user);
		pstmt->setInt(3, id); // ID of the record to update

		// Execute the update
		pstmt->executeUpdate();

		MessageBox::Show("Manager successfully updated!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (sql::SQLException& e) {
		String^ errorMsg = "Error SQL: " + gcnew String(e.what());
		errorMsg += "\nError Code: " + e.getErrorCode();
		MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		delete pstmt;
		delete con;
	}
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); 
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
