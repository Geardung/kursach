//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "IdBaseComponent"
#pragma link "IdComponent"
#pragma link "IdHTTP"
#pragma link "IdTCPClient"
#pragma link "IdTCPConnection"
#pragma link "IdCookieManager"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Memo1->Text = "";
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
	UnicodeString url = Edit1->Text;
	for(int x = 1; x < ValueListEditor1->RowCount; x++)
	{
		if (x == 1) url = url + "?";
		if (! (ValueListEditor1->Cells[0][x] != "" & ValueListEditor1->Cells[1][x] != "")) continue;
		url = url + "&" + ValueListEditor1->Cells[0][x] + "=" + ValueListEditor1->Cells[1][x];
	}
	TJSONObject zcx;
	UnicodeString result;

	result = IdHTTP1->Get(url);

	Memo1->Text = result;// ��� ��������

}
//---------------------------------------------------------------------------

