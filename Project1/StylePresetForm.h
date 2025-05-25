#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StylePresetForm
	/// </summary>
	public ref class StylePresetForm : public System::Windows::Forms::Form
	{
	public:
		StylePresetForm(void)
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
		~StylePresetForm()
		{
			if (components)
			{
				delete components;
			}
		}

	public: String^ SelectedPresetPath;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::RadioButton^ select1;
	private: System::Windows::Forms::RadioButton^ select2;
	private: System::Windows::Forms::RadioButton^ select3;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ okButton;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(StylePresetForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->select1 = (gcnew System::Windows::Forms::RadioButton());
			this->select2 = (gcnew System::Windows::Forms::RadioButton());
			this->select3 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->okButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(107, 178);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(300, 400);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(532, 178);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(300, 400);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(957, 178);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(300, 400);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// select1
			// 
			this->select1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->select1->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->select1->Location = System::Drawing::Point(107, 645);
			this->select1->Name = L"select1";
			this->select1->Size = System::Drawing::Size(300, 24);
			this->select1->TabIndex = 3;
			this->select1->TabStop = true;
			this->select1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->select1->UseVisualStyleBackColor = true;
			// 
			// select2
			// 
			this->select2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->select2->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->select2->Location = System::Drawing::Point(532, 645);
			this->select2->Name = L"select2";
			this->select2->Size = System::Drawing::Size(300, 24);
			this->select2->TabIndex = 4;
			this->select2->TabStop = true;
			this->select2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->select2->UseVisualStyleBackColor = true;
			// 
			// select3
			// 
			this->select3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->select3->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->select3->Location = System::Drawing::Point(957, 645);
			this->select3->Name = L"select3";
			this->select3->Size = System::Drawing::Size(300, 24);
			this->select3->TabIndex = 5;
			this->select3->TabStop = true;
			this->select3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->select3->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->okButton);
			this->groupBox1->Controls->Add(this->select3);
			this->groupBox1->Controls->Add(this->pictureBox2);
			this->groupBox1->Controls->Add(this->select2);
			this->groupBox1->Controls->Add(this->pictureBox1);
			this->groupBox1->Controls->Add(this->select1);
			this->groupBox1->Controls->Add(this->pictureBox3);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1360, 813);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			// 
			// okButton
			// 
			this->okButton->Location = System::Drawing::Point(643, 750);
			this->okButton->Name = L"okButton";
			this->okButton->Size = System::Drawing::Size(80, 38);
			this->okButton->TabIndex = 6;
			this->okButton->Text = L"OK";
			this->okButton->UseVisualStyleBackColor = true;
			this->okButton->Click += gcnew System::EventHandler(this, &StylePresetForm::okButton_Click);
			// 
			// StylePresetForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1384, 837);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"StylePresetForm";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->Text = L"Select Style Preset";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	
	private: System::Void okButton_Click(System::Object^ sender, System::EventArgs^ e) {
		if (select1->Checked) {
			SelectedPresetPath = System::IO::Path::GetDirectoryName(Application::ExecutablePath) + "\\dist\\transfer_adain\\data\\style1.jpg";
		}
		else if (select2->Checked) {
			SelectedPresetPath = System::IO::Path::GetDirectoryName(Application::ExecutablePath) + "\\dist\\transfer_adain\\data\\style2.jpg";
		}
		else if (select3->Checked) {
			SelectedPresetPath = System::IO::Path::GetDirectoryName(Application::ExecutablePath) + "\\dist\\transfer_adain\\data\\style3.jpg";
		}
		//MessageBox::Show(SelectedPresetPath);
		this->Hide();
	}
};
}
