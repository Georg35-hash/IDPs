#pragma once

namespace KursovaApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dovidka
	/// </summary>
	public ref class Dovidka : public System::Windows::Forms::Form
	{
	public:
		Dovidka(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dovidka()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::Label^ lblInfo;
	public: System::Windows::Forms::Button^ buttonOK;
	public: System::Windows::Forms::LinkLabel^ linkInstruction;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Dovidka::typeid));
			this->lblInfo = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->linkInstruction = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// lblInfo
			// 
			this->lblInfo->AutoSize = true;
			this->lblInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblInfo->Location = System::Drawing::Point(99, 9);
			this->lblInfo->Name = L"lblInfo";
			this->lblInfo->Size = System::Drawing::Size(499, 250);
			this->lblInfo->TabIndex = 0;
			this->lblInfo->Text = resources->GetString(L"lblInfo.Text");
			this->lblInfo->Click += gcnew System::EventHandler(this, &Dovidka::lblInfo_Click);
			// 
			// buttonOK
			// 
			this->buttonOK->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->buttonOK->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12));
			this->buttonOK->ForeColor = System::Drawing::SystemColors::ControlText;
			this->buttonOK->Location = System::Drawing::Point(275, 290);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(201, 38);
			this->buttonOK->TabIndex = 1;
			this->buttonOK->Text = L"OK";
			this->buttonOK->UseVisualStyleBackColor = false;
			this->buttonOK->Click += gcnew System::EventHandler(this, &Dovidka::buttonOK_Click);
			// 
			// linkInstruction
			// 
			this->linkInstruction->AutoSize = true;
			this->linkInstruction->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->linkInstruction->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->linkInstruction->Location = System::Drawing::Point(479, 259);
			this->linkInstruction->Name = L"linkInstruction";
			this->linkInstruction->Size = System::Drawing::Size(119, 25);
			this->linkInstruction->TabIndex = 2;
			this->linkInstruction->TabStop = true;
			this->linkInstruction->Text = L"How to use";
			this->linkInstruction->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Dovidka::linkInstruction_LinkClicked);
			// 
			// Dovidka
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(730, 353);
			this->Controls->Add(this->linkInstruction);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->lblInfo);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Dovidka";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Information";
			this->Load += gcnew System::EventHandler(this, &Dovidka::Dovidka_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void linkInstruction_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		System::Diagnostics::Process::Start("C:/Users/Соня/Desktop/KursovaApp1/Інструкція/інструкція.txt");
	}
	private: System::Void lblInfo_Click(System::Object^ sender, System::EventArgs^ e) {
			}
	private: System::Void Dovidka_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};

}
