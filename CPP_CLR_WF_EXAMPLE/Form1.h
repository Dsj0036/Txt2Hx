#pragma once
namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->Updater->Start();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::SplitContainer^ splitContainer1;
	private: System::Windows::Forms::RichTextBox^ hexBox;
	private: System::Windows::Forms::Timer^ Updater;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button2;
	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
/// <summary>
/// Required method for Designer support - do not modify
/// the contents of this method with the code editor.
/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->hexBox = (gcnew System::Windows::Forms::RichTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Updater = (gcnew System::Windows::Forms::Timer(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(308, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Open File";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::OpenFile_Clicked);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->Filter = L"Text Plain|*.txt|Binary|*.bin|All files (*.*)|*.*";
			this->openFileDialog1->Title = L"Select a file";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->ForeColor = System::Drawing::Color::White;
			this->richTextBox1->Location = System::Drawing::Point(0, 13);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(307, 303);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->splitContainer1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->splitContainer1->Location = System::Drawing::Point(12, 41);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->richTextBox1);
			this->splitContainer1->Panel1->Controls->Add(this->label1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->hexBox);
			this->splitContainer1->Panel2->Controls->Add(this->label2);
			this->splitContainer1->Size = System::Drawing::Size(646, 318);
			this->splitContainer1->SplitterDistance = 309;
			this->splitContainer1->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Top;
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(307, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"ASCII Input";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// hexBox
			// 
			this->hexBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->hexBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->hexBox->Dock = System::Windows::Forms::DockStyle::Fill;
			this->hexBox->ForeColor = System::Drawing::Color::White;
			this->hexBox->Location = System::Drawing::Point(0, 13);
			this->hexBox->Name = L"hexBox";
			this->hexBox->ReadOnly = true;
			this->hexBox->Size = System::Drawing::Size(331, 303);
			this->hexBox->TabIndex = 3;
			this->hexBox->Text = L"";
			// 
			// label2
			// 
			this->label2->Dock = System::Windows::Forms::DockStyle::Top;
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(0, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(331, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Hexadecimal Output";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Updater
			// 
			this->Updater->Interval = 1000;
			this->Updater->Tick += gcnew System::EventHandler(this, &Form1::Updater_Tick);
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Location = System::Drawing::Point(613, 17);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(44, 13);
			this->textBox1->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(554, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Separator";
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Location = System::Drawing::Point(326, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(106, 23);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Copy";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(20)),
				static_cast<System::Int32>(static_cast<System::Byte>(20)));
			this->ClientSize = System::Drawing::Size(670, 371);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"RwTxT";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: String^ OldText = L"";
		   int OldLen = 0;
	private: String^ TextToHex(String^ input) {

		String^ output = gcnew String("");

		for (int i = 0; i < input->Length; i++) {
			
			output += String::Format((i==0? textBox1->Text : L"") + L"{0:X}" + textBox1->Text, (int)(input[i]));
		}
		return output;
	}


	private: Void OpenFile_Clicked(System::Object^ sender, System::EventArgs^ e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			this->richTextBox1->Clear();
			this->hexBox->Clear();
			auto var = (File::ReadAllText(openFileDialog1->FileName));
			this->richTextBox1->Text += var;
			this->hexBox->Text += TextToHex(var);
			OldText = this->hexBox->Text;
		}
	}
	private: System::Void Updater_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->hexBox->Text != OldText) {
			this->hexBox->Text = OldText = TextToHex(this->richTextBox1->Text);
		}
	}
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {

		auto path = Application::StartupPath + L"\\app.ico";
		if (File::Exists(path)) {
			this->Icon = System::Drawing::Icon::FromHandle(cli::safe_cast<Bitmap^>(Image::FromFile(path))->GetHicon());
		}
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->richTextBox1->Text->Length > OldLen) {
			this->hexBox->Text += TextToHex(this->richTextBox1->Text->Substring(OldLen,
				this->richTextBox1->Text->Length - OldLen));
		}
		else
		{
			this->hexBox->Text = TextToHex(this->richTextBox1->Text);
			
		}

		OldLen = this->richTextBox1->Text->Length;
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Clipboard::SetText(this->hexBox->Text);
	}
};
}
