#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include <Windows.h>
#include "PhotoView.h"
#include "StylePresetForm.h"

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			this->outputPathLocation->Text = OutputImagePath;
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: String^ ContentImagePath;
	private: String^ StyleImagePath;
	private: String^ OutputImagePath = System::IO::Path::GetDirectoryName(Application::ExecutablePath) + "\\result.jpg";
	private: double alpha = 1.0;


	private: System::Windows::Forms::Button^ contentPathButton;
	private: System::Windows::Forms::Button^ stylePathButton;
	private: System::Windows::Forms::Button^ generateButton;
	private: System::Windows::Forms::Button^ outputPathButton;
	private: System::Windows::Forms::TextBox^ outputPathLocation;
	private: System::Windows::Forms::Label^ LocationLabel;
	private: System::Windows::Forms::Label^ alphaGradeLabel;
	private: System::Windows::Forms::TrackBar^ alphaGradeBar;
	private: System::Windows::Forms::Label^ GenWaitLabel;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ stylePresetButton;


	protected:


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
			this->contentPathButton = (gcnew System::Windows::Forms::Button());
			this->stylePathButton = (gcnew System::Windows::Forms::Button());
			this->generateButton = (gcnew System::Windows::Forms::Button());
			this->outputPathButton = (gcnew System::Windows::Forms::Button());
			this->outputPathLocation = (gcnew System::Windows::Forms::TextBox());
			this->LocationLabel = (gcnew System::Windows::Forms::Label());
			this->alphaGradeLabel = (gcnew System::Windows::Forms::Label());
			this->alphaGradeBar = (gcnew System::Windows::Forms::TrackBar());
			this->GenWaitLabel = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->stylePresetButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alphaGradeBar))->BeginInit();
			this->SuspendLayout();
			// 
			// contentPathButton
			// 
			this->contentPathButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->contentPathButton->Location = System::Drawing::Point(116, 63);
			this->contentPathButton->Name = L"contentPathButton";
			this->contentPathButton->Size = System::Drawing::Size(250, 40);
			this->contentPathButton->TabIndex = 0;
			this->contentPathButton->Text = L"Load Content Image";
			this->contentPathButton->UseVisualStyleBackColor = true;
			this->contentPathButton->Click += gcnew System::EventHandler(this, &MyForm::contentPathButton_Click);
			// 
			// stylePathButton
			// 
			this->stylePathButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->stylePathButton->Location = System::Drawing::Point(116, 109);
			this->stylePathButton->Name = L"stylePathButton";
			this->stylePathButton->Size = System::Drawing::Size(250, 40);
			this->stylePathButton->TabIndex = 1;
			this->stylePathButton->Text = L"Load Style Image";
			this->stylePathButton->UseVisualStyleBackColor = true;
			this->stylePathButton->Click += gcnew System::EventHandler(this, &MyForm::stylePathButton_Click);
			// 
			// generateButton
			// 
			this->generateButton->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->generateButton->Location = System::Drawing::Point(0, 629);
			this->generateButton->Name = L"generateButton";
			this->generateButton->Size = System::Drawing::Size(478, 40);
			this->generateButton->TabIndex = 2;
			this->generateButton->Text = L"Generate";
			this->generateButton->UseVisualStyleBackColor = true;
			this->generateButton->Click += gcnew System::EventHandler(this, &MyForm::generateButton_Click);
			// 
			// outputPathButton
			// 
			this->outputPathButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->outputPathButton->Location = System::Drawing::Point(116, 240);
			this->outputPathButton->Name = L"outputPathButton";
			this->outputPathButton->Size = System::Drawing::Size(250, 40);
			this->outputPathButton->TabIndex = 3;
			this->outputPathButton->Text = L"Select Output Location";
			this->outputPathButton->UseVisualStyleBackColor = true;
			this->outputPathButton->Click += gcnew System::EventHandler(this, &MyForm::outputPathButton_Click);
			// 
			// outputPathLocation
			// 
			this->outputPathLocation->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->outputPathLocation->Location = System::Drawing::Point(116, 315);
			this->outputPathLocation->Name = L"outputPathLocation";
			this->outputPathLocation->Size = System::Drawing::Size(250, 26);
			this->outputPathLocation->TabIndex = 5;
			this->outputPathLocation->TextChanged += gcnew System::EventHandler(this, &MyForm::outputPathLocation_TextChanged);
			// 
			// LocationLabel
			// 
			this->LocationLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->LocationLabel->Location = System::Drawing::Point(116, 292);
			this->LocationLabel->Name = L"LocationLabel";
			this->LocationLabel->Size = System::Drawing::Size(250, 20);
			this->LocationLabel->TabIndex = 4;
			this->LocationLabel->Text = L"Current location: ";
			this->LocationLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// alphaGradeLabel
			// 
			this->alphaGradeLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->alphaGradeLabel->Location = System::Drawing::Point(116, 403);
			this->alphaGradeLabel->Name = L"alphaGradeLabel";
			this->alphaGradeLabel->Size = System::Drawing::Size(246, 20);
			this->alphaGradeLabel->TabIndex = 6;
			this->alphaGradeLabel->Text = L"Style transfer grade:";
			this->alphaGradeLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// alphaGradeBar
			// 
			this->alphaGradeBar->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->alphaGradeBar->Location = System::Drawing::Point(116, 440);
			this->alphaGradeBar->Maximum = 100;
			this->alphaGradeBar->Name = L"alphaGradeBar";
			this->alphaGradeBar->Size = System::Drawing::Size(250, 69);
			this->alphaGradeBar->TabIndex = 7;
			this->alphaGradeBar->TickFrequency = 10;
			this->alphaGradeBar->Value = 100;
			this->alphaGradeBar->Scroll += gcnew System::EventHandler(this, &MyForm::alphaGradeBar_Scroll);
			// 
			// GenWaitLabel
			// 
			this->GenWaitLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->GenWaitLabel->Location = System::Drawing::Point(112, 568);
			this->GenWaitLabel->Name = L"GenWaitLabel";
			this->GenWaitLabel->Size = System::Drawing::Size(250, 23);
			this->GenWaitLabel->TabIndex = 8;
			this->GenWaitLabel->Text = L"Please wait...";
			this->GenWaitLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->GenWaitLabel->Visible = false;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(120, 152);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 39);
			this->label1->TabIndex = 9;
			this->label1->Text = L"OR";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// stylePresetButton
			// 
			this->stylePresetButton->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->stylePresetButton->Location = System::Drawing::Point(116, 194);
			this->stylePresetButton->Name = L"stylePresetButton";
			this->stylePresetButton->Size = System::Drawing::Size(250, 40);
			this->stylePresetButton->TabIndex = 10;
			this->stylePresetButton->Text = L"Select Style Preset";
			this->stylePresetButton->UseVisualStyleBackColor = true;
			this->stylePresetButton->Click += gcnew System::EventHandler(this, &MyForm::stylePresetButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(478, 669);
			this->Controls->Add(this->stylePresetButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->GenWaitLabel);
			this->Controls->Add(this->alphaGradeBar);
			this->Controls->Add(this->alphaGradeLabel);
			this->Controls->Add(this->outputPathLocation);
			this->Controls->Add(this->LocationLabel);
			this->Controls->Add(this->outputPathButton);
			this->Controls->Add(this->generateButton);
			this->Controls->Add(this->stylePathButton);
			this->Controls->Add(this->contentPathButton);
			this->Name = L"MyForm";
			this->ShowIcon = false;
			this->Text = L"Style Transfer";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->alphaGradeBar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void contentPathButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::Stream^ myStream;
		OpenFileDialog^ selectContentImage = gcnew OpenFileDialog;

		selectContentImage->Filter = "Image Files (*.JPG, *.JPEG) | *.jpg; *.jpeg";
		selectContentImage->FilterIndex = 1;

		if (selectContentImage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = selectContentImage->OpenFile()) != nullptr) {
				ContentImagePath = selectContentImage->InitialDirectory + selectContentImage->FileName;
				myStream->Close();
			}
		}
	}
	private: System::Void stylePathButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::Stream^ myStream;
		OpenFileDialog^ selectStyleImage = gcnew OpenFileDialog;

		selectStyleImage->Filter = "Image Files (*.JPG, *.JPEG) | *.jpg; *.jpeg";
		selectStyleImage->FilterIndex = 1;

		if (selectStyleImage->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			if ((myStream = selectStyleImage->OpenFile()) != nullptr) {
				StyleImagePath = selectStyleImage->InitialDirectory + selectStyleImage->FileName;
				myStream->Close();
			}
		}
	}
	private: System::Void outputPathButton_Click(System::Object^ sender, System::EventArgs^ e) {
		FolderBrowserDialog^ selectOutputLocation = gcnew FolderBrowserDialog;

		if (selectOutputLocation->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			OutputImagePath = selectOutputLocation->SelectedPath + "\\result.jpg";
			outputPathLocation->Text = OutputImagePath;
		}
	}
	private: System::Void generateButton_Click(System::Object^ sender, System::EventArgs^ e) {
		GenWaitLabel->Show();
		GenWaitLabel->Refresh();
		String^ args_String = "\"transfer_adain\" \"" + ContentImagePath + "\" \"" + StyleImagePath + "\" \"" + OutputImagePath + "\" \"" + alpha.ToString() + "\"";
		//MessageBox::Show(args_String);
		std::string args = msclr::interop::marshal_as<std::string>(args_String);
		STARTUPINFO info{ sizeof(info)};
		PROCESS_INFORMATION processInfo;
		if (CreateProcess("./dist/transfer_adain/transfer_adain.exe", const_cast<LPSTR>(args.c_str()), NULL, NULL, FALSE, CREATE_NO_WINDOW, NULL, NULL, &info, &processInfo))
		{
			WaitForSingleObject(processInfo.hProcess, INFINITE);
			CloseHandle(processInfo.hProcess);
			CloseHandle(processInfo.hThread);
		}
		GenWaitLabel->Hide();
		PhotoView^ photo = gcnew PhotoView(OutputImagePath);
		photo->Show();
	}
	private: System::Void alphaGradeBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		alpha = alphaGradeBar->Value / 100;
	}
	private: System::Void outputPathLocation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		OutputImagePath = outputPathLocation->Text;
	}
	private: System::Void stylePresetButton_Click(System::Object^ sender, System::EventArgs^ e) {
		StylePresetForm^ form = gcnew StylePresetForm;
		form->ShowDialog();
		StyleImagePath = form->SelectedPresetPath;
	}
};
}

//this->outputPathLocation->Text = OutputImagePath;
