//#pragma once
//
//namespace KursovaApp {
//
//	using namespace System;
//	using namespace System::Windows::Forms;
//
//	public ref class ReportCriteriaForm : public Form
//	{
//	public:
//		ReportCriteriaForm(void)
//		{
//			InitializeComponent();
//		}
//
//	protected:
//		~ReportCriteriaForm()
//		{
//			if (components)
//			{
//				delete components;
//			}
//		}
//
//	private:
//		System::Windows::Forms::DateTimePicker^ dateTimePicker;
//		System::Windows::Forms::TextBox^ textBoxId;
//		System::Windows::Forms::ComboBox^ comboBoxCategory;
//		System::Windows::Forms::Button^ btnOK;
//		System::Windows::Forms::Button^ btnCancel;
//
//	private:
//		System::ComponentModel::Container^ components;
//
//		void InitializeComponent(void)
//		{
//			this->dateTimePicker = (gcnew System::Windows::Forms::DateTimePicker());
//			this->textBoxId = (gcnew System::Windows::Forms::TextBox());
//			this->comboBoxCategory = (gcnew System::Windows::Forms::ComboBox());
//			this->btnOK = (gcnew System::Windows::Forms::Button());
//			this->btnCancel = (gcnew System::Windows::Forms::Button());
//			this->SuspendLayout();
//			// 
//			// dateTimePicker
//			// 
//			this->dateTimePicker->Format = System::Windows::Forms::DateTimePickerFormat::Short;
//			this->dateTimePicker->Location = System::Drawing::Point(15, 30);
//			this->dateTimePicker->Name = L"dateTimePicker";
//			this->dateTimePicker->Size = System::Drawing::Size(200, 22);
//			this->dateTimePicker->TabIndex = 0;
//			// 
//			// textBoxId
//			// 
//			this->textBoxId->Location = System::Drawing::Point(15, 70);
//			this->textBoxId->Name = L"textBoxId";
//			this->textBoxId->Size = System::Drawing::Size(200, 22);
//			this->textBoxId->TabIndex = 1;
//			// 
//			// comboBoxCategory
//			// 
//			this->comboBoxCategory->FormattingEnabled = true;
//			this->comboBoxCategory->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Category1", L"Category2", L"Category3" });
//			this->comboBoxCategory->Location = System::Drawing::Point(15, 110);
//			this->comboBoxCategory->Name = L"comboBoxCategory";
//			this->comboBoxCategory->Size = System::Drawing::Size(200, 24);
//			this->comboBoxCategory->TabIndex = 2;
//			// 
//			// btnOK
//			// 
//			this->btnOK->DialogResult = System::Windows::Forms::DialogResult::OK;
//			this->btnOK->Location = System::Drawing::Point(15, 150);
//			this->btnOK->Name = L"btnOK";
//			this->btnOK->Size = System::Drawing::Size(75, 23);
//			this->btnOK->TabIndex = 3;
//			this->btnOK->Text = L"OK";
//			this->btnOK->UseVisualStyleBackColor = true;
//			// 
//			// btnCancel
//			// 
//			this->btnCancel->DialogResult = System::Windows::Forms::DialogResult::Cancel;
//			this->btnCancel->Location = System::Drawing::Point(140, 150);
//			this->btnCancel->Name = L"btnCancel";
//			this->btnCancel->Size = System::Drawing::Size(75, 23);
//			this->btnCancel->TabIndex = 4;
//			this->btnCancel->Text = L"Cancel";
//			this->btnCancel->UseVisualStyleBackColor = true;
//			// 
//			// ReportCriteriaForm
//			// 
//			this->AcceptButton = this->btnOK;
//			this->CancelButton = this->btnCancel;
//			this->ClientSize = System::Drawing::Size(250, 200);
//			this->Controls->Add(this->btnCancel);
//			this->Controls->Add(this->btnOK);
//			this->Controls->Add(this->comboBoxCategory);
//			this->Controls->Add(this->textBoxId);
//			this->Controls->Add(this->dateTimePicker);
//			this->Name = L"ReportCriteriaForm";
//			this->Text = L"Фільтрація звіту";
//			this->Load += gcnew System::EventHandler(this, &ReportCriteriaForm::ReportCriteriaForm_Load);
//			this->ResumeLayout(false);
//			this->PerformLayout();
//
//		}
//	private: System::Void ReportCriteriaForm_Load(System::Object^ sender, System::EventArgs^ e) {
//	}
//	};
//}


