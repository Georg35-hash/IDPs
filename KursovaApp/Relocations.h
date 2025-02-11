#pragma once
#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/prepared_statement.h>
#include <cppconn/resultset.h>
#include <msclr/marshal.h>
#include <msclr/marshal_cppstd.h>
#include "AddRelocations.h"
namespace KursovaApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Relocations
	/// </summary>
	public ref class Relocations : public System::Windows::Forms::Form
	{
	public:
		Relocations(void)
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
		~Relocations()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStripButton^ toolStripButton6;
	protected:
	private: System::Windows::Forms::ToolStripButton^ toolStripButton3;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton4;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column11;












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Relocations::typeid));
			this->toolStripButton6 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton3 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton2 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripButton4 = (gcnew System::Windows::Forms::ToolStripButton());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
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
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// toolStripButton6
			// 
			this->toolStripButton6->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripButton6->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Image;
			this->toolStripButton6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton6.Image")));
			this->toolStripButton6->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton6->Name = L"toolStripButton6";
			this->toolStripButton6->Size = System::Drawing::Size(29, 30);
			this->toolStripButton6->Text = L"toolStripButton6";
			this->toolStripButton6->Click += gcnew System::EventHandler(this, &Relocations::toolStripButton6_Click);
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
			this->toolStripButton3->Click += gcnew System::EventHandler(this, &Relocations::toolStripButton3_Click);
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
			this->toolStripButton2->Click += gcnew System::EventHandler(this, &Relocations::toolStripButton2_Click);
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
			this->toolStripButton1->Click += gcnew System::EventHandler(this, &Relocations::toolStripButton1_Click);
			// 
			// toolStrip1
			// 
			this->toolStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->toolStripButton1,
					this->toolStripButton2, this->toolStripButton3, this->toolStripButton4, this->toolStripButton6
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1472, 33);
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
			this->toolStripButton4->Click += gcnew System::EventHandler(this, &Relocations::toolStripButton4_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->BackgroundColor = System::Drawing::SystemColors::ActiveCaption;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->Column1,
					this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10,
					this->Column11
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->dataGridView1->Location = System::Drawing::Point(0, 147);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(1472, 406);
			this->dataGridView1->TabIndex = 11;
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
			this->Column5->HeaderText = L"Data of relocation";
			this->Column5->MinimumWidth = 6;
			this->Column5->Name = L"Column5";
			this->Column5->Width = 125;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Region of relocation";
			this->Column6->MinimumWidth = 6;
			this->Column6->Name = L"Column6";
			this->Column6->Width = 125;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Relocation address";
			this->Column7->MinimumWidth = 6;
			this->Column7->Name = L"Column7";
			this->Column7->Width = 125;
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"Help";
			this->Column8->MinimumWidth = 6;
			this->Column8->Name = L"Column8";
			this->Column8->Width = 125;
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"Job placement";
			this->Column9->MinimumWidth = 6;
			this->Column9->Name = L"Column9";
			this->Column9->Width = 125;
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"Status";
			this->Column10->MinimumWidth = 6;
			this->Column10->Name = L"Column10";
			this->Column10->Width = 125;
			// 
			// Column11
			// 
			this->Column11->HeaderText = L"Manager";
			this->Column11->MinimumWidth = 6;
			this->Column11->Name = L"Column11";
			this->Column11->Width = 125;
			// 
			// Relocations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1472, 553);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->dataGridView1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Relocations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Relocations";
			this->Load += gcnew System::EventHandler(this, &Relocations::Relocations_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Relocations_Load(System::Object^ sender, System::EventArgs^ e) {
		sql::mysql::MySQL_Driver* driver;
		sql::Connection* con;
		sql::PreparedStatement* pstmt;
		sql::ResultSet* res;
		try {
			driver = sql::mysql::get_mysql_driver_instance();
			con = driver->connect("tcp://127.0.0.1:3306", "root", "admin");
			con->setSchema("kursova_schema");

			pstmt = con->prepareStatement("SELECT relocations.id, vpo.last_name as ln, vpo.first_name as fn, vpo.middle_name as mn, relocations.relocation_date as rd, relocations.relocation_region as rr, relocations.relocation_address as ra, relocations.assistance as a, relocations.employment as e, relocations.status as s, managers.full_name as fn FROM relocations INNER JOIN vpo ON relocations.vpo_id = vpo.id INNER JOIN managers ON relocations.manager_id = managers.id");
			res = pstmt->executeQuery();

			dataGridView1->Rows->Clear();

			while (res->next()) {
				int rowIndex = dataGridView1->Rows->Add();
				DataGridViewRow^ row = dataGridView1->Rows[rowIndex];
				row->Cells[0]->Value = gcnew String(res->getString("id").c_str());
				row->Cells[1]->Value = gcnew String(res->getString("ln").c_str());
				row->Cells[2]->Value = gcnew String(res->getString("fn").c_str());
				row->Cells[3]->Value = gcnew String(res->getString("mn").c_str());
				row->Cells[4]->Value = gcnew String(res->getString("rd").c_str());
				row->Cells[5]->Value = gcnew String(res->getString("rr").c_str());
				row->Cells[6]->Value = gcnew String(res->getString("ra").c_str());
				row->Cells[7]->Value = gcnew String(res->getString("a").c_str());
				row->Cells[8]->Value = gcnew String(res->getString("e").c_str());
				row->Cells[9]->Value = gcnew String(res->getString("s").c_str());
				row->Cells[10]->Value = gcnew String(res->getString("fn").c_str());
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
private: System::Void toolStripButton1_Click(System::Object^ sender, System::EventArgs^ e) {
	AddRelocations^ addRelocations = gcnew AddRelocations();
	this->Hide();
	addRelocations->ShowDialog();
	String^ vpoText = addRelocations->comboBox1->Text;
	String^ relocationDate = addRelocations->relocationDatePicker->Value.ToString("yyyy-MM-dd");
	String^ relocationRegion = addRelocations->txtRelocationRegion->Text;
	String^ relocationAddress = addRelocations->txtRelocationAddress->Text;
	String^ assistance = addRelocations->txtAssistance->Text;
	String^ employment = addRelocations->txtEmployment->Text;
	String^ status = addRelocations->comboBox2->Text;
	String^ managerText = addRelocations->comboBox3->Text;

	if (String::IsNullOrEmpty(vpoText) || String::IsNullOrEmpty(relocationDate) ||
		String::IsNullOrEmpty(relocationRegion) || String::IsNullOrEmpty(relocationAddress) ||
		String::IsNullOrEmpty(assistance) || String::IsNullOrEmpty(employment) || 
		String::IsNullOrEmpty(status) || String::IsNullOrEmpty(managerText)) {
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
		int vpo = 0;
		// Regular expression to match the ID from the string
		System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("ID: (\\d+)");
		System::Text::RegularExpressions::Match^ match = regex->Match(vpoText);
		if (match->Success) {
			vpo = Int32::Parse(match->Groups[1]->Value); // Extract and parse the ID
		}
		else {
			throw gcnew System::FormatException("VPO ID not found in the selected text.");
		}
		int manager = 0;
		// Regular expression to match the ID from the string
		System::Text::RegularExpressions::Regex^ regex1 = gcnew System::Text::RegularExpressions::Regex("ID: (\\d+)");
		System::Text::RegularExpressions::Match^ match1 = regex1->Match(managerText);
		if (match1->Success) {
			manager = Int32::Parse(match1->Groups[1]->Value); // Extract and parse the ID
		}
		else {
			throw gcnew System::FormatException("Manager ID not found in the selected text.");
		}

		// Prepare SQL insert statement
		pstmt = con->prepareStatement("INSERT INTO relocations (vpo_id, relocation_date, relocation_region, relocation_address, assistance, employment, status, manager_id) VALUES (?, ?, ?, ?, ?, ?, ?, ?)");
		pstmt->setInt(1, vpo); // Set the integer vpo
		pstmt->setString(2, msclr::interop::marshal_as<std::string>(relocationDate));
		pstmt->setString(3, msclr::interop::marshal_as<std::string>(relocationRegion));
		pstmt->setString(4, msclr::interop::marshal_as<std::string>(relocationAddress));
		pstmt->setString(5, msclr::interop::marshal_as<std::string>(assistance));
		pstmt->setString(6, msclr::interop::marshal_as<std::string>(employment));
		pstmt->setString(7, msclr::interop::marshal_as<std::string>(status));
		pstmt->setInt(8, manager);

		// Execute the insert
		pstmt->executeUpdate();

		MessageBox::Show("Family relation added successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
private: System::Void toolStripButton4_Click(System::Object^ sender, System::EventArgs^ e) {
	Relocations_Load(sender, e);
}
private: System::Void toolStripButton3_Click(System::Object^ sender, System::EventArgs^ e) {
	if (dataGridView1->CurrentRow == nullptr || dataGridView1->CurrentRow->Cells[0]->Value == nullptr) {
		MessageBox::Show("Please select a row to delete", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		return;
	}

	try {
		int recordId = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
		std::unique_ptr<sql::Connection> conn(driver->connect("tcp://localhost:3306", "root", "admin"));
		conn->setSchema("kursova_schema");

		std::unique_ptr<sql::PreparedStatement> pstmt(conn->prepareStatement("DELETE FROM relocations WHERE id = ?"));
		int recordId1 = Int32::Parse(dataGridView1->CurrentRow->Cells[0]->Value->ToString());
		pstmt->setInt(1, recordId1);
		int rowsAffected = pstmt->executeUpdate();

		if (rowsAffected > 0) {
			MessageBox::Show("Data successfully deleted!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
		else {
			MessageBox::Show("Record not found or not changed.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}

	}
	catch (sql::SQLException& e) {
		String^ errorMsg = "Error SQL: " + gcnew String(e.what());
		errorMsg += "\nError Code: " + e.getErrorCode();
		MessageBox::Show(errorMsg, "Database Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void toolStripButton2_Click(System::Object^ sender, System::EventArgs^ e) {
	// Check if a row is selected
	if (dataGridView1->CurrentRow == nullptr) {
		MessageBox::Show("Please select a family relation to edit.", "Selection Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		return;
	}

	// Open edit form
	AddRelocations^ editRelocations = gcnew AddRelocations();
	this->Hide();
	editRelocations->button2->Text = "Edit";
	editRelocations->Text = "Edit Relocation";

	// Get the ID of the record to be edited
	String^ relocation_id = dataGridView1->CurrentRow->Cells[0]->Value->ToString(); // Assume ID is in the first column
	editRelocations->relocationDatePicker->Text = dataGridView1->CurrentRow->Cells[4]->Value->ToString();
	editRelocations->txtRelocationRegion->Text = dataGridView1->CurrentRow->Cells[5]->Value->ToString();
	editRelocations->txtRelocationAddress->Text = dataGridView1->CurrentRow->Cells[6]->Value->ToString();
	editRelocations->txtAssistance->Text = dataGridView1->CurrentRow->Cells[7]->Value->ToString();
	editRelocations->txtEmployment->Text = dataGridView1->CurrentRow->Cells[8]->Value->ToString();

	// Show the dialog for editing
	editRelocations->ShowDialog();

	// Retrieve values from input fields after the dialog is closed
	String^ vpoText = editRelocations->comboBox1->Text; // Get text from ComboBox
	String^ relocationDate = editRelocations->relocationDatePicker->Value.ToString("yyyy-MM-dd");
	String^ relocationRegion = editRelocations->txtRelocationRegion->Text;
	String^ relocationAddress = editRelocations->txtRelocationAddress->Text;
	String^ assistance = editRelocations->txtAssistance->Text;
	String^ employment = editRelocations->txtEmployment->Text;
	String^ status = editRelocations->comboBox2->Text;
	String^ managerText = editRelocations->comboBox3->Text;

	if (String::IsNullOrEmpty(vpoText) || String::IsNullOrEmpty(relocationDate) ||
		String::IsNullOrEmpty(relocationRegion) || String::IsNullOrEmpty(relocationAddress) ||
		String::IsNullOrEmpty(assistance) || String::IsNullOrEmpty(employment) ||
		String::IsNullOrEmpty(status) || String::IsNullOrEmpty(managerText)) {
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
		int vpo = 0;
		System::Text::RegularExpressions::Regex^ regex = gcnew System::Text::RegularExpressions::Regex("ID: (\\d+)");
		System::Text::RegularExpressions::Match^ match = regex->Match(vpoText);
		if (match->Success) {
			vpo = Int32::Parse(match->Groups[1]->Value); // Extract and parse the ID
		}
		else {
			throw gcnew System::FormatException("VPO ID not found in the selected text.");
		}

		int manager = 0;
		// Regular expression to match the ID from the string
		System::Text::RegularExpressions::Regex^ regex1 = gcnew System::Text::RegularExpressions::Regex("ID: (\\d+)");
		System::Text::RegularExpressions::Match^ match1 = regex1->Match(managerText);
		if (match1->Success) {
			manager = Int32::Parse(match1->Groups[1]->Value); // Extract and parse the ID
		}
		else {
			throw gcnew System::FormatException("Manager ID not found in the selected text.");
		}

		// Prepare SQL update statement
		int id = Int32::Parse(relocation_id); // Parse the ID of the record to update
		pstmt = con->prepareStatement("UPDATE relocations SET vpo_id = ?, relocation_date = ?, relocation_region = ?, relocation_address = ?, assistance = ?, employment = ?, status = ?, manager_id = ? WHERE id = ?");

		// Fill parameters for the update query
		pstmt->setInt(1, vpo); // Set the integer vpo
		pstmt->setString(2, msclr::interop::marshal_as<std::string>(relocationDate));
		pstmt->setString(3, msclr::interop::marshal_as<std::string>(relocationRegion));
		pstmt->setString(4, msclr::interop::marshal_as<std::string>(relocationAddress));
		pstmt->setString(5, msclr::interop::marshal_as<std::string>(assistance));
		pstmt->setString(6, msclr::interop::marshal_as<std::string>(employment));
		pstmt->setString(7, msclr::interop::marshal_as<std::string>(status));
		pstmt->setInt(8, manager);
		pstmt->setInt(9, id);

		// Execute the update
		pstmt->executeUpdate();

		MessageBox::Show("Family relation updated successfully!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
private: System::Void toolStripButton6_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close(); // Закриває Relocation.h
}
};
}
