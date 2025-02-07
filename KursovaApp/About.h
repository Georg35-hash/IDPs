#pragma once

namespace KursovaApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for About
	/// </summary>
	public ref class About : public System::Windows::Forms::Form
	{
	public:
		About(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~About()
		{
			if (components)
			{
				delete components;
			}
		}

	public: System::Windows::Forms::Label^ lblAbout;
	public: System::Windows::Forms::Button^ buttonOK;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(About::typeid));
			this->lblAbout = (gcnew System::Windows::Forms::Label());
			this->buttonOK = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// lblAbout
			// 
			this->lblAbout->AutoSize = true;
			this->lblAbout->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblAbout->Location = System::Drawing::Point(52, 43);
			this->lblAbout->Name = L"lblAbout";
			this->lblAbout->Size = System::Drawing::Size(563, 195);
			this->lblAbout->TabIndex = 0;
			this->lblAbout->Text = L"�������� ������ ��������: \r\n����� ��������: +380995286784.\r\nE-mail: geher234@gma"
				L"il.com\r\n\r\n\r\n";
			this->lblAbout->Click += gcnew System::EventHandler(this, &About::lblAbout_Click);
			// 
			// buttonOK
			// 
			this->buttonOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->buttonOK->DialogResult = System::Windows::Forms::DialogResult::OK;
			this->buttonOK->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->buttonOK->FlatAppearance->BorderSize = 2;
			this->buttonOK->FlatAppearance->MouseDownBackColor = System::Drawing::Color::White;
			this->buttonOK->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonOK->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonOK->Location = System::Drawing::Point(235, 241);
			this->buttonOK->Name = L"buttonOK";
			this->buttonOK->Size = System::Drawing::Size(175, 38);
			this->buttonOK->TabIndex = 1;
			this->buttonOK->Text = L"�����";
			this->buttonOK->UseVisualStyleBackColor = true;
			this->buttonOK->Click += gcnew System::EventHandler(this, &About::buttonOK_Click);
			// 
			// About
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 353);
			this->Controls->Add(this->buttonOK);
			this->Controls->Add(this->lblAbout);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"About";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��� ��������";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void buttonOK_Click(System::Object^ sender, System::EventArgs^ e) {
		this->DialogResult = System::Windows::Forms::DialogResult::OK;
		this->Close();
	}
	private: System::Void lblAbout_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("�� ��������� �� ���������� ��� ��������.");
	}
	};
}
