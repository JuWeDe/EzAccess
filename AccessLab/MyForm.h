#pragma once

namespace AccessLab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ DataGridView1;
	protected:

	private: System::Windows::Forms::Button^ AddButton;
	private: System::Windows::Forms::Button^ Deletebutton;






	private: System::Windows::Forms::Button^ UpdateButton;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Shifr;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Factory;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ season;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ size;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ StockStatus;
	private: System::Windows::Forms::Button^ DownloadButton;
	protected:



	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->DataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Shifr = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Factory = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->season = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->size = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->StockStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->AddButton = (gcnew System::Windows::Forms::Button());
			this->Deletebutton = (gcnew System::Windows::Forms::Button());
			this->UpdateButton = (gcnew System::Windows::Forms::Button());
			this->DownloadButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// DataGridView1
			// 
			this->DataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->ID, this->Shifr,
					this->Factory, this->season, this->size, this->StockStatus
			});
			this->DataGridView1->Location = System::Drawing::Point(12, 12);
			this->DataGridView1->Name = L"DataGridView1";
			this->DataGridView1->RowHeadersWidth = 51;
			this->DataGridView1->Size = System::Drawing::Size(960, 485);
			this->DataGridView1->TabIndex = 0;
			this->DataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::DataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			this->ID->Width = 80;
			// 
			// Shifr
			// 
			this->Shifr->HeaderText = L"Шифр резины";
			this->Shifr->MinimumWidth = 6;
			this->Shifr->Name = L"Shifr";
			this->Shifr->Width = 80;
			// 
			// Factory
			// 
			this->Factory->HeaderText = L"Производитель";
			this->Factory->MinimumWidth = 6;
			this->Factory->Name = L"Factory";
			this->Factory->Width = 140;
			// 
			// season
			// 
			this->season->HeaderText = L"Сезонность";
			this->season->MinimumWidth = 6;
			this->season->Name = L"season";
			this->season->Width = 140;
			// 
			// size
			// 
			this->size->HeaderText = L"Размеры";
			this->size->MinimumWidth = 6;
			this->size->Name = L"size";
			this->size->Width = 140;
			// 
			// StockStatus
			// 
			this->StockStatus->HeaderText = L"Наличие на складе";
			this->StockStatus->MinimumWidth = 6;
			this->StockStatus->Name = L"StockStatus";
			this->StockStatus->Width = 80;
			// 
			// AddButton
			// 
			this->AddButton->Location = System::Drawing::Point(995, 176);
			this->AddButton->Name = L"AddButton";
			this->AddButton->Size = System::Drawing::Size(121, 32);
			this->AddButton->TabIndex = 1;
			this->AddButton->Text = L"Добавить";
			this->AddButton->UseVisualStyleBackColor = true;
			this->AddButton->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Deletebutton
			// 
			this->Deletebutton->Location = System::Drawing::Point(995, 214);
			this->Deletebutton->Name = L"Deletebutton";
			this->Deletebutton->Size = System::Drawing::Size(121, 28);
			this->Deletebutton->TabIndex = 2;
			this->Deletebutton->Text = L"Удалить";
			this->Deletebutton->UseVisualStyleBackColor = true;
			this->Deletebutton->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// UpdateButton
			// 
			this->UpdateButton->Location = System::Drawing::Point(995, 248);
			this->UpdateButton->Name = L"UpdateButton";
			this->UpdateButton->Size = System::Drawing::Size(121, 28);
			this->UpdateButton->TabIndex = 3;
			this->UpdateButton->Text = L"Обновить";
			this->UpdateButton->UseVisualStyleBackColor = true;
			this->UpdateButton->Click += gcnew System::EventHandler(this, &MyForm::UpdateButton_Click);
			// 
			// DownloadButton
			// 
			this->DownloadButton->Location = System::Drawing::Point(995, 147);
			this->DownloadButton->Name = L"DownloadButton";
			this->DownloadButton->Size = System::Drawing::Size(121, 23);
			this->DownloadButton->TabIndex = 4;
			this->DownloadButton->Text = L"Загрузить";
			this->DownloadButton->UseVisualStyleBackColor = true;
			this->DownloadButton->Click += gcnew System::EventHandler(this, &MyForm::DownloadButton_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1138, 509);
			this->Controls->Add(this->DownloadButton);
			this->Controls->Add(this->UpdateButton);
			this->Controls->Add(this->Deletebutton);
			this->Controls->Add(this->AddButton);
			this->Controls->Add(this->DataGridView1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


	private: System::Void DownloadButton_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e);
	private: System::Void UpdateButton_Click(System::Object^ sender, System::EventArgs^ e);
};
}
