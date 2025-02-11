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
	/// Summary for AddRelocations
	/// </summary>
	public ref class AddRelocations : public System::Windows::Forms::Form
	{
	public:
		AddRelocations(void)
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
		~AddRelocations()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:




	public: System::Windows::Forms::Label^ lblNumber;
	public: System::Windows::Forms::TextBox^ txtEmployment;

	public: System::Windows::Forms::Label^ lblEmployment;



	public: System::Windows::Forms::TextBox^ txtRelocationRegion;


	public: System::Windows::Forms::DateTimePicker^ relocationDatePicker;
	public: System::Windows::Forms::Label^ lblRelocationRegion;



	public: System::Windows::Forms::Label^ lblDateRelocation;



	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::Label^ lblVPO;
	public: System::Windows::Forms::ComboBox^ comboBox1;

	public: System::Windows::Forms::TextBox^ txtRelocationAddress;
	private:
	public: System::Windows::Forms::Label^ lblRelocationAddress;
	public: System::Windows::Forms::TextBox^ txtAssistance;

	public: System::Windows::Forms::Label^ lblAssistance;
	public: System::Windows::Forms::ComboBox^ comboBox2;

	public: System::Windows::Forms::ComboBox^ comboBox3;
	private:
	public:

	public: System::Windows::Forms::Label^ lblManager;
	private:


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
			this->lblNumber = (gcnew System::Windows::Forms::Label());
			this->txtEmployment = (gcnew System::Windows::Forms::TextBox());
			this->lblEmployment = (gcnew System::Windows::Forms::Label());
			this->txtRelocationRegion = (gcnew System::Windows::Forms::TextBox());
			this->relocationDatePicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblRelocationRegion = (gcnew System::Windows::Forms::Label());
			this->lblDateRelocation = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lblVPO = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->txtRelocationAddress = (gcnew System::Windows::Forms::TextBox());
			this->lblRelocationAddress = (gcnew System::Windows::Forms::Label());
			this->txtAssistance = (gcnew System::Windows::Forms::TextBox());
			this->lblAssistance = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->lblManager = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblNumber
			// 
			this->lblNumber->AutoSize = true;
			this->lblNumber->Location = System::Drawing::Point(40, 380);
			this->lblNumber->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNumber->Name = L"lblNumber";
			this->lblNumber->Size = System::Drawing::Size(44, 16);
			this->lblNumber->TabIndex = 63;
			this->lblNumber->Text = L"Status";
			// 
			// txtEmployment
			// 
			this->txtEmployment->Location = System::Drawing::Point(40, 340);
			this->txtEmployment->Margin = System::Windows::Forms::Padding(4);
			this->txtEmployment->Name = L"txtEmployment";
			this->txtEmployment->Size = System::Drawing::Size(416, 22);
			this->txtEmployment->TabIndex = 62;
			// 
			// lblEmployment
			// 
			this->lblEmployment->AutoSize = true;
			this->lblEmployment->Location = System::Drawing::Point(40, 320);
			this->lblEmployment->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblEmployment->Name = L"lblEmployment";
			this->lblEmployment->Size = System::Drawing::Size(211, 16);
			this->lblEmployment->TabIndex = 60;
			this->lblEmployment->Text = L"Availability of employment (так/ні)";
			// 
			// txtRelocationRegion
			// 
			this->txtRelocationRegion->Location = System::Drawing::Point(40, 160);
			this->txtRelocationRegion->Margin = System::Windows::Forms::Padding(4);
			this->txtRelocationRegion->Name = L"txtRelocationRegion";
			this->txtRelocationRegion->Size = System::Drawing::Size(416, 22);
			this->txtRelocationRegion->TabIndex = 59;
			// 
			// relocationDatePicker
			// 
			this->relocationDatePicker->CalendarMonthBackground = System::Drawing::SystemColors::HotTrack;
			this->relocationDatePicker->CalendarTrailingForeColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->relocationDatePicker->Location = System::Drawing::Point(40, 100);
			this->relocationDatePicker->Margin = System::Windows::Forms::Padding(4);
			this->relocationDatePicker->Name = L"relocationDatePicker";
			this->relocationDatePicker->Size = System::Drawing::Size(416, 22);
			this->relocationDatePicker->TabIndex = 57;
			this->relocationDatePicker->ValueChanged += gcnew System::EventHandler(this, &AddRelocations::relocationDatePicker_ValueChanged);
			// 
			// lblRelocationRegion
			// 
			this->lblRelocationRegion->AutoSize = true;
			this->lblRelocationRegion->Location = System::Drawing::Point(40, 140);
			this->lblRelocationRegion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRelocationRegion->Name = L"lblRelocationRegion";
			this->lblRelocationRegion->Size = System::Drawing::Size(127, 16);
			this->lblRelocationRegion->TabIndex = 56;
			this->lblRelocationRegion->Text = L"Region of relocation";
			// 
			// lblDateRelocation
			// 
			this->lblDateRelocation->AutoSize = true;
			this->lblDateRelocation->Location = System::Drawing::Point(40, 80);
			this->lblDateRelocation->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblDateRelocation->Name = L"lblDateRelocation";
			this->lblDateRelocation->Size = System::Drawing::Size(112, 16);
			this->lblDateRelocation->TabIndex = 54;
			this->lblDateRelocation->Text = L"Date of relocation";
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(40, 580);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(416, 53);
			this->button2->TabIndex = 52;
			this->button2->Text = L"Enter";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(40, 500);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(416, 53);
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
			this->lblVPO->Size = System::Drawing::Size(36, 16);
			this->lblVPO->TabIndex = 49;
			this->lblVPO->Text = L"IDPs";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(40, 40);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(416, 24);
			this->comboBox1->TabIndex = 69;
			this->comboBox1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddRelocations::comboBox1_MouseClick);
			// 
			// txtRelocationAddress
			// 
			this->txtRelocationAddress->Location = System::Drawing::Point(40, 220);
			this->txtRelocationAddress->Margin = System::Windows::Forms::Padding(4);
			this->txtRelocationAddress->Name = L"txtRelocationAddress";
			this->txtRelocationAddress->Size = System::Drawing::Size(416, 22);
			this->txtRelocationAddress->TabIndex = 71;
			// 
			// lblRelocationAddress
			// 
			this->lblRelocationAddress->AutoSize = true;
			this->lblRelocationAddress->Location = System::Drawing::Point(40, 200);
			this->lblRelocationAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRelocationAddress->Name = L"lblRelocationAddress";
			this->lblRelocationAddress->Size = System::Drawing::Size(126, 16);
			this->lblRelocationAddress->TabIndex = 70;
			this->lblRelocationAddress->Text = L"Adress of relocation";
			// 
			// txtAssistance
			// 
			this->txtAssistance->Location = System::Drawing::Point(40, 280);
			this->txtAssistance->Margin = System::Windows::Forms::Padding(4);
			this->txtAssistance->Name = L"txtAssistance";
			this->txtAssistance->Size = System::Drawing::Size(416, 22);
			this->txtAssistance->TabIndex = 73;
			// 
			// lblAssistance
			// 
			this->lblAssistance->AutoSize = true;
			this->lblAssistance->Location = System::Drawing::Point(40, 260);
			this->lblAssistance->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAssistance->Name = L"lblAssistance";
			this->lblAssistance->Size = System::Drawing::Size(206, 16);
			this->lblAssistance->TabIndex = 72;
			this->lblAssistance->Text = L"Availability of assistance (yes/no)";
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Displaced", L"Assistance provided", L"Employed" });
			this->comboBox2->Location = System::Drawing::Point(40, 400);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(416, 24);
			this->comboBox2->TabIndex = 74;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Displaced", L"Assistance provided", L"Employed" });
			this->comboBox3->Location = System::Drawing::Point(40, 460);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(416, 24);
			this->comboBox3->TabIndex = 76;
			this->comboBox3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &AddRelocations::comboBox3_MouseClick);
			// 
			// lblManager
			// 
			this->lblManager->AutoSize = true;
			this->lblManager->Location = System::Drawing::Point(40, 440);
			this->lblManager->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblManager->Name = L"lblManager";
			this->lblManager->Size = System::Drawing::Size(61, 16);
			this->lblManager->TabIndex = 75;
			this->lblManager->Text = L"Manager";
			// 
			// AddRelocations
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 653);
			this->Controls->Add(this->comboBox3);
			this->Controls->Add(this->lblManager);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->txtAssistance);
			this->Controls->Add(this->lblAssistance);
			this->Controls->Add(this->txtRelocationAddress);
			this->Controls->Add(this->lblRelocationAddress);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->lblNumber);
			this->Controls->Add(this->txtEmployment);
			this->Controls->Add(this->lblEmployment);
			this->Controls->Add(this->txtRelocationRegion);
			this->Controls->Add(this->relocationDatePicker);
			this->Controls->Add(this->lblRelocationRegion);
			this->Controls->Add(this->lblDateRelocation);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->lblVPO);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddRelocations";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AddRelocations";
			this->Load += gcnew System::EventHandler(this, &AddRelocations::AddRelocations_Load);
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
private: System::Void comboBox3_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	comboBox3->Items->Clear();
	sql::mysql::MySQL_Driver* driver;
	sql::Connection* con;
	sql::PreparedStatement* pstmt;
	sql::ResultSet* res;
	try {
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "admin");
		con->setSchema("kursova_schema");

		// Change query to select VPO IDs alongside last names
		pstmt = con->prepareStatement("SELECT id, full_name FROM managers"); // Assuming `id` is the VPO ID column
		res = pstmt->executeQuery();

		while (res->next()) {
			// Get VPO ID and last name
			int id = res->getInt("id"); // Get the integer VPO ID
			System::String^ full_name = gcnew System::String(res->getString("full_name").c_str());

			// Add the last name to the combo box
			comboBox3->Items->Add(full_name + " " + "(ID: " + id.ToString() + ")"); // Show ID in combo box
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
private: System::Void AddRelocations_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void relocationDatePicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
