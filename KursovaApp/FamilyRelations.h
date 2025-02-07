#pragma once
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "AddFamilyRelations.h"
namespace KursovaApp {
	using namespace System::Text::RegularExpressions;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FamilyRelations
	/// </summary>
	public ref class FamilyRelations : public System::Windows::Forms::Form
	{
	public:
		FamilyRelations(void)
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
		~FamilyRelations()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::ToolStripButton^ toolStripButton5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;























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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FamilyRelations::typeid));
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton5 = (gcnew System::Windows::Forms::ToolStripButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &FamilyRelations::toolStripButton3_Click);
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
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &FamilyRelations::toolStripButton2_Click);
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
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &FamilyRelations::toolStripButton1_Click);
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
			this->toolStrip1->Size = System::Drawing::Size(934, 33);
			this->toolStrip1->TabIndex = 10;
			this->toolStrip1->Text = L"toolStrip1";
			this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &FamilyRelations::toolStrip1_ItemClicked);
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
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &FamilyRelations::toolStripButton4_Click);
			// 
			// toolStripButton5
			// 
			this->toolStripButton5->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton5.Image")));
			this->toolStripButton5->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton5->Margin = System::Windows::Forms::Padding(772, 1, 0, 2);
			this->toolStripButton5->Name = L"toolStripButton5";
			this->toolStripButton5->Size = System::Drawing::Size(29, 24);
			this->toolStripButton5->Text = L"toolStripButton5";
			this->toolStripButton5->Click += gcnew System::EventHandler(this, &FamilyRelations::toolStripButton5_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 147);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(934, 406);
			this->dataGridView1->TabIndex = 9;
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
			this->Column3->HeaderText = L"Name";
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
			this->Column5->HeaderText = L"Name of relation";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Type of relation";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Type of document";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// FamilyRelations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(934, 553);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"FamilyRelations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Family relations";
			this->Load += gcnew System::EventHandler(this, &FamilyRelations::FamilyRelations_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void FamilyRelations_Load(System::Object^ sender, System::EventArgs^ e) {
		sql::mysql::MySQL_Driver* driver;
		sql::Connection* con;
		sql::PreparedStatement* pstmt;
		sql::ResultSet* res;
		try {
			driver = sql::mysql::get_mysql_driver_instance();
			con = driver->connect("tcp://127.0.0.1:3306", "root", "gera123S!");
			con->setSchema("kursova_schema");

			pstmt = con->prepareStatement("SELECT family_relations.id, vpo.last_name as ln, vpo.first_name as fn, vpo.middle_name as mn, family_relations.relation_name as rn, family_relations.relation_type as rt, family_relations.relation_document as rd FROM family_relations INNER JOIN vpo ON family_relations.vpo = vpo.id");
			res = pstmt->executeQuery();

			dataGridView1->Rows->Clear();

			while (res->next()) {
				int rowIndex = dataGridView1->Rows->Add();
				DataGridViewRow^ row = dataGridView1->Rows[rowIndex];
				row->Cells[0]->Value = gcnew String(res->getString("id").c_str());
				row->Cells[1]->Value = gcnew String(res->getString("ln").c_str());
				row->Cells[2]->Value = gcnew String(res->getString("fn").c_str());
				row->Cells[3]->Value = gcnew String(res->getString("mn").c_str());
				row->Cells[4]->Value = gcnew String(res->getString("rn").c_str());
				row->Cells[5]->Value = gcnew String(res->getString("rt").c_str());
				row->Cells[6]->Value = gcnew String(res->getString("rd").c_str());
			}
		}
		catch (sql::SQLException& e) {
			String^ errorMsg = "Помилка SQL: " + gcnew String(e.what());
			errorMsg += "\nError Code: " + e.getErrorCode();
			MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		finally {
			delete res;
			delete pstmt;
			delete con;
		}
	}
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	AddFamilyRelations^ addfamilyRelations = gcnew AddFamilyRelations();
	this->Hide();
	addfamilyRelations->ShowDialog();

	// Retrieve values from input fields
	String^ vpoText = addfamilyRelations->comboBox1->Text; // Get text from ComboBox
	String^ relation_name = addfamilyRelations->txtRelationName->Text;
	String^ relation_type = addfamilyRelations->txtRelationType->Text;
	String^ relation_document = addfamilyRelations->txtRelationDocument->Text;

	// Validate input fields
	if (String::IsNullOrEmpty(vpoText) || String::IsNullOrEmpty(relation_name) ||
		String::IsNullOrEmpty(relation_type) || String::IsNullOrEmpty(relation_document)) {
		MessageBox::Show("Будь ласка заповніть всі поля.", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	sql::mysql::MySQL_Driver* driver = nullptr;
	sql::Connection* con = nullptr;
	sql::PreparedStatement* pstmt = nullptr;

	try {
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "gera123S!");
		con->setSchema("kursova_schema");

		// Extract the VPO ID from the vpoText
		int vpo = 0;
		// Regular expression to match the ID from the string
		System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("ID: (\\d+)");
		System::Text::RegularExpressions::Match^ match = regex->Match(vpoText);
		if (match->Success) {
			vpo = Int32::Parse(match->Groups[1]->Value); // Extract and parse the ID
		}

		// Prepare SQL insert statement
		pstmt = con->prepareStatement("INSERT INTO family_relations (vpo, relation_name, relation_type, relation_document) VALUES (?, ?, ?, ?)");
		pstmt->setInt(1, vpo); // Set the integer vpo
		pstmt->setString(2, msclr::interop::marshal_as<std::string>(relation_name));
		pstmt->setString(3, msclr::interop::marshal_as<std::string>(relation_type));
		pstmt->setString(4, msclr::interop::marshal_as<std::string>(relation_document));

		// Execute the insert
		pstmt->executeUpdate();

		MessageBox::Show("Дані успішно додані!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (sql::SQLException& e) {
		String^ errorMsg = "Помилка SQL: " + gcnew String(e.what());
		errorMsg += "\nError Code: " + e.getErrorCode();
		MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
	finally {
		delete pstmt;
		delete con;
	}
}











private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	FamilyRelations_Load(sender, e);
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

		std::unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement("DELETE FROM family_relations WHERE id = ?"));
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
		String^ errorMsg = "Помилка SQL: " + gcnew String(e.what());
		errorMsg += "\nError Code: " + e.getErrorCode();
		MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if a row is selected
	if (dataGridView1->CurrentRow == nullptr) {
		MessageBox::Show("Виберіть рядок для редагування!", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Open edit form
	AddFamilyRelations^ editFamilyRelations = gcnew AddFamilyRelations();
	this->Hide();
	editFamilyRelations->button2->Text = "Редагувати";
	editFamilyRelations->Text = "Редагувати родинний зв'язок";

	// Get the ID of the record to be edited
	String^ relation_id = dataGridView1->CurrentRow->Cells[0]->Value->ToString(); // Assume ID is in the first column
	editFamilyRelations->txtRelationName->Text = dataGridView1->CurrentRow->Cells[4]->Value->ToString();
	editFamilyRelations->txtRelationType->Text = dataGridView1->CurrentRow->Cells[5]->Value->ToString();
	editFamilyRelations->txtRelationDocument->Text = dataGridView1->CurrentRow->Cells[6]->Value->ToString();

	// Show the dialog for editing
	editFamilyRelations->ShowDialog();

	// Retrieve values from input fields after the dialog is closed
	String^ vpoText = editFamilyRelations->comboBox1->Text; // Get text from ComboBox
	String^ relation_name = editFamilyRelations->txtRelationName->Text;
	String^ relation_type = editFamilyRelations->txtRelationType->Text;
	String^ relation_document = editFamilyRelations->txtRelationDocument->Text;

	// Validate input fields
	if (String::IsNullOrEmpty(vpoText) || String::IsNullOrEmpty(relation_name) ||
		String::IsNullOrEmpty(relation_type) || String::IsNullOrEmpty(relation_document)) {
		MessageBox::Show("Будь ласка заповніть всі поля.", "Помилка!", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	sql::mysql::MySQL_Driver* driver = nullptr;
	sql::Connection* con = nullptr;
	sql::PreparedStatement* pstmt = nullptr;

	try {
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "gera123S!");
		con->setSchema("kursova_schema");

		// Extract the VPO ID from the vpoText
		int vpo = 0;
		System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("ID: (\\d+)");
		System::Text::RegularExpressions::Match^ match = regex->Match(vpoText);
		if (match->Success) {
			vpo = Int32::Parse(match->Groups[1]->Value); // Extract and parse the ID
		}
		else {
			throw gcnew System::FormatException("VPO ID not found in the selected text.");
		}

		// Prepare SQL update statement
		int id = Int32::Parse(relation_id); // Parse the ID of the record to update
		pstmt = con->prepareStatement("UPDATE family_relations SET vpo = ?, relation_name = ?, relation_type = ?, relation_document = ? WHERE id = ?");

		// Fill parameters for the update query
		pstmt->setInt(1, vpo);
		pstmt->setString(2, msclr::interop::marshal_as<std::string>(relation_name));
		pstmt->setString(3, msclr::interop::marshal_as<std::string>(relation_type));
		pstmt->setString(4, msclr::interop::marshal_as<std::string>(relation_document));
		pstmt->setInt(5, id); // ID of the record to update

		// Execute the update
		pstmt->executeUpdate();

		MessageBox::Show("Дані успішно оновлені!", "Успіх", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	catch (sql::SQLException& e) {
		String^ errorMsg = "Помилка SQL: " + gcnew String(e.what());
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
private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
};
}
