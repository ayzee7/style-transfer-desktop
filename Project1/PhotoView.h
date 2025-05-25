#pragma once

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for PhotoView
	/// </summary>
	public ref class PhotoView : public System::Windows::Forms::Form
	{
	public:
		PhotoView(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		PhotoView(String^ OutputPath)
		{
			InitializeComponent();
			OutputPicture->Load(OutputPath);
			this->Height = OutputPicture->Image->Height + 100;
			this->Width	= OutputPicture->Image->Width + 100;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~PhotoView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ OutputPicture;
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
			this->OutputPicture = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OutputPicture))->BeginInit();
			this->SuspendLayout();
			// 
			// OutputPicture
			// 
			this->OutputPicture->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->OutputPicture->Location = System::Drawing::Point(12, 12);
			this->OutputPicture->Name = L"OutputPicture";
			this->OutputPicture->Size = System::Drawing::Size(954, 920);
			this->OutputPicture->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->OutputPicture->TabIndex = 0;
			this->OutputPicture->TabStop = false;
			// 
			// PhotoView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 944);
			this->Controls->Add(this->OutputPicture);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"PhotoView";
			this->ShowIcon = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Output";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->OutputPicture))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
