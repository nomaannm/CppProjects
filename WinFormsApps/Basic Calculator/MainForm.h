#pragma once

auto valueTB1 = 0;
auto valueTB2 = 0;



namespace FirstCPPApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	protected:
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ plusBtn;
	private: System::Windows::Forms::Button^ divideBtn;
	private: System::Windows::Forms::Button^ multiplyBtn;
	private: System::Windows::Forms::Button^ minusBtn;
	private: System::Windows::Forms::TextBox^ result;

	protected:

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
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->plusBtn = (gcnew System::Windows::Forms::Button());
			this->divideBtn = (gcnew System::Windows::Forms::Button());
			this->multiplyBtn = (gcnew System::Windows::Forms::Button());
			this->minusBtn = (gcnew System::Windows::Forms::Button());
			this->result = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->Title->Font = (gcnew System::Drawing::Font(L"Adobe Garamond Pro Bold", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Title->Location = System::Drawing::Point(219, 79);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(109, 24);
			this->Title->TabIndex = 0;
			this->Title->Text = L"FirstCPPApp\r\n";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(82, 170);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(219, 170);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 2;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox2_TextChanged);
			// 
			// plusBtn
			// 
			this->plusBtn->Location = System::Drawing::Point(456, 178);
			this->plusBtn->Name = L"plusBtn";
			this->plusBtn->Size = System::Drawing::Size(33, 23);
			this->plusBtn->TabIndex = 3;
			this->plusBtn->Text = L"+";
			this->plusBtn->UseVisualStyleBackColor = true;
			this->plusBtn->Click += gcnew System::EventHandler(this, &MainForm::plusBtn_Click);
			// 
			// divideBtn
			// 
			this->divideBtn->Location = System::Drawing::Point(456, 265);
			this->divideBtn->Name = L"divideBtn";
			this->divideBtn->Size = System::Drawing::Size(33, 23);
			this->divideBtn->TabIndex = 4;
			this->divideBtn->Text = L"/";
			this->divideBtn->UseVisualStyleBackColor = true;
			// 
			// multiplyBtn
			// 
			this->multiplyBtn->Location = System::Drawing::Point(456, 236);
			this->multiplyBtn->Name = L"multiplyBtn";
			this->multiplyBtn->Size = System::Drawing::Size(33, 23);
			this->multiplyBtn->TabIndex = 5;
			this->multiplyBtn->Text = L"*";
			this->multiplyBtn->UseVisualStyleBackColor = true;
			// 
			// minusBtn
			// 
			this->minusBtn->Location = System::Drawing::Point(456, 207);
			this->minusBtn->Name = L"minusBtn";
			this->minusBtn->Size = System::Drawing::Size(33, 23);
			this->minusBtn->TabIndex = 6;
			this->minusBtn->Text = L"-";
			this->minusBtn->UseVisualStyleBackColor = true;
			// 
			// result
			// 
			this->result->Location = System::Drawing::Point(87, 325);
			this->result->Name = L"result";
			this->result->Size = System::Drawing::Size(402, 22);
			this->result->TabIndex = 7;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->ClientSize = System::Drawing::Size(582, 490);
			this->Controls->Add(this->result);
			this->Controls->Add(this->minusBtn);
			this->Controls->Add(this->multiplyBtn);
			this->Controls->Add(this->divideBtn);
			this->Controls->Add(this->plusBtn);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->Title);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		auto isConversionValidHere = Int32::TryParse(textBox1->Text, valueTB1);
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		auto isConversionValidHere = Int32::TryParse(textBox2->Text, valueTB2);
	} 
	private: System::Void plusBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		auto resultVal = valueTB1 + valueTB2;
		result->Text = resultVal.ToString();
		textBox1->Text = "";
		textBox2->Text = "";

	}
};
}
