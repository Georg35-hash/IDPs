#pragma once

namespace KursovaApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddVPO
	/// </summary>
	public ref class AddVPO : public System::Windows::Forms::Form
	{
	public:
		AddVPO(void)
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
		~AddVPO()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Label^ lblRNOKPP;
	protected:

	public: System::Windows::Forms::TextBox^ txtGender;
	protected:


	public: System::Windows::Forms::Label^ lblName;
	public: System::Windows::Forms::DateTimePicker^ birthdayPicker;

	public: System::Windows::Forms::Label^ lblGender;
	private:
	public:
	private:
	public:

	private:

	public:

	private:

	public:

	public: System::Windows::Forms::TextBox^ txtMiddle;
	public: System::Windows::Forms::Label^ lblBirthday;

	private:


	public: System::Windows::Forms::Label^ lblMiddle;

	public:

	private:
	public: System::Windows::Forms::Button^ button2;
	public: System::Windows::Forms::Button^ button1;
	public: System::Windows::Forms::TextBox^ txtSurname;
	public: System::Windows::Forms::Label^ lblSurname;


	public: System::Windows::Forms::TextBox^ txtName;
	public: System::Windows::Forms::TextBox^ txtRNOKPP;
	public: System::Windows::Forms::TextBox^ txtNumber;
	public: System::Windows::Forms::Label^ lblNumber;
	public: System::Windows::Forms::TextBox^ txtRegion;

	public: System::Windows::Forms::Label^ lblRegion;
	public: System::Windows::Forms::TextBox^ txtAddress;

	public: System::Windows::Forms::Label^ lblAddress;



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
			this->lblRNOKPP = (gcnew System::Windows::Forms::Label());
			this->txtGender = (gcnew System::Windows::Forms::TextBox());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->birthdayPicker = (gcnew System::Windows::Forms::DateTimePicker());
			this->lblGender = (gcnew System::Windows::Forms::Label());
			this->txtMiddle = (gcnew System::Windows::Forms::TextBox());
			this->lblBirthday = (gcnew System::Windows::Forms::Label());
			this->lblMiddle = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtSurname = (gcnew System::Windows::Forms::TextBox());
			this->lblSurname = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtRNOKPP = (gcnew System::Windows::Forms::TextBox());
			this->txtNumber = (gcnew System::Windows::Forms::TextBox());
			this->lblNumber = (gcnew System::Windows::Forms::Label());
			this->txtRegion = (gcnew System::Windows::Forms::TextBox());
			this->lblRegion = (gcnew System::Windows::Forms::Label());
			this->txtAddress = (gcnew System::Windows::Forms::TextBox());
			this->lblAddress = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// lblRNOKPP
			// 
			this->lblRNOKPP->AutoSize = true;
			this->lblRNOKPP->Location = System::Drawing::Point(40, 320);
			this->lblRNOKPP->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRNOKPP->Name = L"lblRNOKPP";
			this->lblRNOKPP->Size = System::Drawing::Size(63, 16);
			this->lblRNOKPP->TabIndex = 40;
			this->lblRNOKPP->Text = L"RNOKPP";
			this->lblRNOKPP->Click += gcnew System::EventHandler(this, &AddVPO::label6_Click);
			// 
			// txtGender
			// 
			this->txtGender->Location = System::Drawing::Point(40, 280);
			this->txtGender->Margin = System::Windows::Forms::Padding(4);
			this->txtGender->Name = L"txtGender";
			this->txtGender->Size = System::Drawing::Size(416, 22);
			this->txtGender->TabIndex = 39;
			// 
			// lblName
			// 
			this->lblName->AutoSize = true;
			this->lblName->Location = System::Drawing::Point(40, 80);
			this->lblName->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(66, 16);
			this->lblName->TabIndex = 37;
			this->lblName->Text = L"Firstname";
			// 
			// birthdayPicker
			// 
			this->birthdayPicker->Location = System::Drawing::Point(40, 220);
			this->birthdayPicker->Margin = System::Windows::Forms::Padding(4);
			this->birthdayPicker->Name = L"birthdayPicker";
			this->birthdayPicker->Size = System::Drawing::Size(416, 22);
			this->birthdayPicker->TabIndex = 36;
			// 
			// lblGender
			// 
			this->lblGender->AutoSize = true;
			this->lblGender->Location = System::Drawing::Point(40, 260);
			this->lblGender->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblGender->Name = L"lblGender";
			this->lblGender->Size = System::Drawing::Size(30, 16);
			this->lblGender->TabIndex = 35;
			this->lblGender->Text = L"Sex";
			// 
			// txtMiddle
			// 
			this->txtMiddle->Location = System::Drawing::Point(40, 160);
			this->txtMiddle->Margin = System::Windows::Forms::Padding(4);
			this->txtMiddle->Name = L"txtMiddle";
			this->txtMiddle->Size = System::Drawing::Size(416, 22);
			this->txtMiddle->TabIndex = 32;
			// 
			// lblBirthday
			// 
			this->lblBirthday->AutoSize = true;
			this->lblBirthday->Location = System::Drawing::Point(40, 200);
			this->lblBirthday->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblBirthday->Name = L"lblBirthday";
			this->lblBirthday->Size = System::Drawing::Size(78, 16);
			this->lblBirthday->TabIndex = 31;
			this->lblBirthday->Text = L"Date of birth";
			// 
			// lblMiddle
			// 
			this->lblMiddle->AutoSize = true;
			this->lblMiddle->Location = System::Drawing::Point(40, 140);
			this->lblMiddle->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblMiddle->Name = L"lblMiddle";
			this->lblMiddle->Size = System::Drawing::Size(82, 16);
			this->lblMiddle->TabIndex = 29;
			this->lblMiddle->Text = L"Middlename";
			// 
			// button2
			// 
			this->button2->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(40, 640);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(416, 53);
			this->button2->TabIndex = 28;
			this->button2->Text = L"Enter";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AddVPO::button2_Click);
			// 
			// button1
			// 
			this->button1->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(40, 560);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(416, 53);
			this->button1->TabIndex = 27;
			this->button1->Text = L"Cancel";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// txtSurname
			// 
			this->txtSurname->Location = System::Drawing::Point(40, 40);
			this->txtSurname->Margin = System::Windows::Forms::Padding(4);
			this->txtSurname->Name = L"txtSurname";
			this->txtSurname->Size = System::Drawing::Size(416, 22);
			this->txtSurname->TabIndex = 26;
			// 
			// lblSurname
			// 
			this->lblSurname->AutoSize = true;
			this->lblSurname->Location = System::Drawing::Point(40, 20);
			this->lblSurname->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblSurname->Name = L"lblSurname";
			this->lblSurname->Size = System::Drawing::Size(66, 16);
			this->lblSurname->TabIndex = 25;
			this->lblSurname->Text = L"Lastname";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(40, 100);
			this->txtName->Margin = System::Windows::Forms::Padding(4);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(416, 22);
			this->txtName->TabIndex = 41;
			// 
			// txtRNOKPP
			// 
			this->txtRNOKPP->Location = System::Drawing::Point(40, 340);
			this->txtRNOKPP->Margin = System::Windows::Forms::Padding(4);
			this->txtRNOKPP->Name = L"txtRNOKPP";
			this->txtRNOKPP->Size = System::Drawing::Size(416, 22);
			this->txtRNOKPP->TabIndex = 42;
			// 
			// txtNumber
			// 
			this->txtNumber->Location = System::Drawing::Point(40, 400);
			this->txtNumber->Margin = System::Windows::Forms::Padding(4);
			this->txtNumber->Name = L"txtNumber";
			this->txtNumber->Size = System::Drawing::Size(416, 22);
			this->txtNumber->TabIndex = 44;
			// 
			// lblNumber
			// 
			this->lblNumber->AutoSize = true;
			this->lblNumber->Location = System::Drawing::Point(40, 380);
			this->lblNumber->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblNumber->Name = L"lblNumber";
			this->lblNumber->Size = System::Drawing::Size(131, 16);
			this->lblNumber->TabIndex = 43;
			this->lblNumber->Text = L"Number of document";
			// 
			// txtRegion
			// 
			this->txtRegion->Location = System::Drawing::Point(40, 460);
			this->txtRegion->Margin = System::Windows::Forms::Padding(4);
			this->txtRegion->Name = L"txtRegion";
			this->txtRegion->Size = System::Drawing::Size(416, 22);
			this->txtRegion->TabIndex = 46;
			// 
			// lblRegion
			// 
			this->lblRegion->AutoSize = true;
			this->lblRegion->Location = System::Drawing::Point(40, 440);
			this->lblRegion->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblRegion->Name = L"lblRegion";
			this->lblRegion->Size = System::Drawing::Size(134, 16);
			this->lblRegion->TabIndex = 45;
			this->lblRegion->Text = L"Region of registration";
			// 
			// txtAddress
			// 
			this->txtAddress->Location = System::Drawing::Point(40, 520);
			this->txtAddress->Margin = System::Windows::Forms::Padding(4);
			this->txtAddress->Name = L"txtAddress";
			this->txtAddress->Size = System::Drawing::Size(416, 22);
			this->txtAddress->TabIndex = 48;
			// 
			// lblAddress
			// 
			this->lblAddress->AutoSize = true;
			this->lblAddress->Location = System::Drawing::Point(40, 500);
			this->lblAddress->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->lblAddress->Name = L"lblAddress";
			this->lblAddress->Size = System::Drawing::Size(133, 16);
			this->lblAddress->TabIndex = 47;
			this->lblAddress->Text = L"Adress of registration";
			// 
			// AddVPO
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(502, 713);
			this->Controls->Add(this->txtAddress);
			this->Controls->Add(this->lblAddress);
			this->Controls->Add(this->txtRegion);
			this->Controls->Add(this->lblRegion);
			this->Controls->Add(this->txtNumber);
			this->Controls->Add(this->lblNumber);
			this->Controls->Add(this->txtRNOKPP);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblRNOKPP);
			this->Controls->Add(this->txtGender);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->birthdayPicker);
			this->Controls->Add(this->lblGender);
			this->Controls->Add(this->txtMiddle);
			this->Controls->Add(this->lblBirthday);
			this->Controls->Add(this->lblMiddle);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->txtSurname);
			this->Controls->Add(this->lblSurname);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddVPO";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Додати внутрішньо переміщену особу";
			this->Load += gcnew System::EventHandler(this, &AddVPO::AddVPO_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AddVPO_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
