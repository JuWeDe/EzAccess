#include "MyForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Data::OleDb;
[STAThread]
int main(array<String^>^ arg) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	AccessLab::MyForm form;
	Application::Run(% form);
}

System::Void AccessLab::MyForm::DownloadButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=table.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);
	dbConnection->Open();
	String^ query = "SELECT * FROM [table_name]";
	OleDbCommand^ dbCommand = gcnew OleDbCommand(query, dbConnection);
	OleDbDataReader^ dbReader = dbCommand->ExecuteReader();

	if (dbReader->HasRows == false) {
		MessageBox::Show("Ошибка чтения данных!", "Ошибка");

	}
	else {
		while (dbReader->Read()) {
			DataGridView1->Rows->Add(dbReader["ID"], dbReader["shifr"], dbReader["proizvoditel"], dbReader["season"], dbReader["razmer"], dbReader["nalichie"]);
		}
	}
	dbReader->Close();
	dbConnection->Close();


	return System::Void();

}

System::Void AccessLab::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e) // add
{
	if (DataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите строку для добавления данных", "Message");
		return;
	}


	//int index = DataGridView1->SelectedRows[0]->Index; // узнаем индекс выбранного элемента
	int index = DataGridView1->SelectedRows[0]->Index;

	if (DataGridView1->Rows[index]->Cells[0]->Value == nullptr ||
		DataGridView1->Rows[index]->Cells[1]->Value == nullptr ||
		DataGridView1->Rows[index]->Cells[2]->Value == nullptr ||
		DataGridView1->Rows[index]->Cells[3]->Value == nullptr ||
		DataGridView1->Rows[index]->Cells[4]->Value == nullptr ||
		DataGridView1->Rows[index]->Cells[5]->Value == nullptr) {
		MessageBox::Show("Не все даанные введены!", "Warning");
		return;
	}


	String^ ID = DataGridView1->Rows[index]->Cells[0]->Value->ToString();
	String^ shifr = DataGridView1->Rows[index]->Cells[1]->Value->ToString();
	String^ proizvoditel = DataGridView1->Rows[index]->Cells[2]->Value->ToString();
	String^ season = DataGridView1->Rows[index]->Cells[3]->Value->ToString();
	String^ razmer = DataGridView1->Rows[index]->Cells[4]->Value->ToString();
	String^ nalichie = DataGridView1->Rows[index]->Cells[5]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=table.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();
	String^ query = "INSERT INTO [table_name] VALUES (" + ID + ", '" + shifr + "', '"
		+ proizvoditel + "', '" + season + "', '" + razmer + "', '" + nalichie + "')";
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка добавления!", "Mistake");
	else
		MessageBox::Show("Добавлено", "message");


	dbConnection->Close();

	return System::Void();
}

System::Void AccessLab::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (DataGridView1->SelectedRows->Count != 1) {
		MessageBox::Show("Выберите строку для удаления данных", "Message");
		return;
	}

	int index = DataGridView1->SelectedRows[0]->Index; // узнаем индекс выбранного элемента

	String^ ID = DataGridView1->Rows[index]->Cells[0]->Value->ToString();

	String^ connectionString = "provider=Microsoft.Jet.OLEDB.4.0;Data Source=table.mdb";
	OleDbConnection^ dbConnection = gcnew OleDbConnection(connectionString);


	dbConnection->Open();
	String^ query = "DELETE FROM [table_name] WHERE ID = " + ID;
	OleDbCommand^ dbComand = gcnew OleDbCommand(query, dbConnection);


	if (dbComand->ExecuteNonQuery() != 1)
		MessageBox::Show("Ошибка удаления!", "Mistake");
	else
		MessageBox::Show("Удалено", "message");


	dbConnection->Close();

	return System::Void();
}

