#pragma once
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include <regex>
#include "AddVPO.h"
#include "ReportCriteriaForm.h"
#include "windows.data.pdf.h"
namespace KursovaApp {
	using namespace System::Diagnostics;
	using namespace System::IO;
	using namespace sql::mysql;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for VPO
	/// </summary>
	public ref class VPO : public System::Windows::Forms::Form
	{
	public:
		VPO(void)
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
		~VPO()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:

	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;












	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(VPO::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 147);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1399, 406);
			this->dataGridView1->TabIndex = 7;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &VPO::dataGridView1_CellContentClick);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton6, this->toolStripButton5, this->toolStripButton4
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1399, 33);
			this->toolStrip1->TabIndex = 8;
			this->toolStrip1->Text = L"toolStrip1";
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
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &VPO::toolStripButton1_Click);
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
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &VPO::toolStripButton2_Click);
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
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &VPO::toolStripButton3_Click);
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->AutoSize = false;
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(30, 30);
			this->toolStripButton6->Text = L"toolStripButton4";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &VPO::toolStripButton6_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Margin = System::Windows::Forms::Padding(100, 1, 0, 2);
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 30);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &VPO::toolStripButton5_Click);
			// 
			// toolStripButton4
			// 
			this->toolStripButton4->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton4.Image")));
			this->toolStripButton4->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton4->Margin = System::Windows::Forms::Padding(0, 1, 0, 0);
			this->toolStripButton4->MergeIndex = 1;
			this->toolStripButton4->Name = L"toolStripButton4";
			this->toolStripButton4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->toolStripButton4->RightToLeftAutoMirrorImage = true;
			this->toolStripButton4->Size = System::Drawing::Size(29, 32);
			this->toolStripButton4->Text = L"toolStripButton4";
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &VPO::toolStripButton4_Click);
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
			this->Column2->HeaderText = L"Lastname";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->Width = 125;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Firstname";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->Width = 125;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Middlename";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->Width = 125;
			// 
			// Column5
			// 
			dataGridViewCellStyle2->Format = L"d";
			dataGridViewCellStyle2->NullValue = nullptr;
			this->Column5->DefaultCellStyle = dataGridViewCellStyle2;
			this->Column5->HeaderText = L"Date of birth";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Sex";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"RNOKPP (TIN)";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Number of document";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Region of registration";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Registration of adress";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// VPO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1399, 553);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->toolStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"VPO";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Internally Displaced Persons";
			this->Load += gcnew System::EventHandler(this, &VPO::VPO_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void VPO_Load(System::Object^ sender, System::EventArgs^ e) {
		sql::mysql::MySQL_Driver* driver;
		sql::Connection* con;
		sql::PreparedStatement* pstmt;
		sql::ResultSet* res;

		try {
			driver = sql::mysql::get_mysql_driver_instance();
			// Use charset=utf8mb4 in the connection string
			con = driver->connect("tcp://127.0.0.1:3306?charset=utf8mb4", "root", "gera123S!");
			con->setSchema("kursova_schema");

			pstmt = con->prepareStatement("SELECT * FROM vpo");
			res = pstmt->executeQuery();

			dataGridView1->Rows->Clear();

			while (res->next()) {
				int rowIndex = dataGridView1->Rows->Add();
				DataGridViewRow^ row = dataGridView1->Rows[rowIndex];
				row->Cells[0]->Value = gcnew String(res->getString("id").c_str());
				row->Cells[1]->Value = gcnew String(res->getString("last_name").c_str());
				row->Cells[2]->Value = gcnew String(res->getString("first_name").c_str());
				row->Cells[3]->Value = gcnew String(res->getString("middle_name").c_str());
				row->Cells[4]->Value = gcnew String(res->getString("birth_date").c_str());
				row->Cells[5]->Value = gcnew String(res->getString("gender").c_str());
				row->Cells[6]->Value = gcnew String(res->getString("rnokpp").c_str());
				row->Cells[7]->Value = gcnew String(res->getString("document_number").c_str());
				row->Cells[8]->Value = gcnew String(res->getString("region").c_str());
				row->Cells[9]->Value = gcnew String(res->getString("registration_address").c_str());
			}
		}
		catch (sql::SQLException& e) {
			MessageBox::Show("Database Error: " + gcnew String(e.what()), "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			delete res;
			delete pstmt;
			delete con;
		}
	}

		private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
			AddVPO^ addVPO = gcnew AddVPO();
			this->Hide();
			addVPO->ShowDialog();

			// Retrieve values from input fields
			String^ last_name = addVPO->txtSurname->Text;
			String^ first_name = addVPO->txtName->Text;
			String^ middle_name = addVPO->txtMiddle->Text;
			String^ birth_date = addVPO->birthdayPicker->Value.ToString("yyyy-MM-dd");
			String^ gender = addVPO->txtGender->Text;
			String^ rnokpp = addVPO->txtRNOKPP->Text;
			String^ dokument_number = addVPO->txtNumber->Text;
			String^ region = addVPO->txtRegion->Text;
			String^ registration_address = addVPO->txtAddress->Text;

			if (String::IsNullOrEmpty(last_name) || String::IsNullOrEmpty(first_name) ||
				String::IsNullOrEmpty(middle_name) || String::IsNullOrEmpty(birth_date) ||
				String::IsNullOrEmpty(gender) || String::IsNullOrEmpty(rnokpp) ||
				String::IsNullOrEmpty(dokument_number) || String::IsNullOrEmpty(region) ||
				String::IsNullOrEmpty(registration_address)) {
				MessageBox::Show("Будь ласка заповніть всі поля.", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				return;
			}

			try {
				// Convert .NET Strings to std::string
				std::string stdLastName = msclr::interop::marshal_as<std::string>(last_name);
				std::string stdFirstName = msclr::interop::marshal_as<std::string>(first_name);
				std::string stdMiddleName = msclr::interop::marshal_as<std::string>(middle_name);
				std::string stdBirthDate = msclr::interop::marshal_as<std::string>(birth_date);
				std::string stdGender = msclr::interop::marshal_as<std::string>(gender);
				std::string stdRNOKPP = msclr::interop::marshal_as<std::string>(rnokpp);
				std::string stdDokumentNumber = msclr::interop::marshal_as<std::string>(dokument_number);
				std::string stdRegion = msclr::interop::marshal_as<std::string>(region);
				std::string stdRegistrationAddress = msclr::interop::marshal_as<std::string>(registration_address);

				// Connect to the database with utf8mb4 character set
				sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
				sql::Connection* conn = driver->connect("tcp://127.0.0.1:3306?charset=utf8mb4", "root", "gera123S!");
				conn->setSchema("kursova_schema");

				// Set UTF-8 encoding for MySQL connection
				conn->setClientOption("characterSetResults", "utf8mb4");
				conn->setClientOption("characterSetClient", "utf8mb4");
				conn->setClientOption("characterSetConnection", "utf8mb4");

				// Prepare the SQL statement for inserting data
				sql::PreparedStatement* insertRefugeeStmt = conn->prepareStatement(
					"INSERT INTO vpo (last_name, first_name, middle_name, birth_date, gender, rnokpp, document_number, region, registration_address) VALUES (?, ?, ?, ?, ?, ?, ?, ?, ?)");

				insertRefugeeStmt->setString(1, stdLastName);
				insertRefugeeStmt->setString(2, stdFirstName);
				insertRefugeeStmt->setString(3, stdMiddleName);
				insertRefugeeStmt->setString(4, stdBirthDate);
				insertRefugeeStmt->setString(5, stdGender);
				insertRefugeeStmt->setString(6, stdRNOKPP);
				insertRefugeeStmt->setString(7, stdDokumentNumber);
				insertRefugeeStmt->setString(8, stdRegion);
				insertRefugeeStmt->setString(9, stdRegistrationAddress);

				// Execute the insert statement
				insertRefugeeStmt->executeUpdate();
				MessageBox::Show("Дані успішно додані!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Clean up resources
				delete insertRefugeeStmt;
				delete conn;
			}
			catch (sql::SQLException& e) {
				String^ errorMsg = "Помилка SQL: " + gcnew String(e.what());
				errorMsg += "\nError Code: " + e.getErrorCode();
				MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}





private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->CurrentRow == nullptr || dataGridView1->CurrentRow->Cells[0]->Value == nullptr) {
		MessageBox::Show("Виберіть рядок для редагування", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	AddVPO^ addVPO = gcnew AddVPO();
	this->Hide();
	addVPO->button2->Text = "Редагувати";
	addVPO->Text = "Редагувати Внутрішньо переміщену особу";

	// Заповнення полів форми
	addVPO->txtSurname->Text = dataGridView1->CurrentRow->Cells[1]->Value->ToString();
	addVPO->txtName->Text = dataGridView1->CurrentRow->Cells[2]->Value->ToString();
	addVPO->txtMiddle->Text = dataGridView1->CurrentRow->Cells[3]->Value->ToString();
	addVPO->birthdayPicker->Text = dataGridView1->CurrentRow->Cells[4]->Value->ToString();
	addVPO->txtGender->Text = dataGridView1->CurrentRow->Cells[5]->Value->ToString();
	addVPO->txtRNOKPP->Text = dataGridView1->CurrentRow->Cells[6]->Value->ToString();
	addVPO->txtNumber->Text = dataGridView1->CurrentRow->Cells[7]->Value->ToString();
	addVPO->txtRegion->Text = dataGridView1->CurrentRow->Cells[8]->Value->ToString();
	addVPO->txtAddress->Text = dataGridView1->CurrentRow->Cells[9]->Value->ToString();

	addVPO->ShowDialog();

	// Збирання даних з форми
	String^ last_name = addVPO->txtSurname->Text;
	String^ first_name = addVPO->txtName->Text;
	String^ middle_name = addVPO->txtMiddle->Text;
	String^ birth_date = addVPO->birthdayPicker->Value.ToString("yyyy-MM-dd");
	String^ gender = addVPO->txtGender->Text;
	String^ rnokpp = addVPO->txtRNOKPP->Text;
	String^ document_number = addVPO->txtNumber->Text;
	String^ region = addVPO->txtRegion->Text;
	String^ registration_address = addVPO->txtAddress->Text;

	if (String::IsNullOrEmpty(last_name) || String::IsNullOrEmpty(first_name) ||
		String::IsNullOrEmpty(middle_name) || String::IsNullOrEmpty(birth_date) ||
		String::IsNullOrEmpty(gender) || String::IsNullOrEmpty(rnokpp) ||
		String::IsNullOrEmpty(document_number) || String::IsNullOrEmpty(region) ||
		String::IsNullOrEmpty(registration_address)) {
		MessageBox::Show("Будь ласка заповніть всі поля.", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	try {
		int recordId = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		std::unique_ptr<sql::Connection> conn(driver->connect("tcp://localhost:3306", "root", "gera123S!"));
		conn->setSchema("kursova_schema");

		std::unique_ptr<sql::PreparedStatement> updateStmt(conn->prepareStatement(
			"UPDATE vpo SET last_name = ?, first_name = ?, middle_name = ?, birth_date = ?, gender = ?, rnokpp = ?, document_number = ?, region = ?, registration_address = ? WHERE id = ?"));

		updateStmt->setString(1, msclr::interop::marshal_as<std::string>(last_name));
		updateStmt->setString(2, msclr::interop::marshal_as<std::string>(first_name));
		updateStmt->setString(3, msclr::interop::marshal_as<std::string>(middle_name));
		updateStmt->setString(4, msclr::interop::marshal_as<std::string>(birth_date));
		updateStmt->setString(5, msclr::interop::marshal_as<std::string>(gender));
		updateStmt->setString(6, msclr::interop::marshal_as<std::string>(rnokpp));
		updateStmt->setString(7, msclr::interop::marshal_as<std::string>(document_number));
		updateStmt->setString(8, msclr::interop::marshal_as<std::string>(region));
		updateStmt->setString(9, msclr::interop::marshal_as<std::string>(registration_address));
		updateStmt->setInt(10, recordId);

		int rowsAffected = updateStmt->executeUpdate();

		if (rowsAffected > 0) {
			MessageBox::Show("Дані успішно оновлені!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		addVPO->Close();
		this->Show();
	}
	catch (sql::SQLException& e) {
		MessageBox::Show("Помилка SQL: " + gcnew String(e.what()), "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	catch (Exception^ e) {
		MessageBox::Show("Загальна помилка: " + e->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}



private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->CurrentRow == nullptr || dataGridView1->CurrentRow->Cells[0]->Value == nullptr) {
		MessageBox::Show("Виберіть рядок для видалення", "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		int recordId = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		std::unique_ptr<sql::Connection> conn(driver->connect("tcp://localhost:3306", "root", "gera123S!"));
		conn->setSchema("kursova_schema");

		std::unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement("DELETE FROM vpo WHERE id = ?"));
		int recordId1 = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		pstmt->setInt(1, recordId1);
		int rowsAffected = pstmt->executeUpdate();

		if (rowsAffected > 0) {
			MessageBox::Show("Дані успішно видалені!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Запис не знайдено або не було змінено.", "Інформація", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	catch (sql::SQLException& e) {
		std::cerr << "SQL Error: " << e.what() << std::endl;
	}
	catch (std::exception& e) {
		std::cerr << "Error: " << e.what() << std::endl;
	}
}
private: System::Void toolStripButton5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); // Закриває Relocation.h
}
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	VPO_Load(sender, e);
}

private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		// Шлях до wkhtmltopdf
		String^ wkhtmltopdfPath = "C:\\Program Files\\wkhtmltopdf\\bin\\wkhtmltopdf.exe";

		// Шлях до вихідного HTML файлу
		String^ htmlFilePath = "report.html";

		// Шлях до вихідного PDF файлу
		String^ pdfFilePath = "report.pdf";

		// Створення HTML контенту з правильним кодуванням
		String^ htmlContent = "<html><head><meta charset='UTF-8'><title>Звіт</title>";
		htmlContent += "<style> body { font-family: Arial, sans-serif; } </style></head><body>";
		htmlContent += "<h1>Звіт за даними ВПО</h1>";
		htmlContent += "<table border='1'><tr><th>ID</th><th>Прізвище</th><th>Ім'я</th><th>По батькові</th><th>Дата народження</th><th>Стать</th><th>РНОКПП</th><th>Номер документа</th><th>Регіон</th></tr>";

		// Проходимо по кожному рядку в DataGridView і додаємо дані в HTML
		for (int i = 0; i < dataGridView1->Rows->Count; ++i)
		{
			if (dataGridView1->Rows[i]->Cells[0]->Value != nullptr)
			{
				htmlContent += "<tr>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[0]->Value->ToString() + "</td>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[1]->Value->ToString() + "</td>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[2]->Value->ToString() + "</td>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[3]->Value->ToString() + "</td>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[4]->Value->ToString() + "</td>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[5]->Value->ToString() + "</td>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[6]->Value->ToString() + "</td>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[7]->Value->ToString() + "</td>";
				htmlContent += "<td>" + dataGridView1->Rows[i]->Cells[8]->Value->ToString() + "</td>";
				htmlContent += "</tr>";
			}
		}

		htmlContent += "</table></body></html>";

		// Записуємо HTML в файл
		File::WriteAllText(htmlFilePath, htmlContent);

		// Створюємо команду для виконання wkhtmltopdf з параметром кодування UTF-8
		String^ arguments = "--encoding utf-8 " + htmlFilePath + " " + pdfFilePath;

		// Запускаємо процес wkhtmltopdf
		Process^ process = gcnew Process();
		process->StartInfo->FileName = wkhtmltopdfPath;
		process->StartInfo->Arguments = arguments;
		process->StartInfo->WindowStyle = ProcessWindowStyle::Hidden;
		process->Start();

		// Чекаємо на завершення процесу
		process->WaitForExit();

		MessageBox::Show("Звіт успішно створено в форматі PDF!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (Exception^ ex)
	{
		MessageBox::Show("Помилка при створенні звіту: " + ex->Message, "Помилка", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
