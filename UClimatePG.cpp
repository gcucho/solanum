//---------------------------------------------------------------------------
#include <vcl.h>
#include <io.h>
#pragma hdrstop
#include "UClimatePG.h"
#include "UCampo.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TfrmClimatePG *frmClimatePG;
//---------------------------------------------------------------------------
__fastcall TfrmClimatePG::TfrmClimatePG(TComponent* Owner)
        : TForm(Owner)
{
  condTemp=new ClimateFile(15000);
   sgClimate->Cells[0][1]="Day";
   sgClimate->Cells[1][0]="Minimun Temp";
   sgClimate->Cells[2][0]="Maximun Temp";
   sgClimate->Cells[3][0]="Radiation";
   sgClimate->Cells[1][1]="oC";
   sgClimate->Cells[2][1]="oC";
   sgClimate->Cells[3][1]="MJ/m2";
   sgClimate->RowHeights[0]=18;
   sgClimate->RowHeights[1]=18;
   sgClimate->ColWidths[0]=30;
   sgClimate->ColWidths[1]=80;
   sgClimate->ColWidths[2]=80;
   sgClimate->ColWidths[3]=50;
}
//---------------------------------------------------------------------------
void TfrmClimatePG::EnterInformation(ClimateFile *_cond)
{
cond=_cond;
CopyValuesToCondTemp();
}
//---------------------------------------------------------------------------
void __fastcall TfrmClimatePG::FormShow(TObject *Sender)
{
  int cant=AnsiString(cond->FileName).Length();
  if (cant==0)
  {
  }
  else
  {
    int existe=access(cond->FileName, 0);
    if(existe==-1) // el archivo no existe
    {
      Application->MessageBox("The specified file does not exist!!!","�Warning!",MB_OK);
      return;
    }
    else
    {
      FileData *util=new FileData();
      AnsiString nombre = AnsiString(condTemp->FileName);
      int posicion=nombre.Pos(".");
      int longitud=nombre.Length();
      int caract=longitud-posicion;
      AnsiString ext=nombre.SubString(posicion+1,caract);
      if(ext=="prn") num=util->GetFieldsName(List,condTemp->FileName);
      if(ext=="csv") num=util->GetFieldsNameFromCSVFile(List,condTemp->FileName);
      delete util;
    }
  }
  PutValuesOnForm();
}
//---------------------------------------------------------------------------
void TfrmClimatePG::CopyValuesToCondTemp()
{
   strcpy(condTemp->FileName,cond->FileName);
   strcpy(condTemp->TitTMin,cond->TitTMin);
   strcpy(condTemp->TitTMax,cond->TitTMax);
   strcpy(condTemp->TitPrec,cond->TitPrec);
   strcpy(condTemp->TitRad,cond->TitRad);
   strcpy(condTemp->TitET,cond->TitET);
   strcpy(condTemp->TitIrri,cond->TitIrri);
   strcpy(condTemp->TitSoilTemp,cond->TitSoilTemp);
   strcpy(condTemp->TitDay,cond->TitDay);
   strcpy(condTemp->TitMonth,cond->TitMonth);
   strcpy(condTemp->TitYear,cond->TitYear);
   strcpy(condTemp->TitSunshine,cond->TitSunshine);
   condTemp->RecNum=cond->RecNum;
   for(int i=1;i<=condTemp->RecNum;i++)
   {
     condTemp->MinTemp[i-1]   = cond->MinTemp[i-1];
     condTemp->MaxTemp[i-1]   = cond->MaxTemp[i-1];
     condTemp->Precipit[i-1]   = cond->Precipit[i-1];
     condTemp->Radiation[i-1]   = cond->Radiation[i-1];
     condTemp->ET[i-1]   = cond->ET[i-1];
     condTemp->Irri[i-1]   = cond->Irri[i-1];
     condTemp->SoilTemp[i-1]   = cond->SoilTemp[i-1];
     condTemp->Sunshine[i-1]   = cond->Sunshine[i-1];
     condTemp->Day[i-1]   = cond->Day[i-1];
     condTemp->Month[i-1]   = cond->Month[i-1];
     condTemp->Year[i-1]   = cond->Year[i-1];
   }
}
//---------------------------------------------------------------------------
void TfrmClimatePG::PutValuesOnForm()
{
   edPathFile->Text=condTemp->FileName;
   edMinTemp->Text=condTemp->TitTMin;
   edMaxTemp->Text=condTemp->TitTMax;
   edRad->Text=condTemp->TitRad;


   if(condTemp->RecNum==0)
   {
     sgClimate->RowCount=3;
   }
   else
   {
     sgClimate->RowCount=condTemp->RecNum+2;
   }
   for(int i=1;i<=condTemp->RecNum;i++)
   {
     sgClimate->RowHeights[i+1] = 18;
     sgClimate->Cells[0][i+1]   = i;
     sgClimate->Cells[1][i+1]   = condTemp->MinTemp[i-1];
     sgClimate->Cells[2][i+1]   = condTemp->MaxTemp[i-1];
     sgClimate->Cells[3][i+1]   = condTemp->Radiation[i-1];
   }
}
//---------------------------------------------------------------------------
void __fastcall TfrmClimatePG::cmdCancelClick(TObject *Sender)
{
  Close();
}
//---------------------------------------------------------------------------
void __fastcall TfrmClimatePG::cmdApplyClick(TObject *Sender)
{
  bool exitoso=false;
  exitoso=Validate();
  if(exitoso)
  {
    SaveData();
    Close();
  }
}
//---------------------------------------------------------------------------
bool TfrmClimatePG::Validate()
{
  TEdit *casilla=new TEdit(this);
  int cod=0; //0 : indica que no hay errores
  casilla = FindDataError(&cod);
  if(cod!=0)
  {
    ShowMessageError(cod);
    casilla->SetFocus();
    return false;
  }
  else
  {
    return true;
  }
}
//---------------------------------------------------------------------------
TEdit* TfrmClimatePG::FindDataError(int* _cod)
{
//  int datoi;
//  try
//  {
//    datoi=edInput1->Text.ToInt();
//  }
//  catch(...)
//  {
//    *_cod=1; // 1: No es un valor entero
//    return edInput1;
//  }
//  double datod=0.0;
//  try
//  {
//    datod=edInput2->Text.ToDouble();
//  }
//  catch(...)
//  {
//    *_cod=2; // 2: No es un valor real
//    return edInput2;
//  }
//  try
//  {
//    datod=edInput3->Text.ToDouble();
//  }
//  catch(...)
//  {
//    *_cod=2; // 2: No es un valor real
//    return edInput3;
//  }
  return edPathFile;
}
//---------------------------------------------------------------------------
void TfrmClimatePG::ShowMessageError(int _cod)
{
  if(_cod==1)
  {
    Application->MessageBox("The value should be an integer!", "Warning!", MB_OK);
  }
  if(_cod==2)
  {
    Application->MessageBox("The value should be a real!", "Warning!", MB_OK);
  }
}
//---------------------------------------------------------------------------
void TfrmClimatePG::SaveData()
{
   strcpy( cond->FileName,condTemp->FileName);
   strcpy( cond->TitTMin,condTemp->TitTMin);
   strcpy( cond->TitTMax,condTemp->TitTMax);
   strcpy( cond->TitPrec,condTemp->TitPrec);
   strcpy( cond->TitRad,condTemp->TitRad);
   strcpy( cond->TitET,condTemp->TitET);
   strcpy( cond->TitIrri,condTemp->TitIrri);
   strcpy( cond->TitSoilTemp,condTemp->TitSoilTemp);
   strcpy( cond->TitDay,condTemp->TitDay);
   strcpy( cond->TitMonth,condTemp->TitMonth);
   strcpy( cond->TitYear,condTemp->TitYear);
   strcpy( cond->TitSunshine,condTemp->TitSunshine);

   cond->RecNum=condTemp->RecNum;
   for(int i=1;i<=condTemp->RecNum;i++)
   {
     cond->MinTemp[i-1]=condTemp->MinTemp[i-1];
     cond->MaxTemp[i-1]=condTemp->MaxTemp[i-1];
     cond->Precipit[i-1]=condTemp->Precipit[i-1];
     cond->Radiation[i-1]=condTemp->Radiation[i-1];
     cond->ET[i-1]=condTemp->ET[i-1];
     cond->Irri[i-1]=condTemp->Irri[i-1];
     cond->SoilTemp[i-1]=condTemp->SoilTemp[i-1];
     cond->Sunshine[i-1]=condTemp->Sunshine[i-1];
     cond->Day[i-1]=condTemp->Day[i-1];
     cond->Month[i-1]=condTemp->Month[i-1];
     cond->Year[i-1]=condTemp->Year[i-1];
   }
}
//---------------------------------------------------------------------------
void __fastcall TfrmClimatePG::FormClose(TObject *Sender,
      TCloseAction &Action)
{
  delete condTemp;
  Action=caFree;
}
//---------------------------------------------------------------------------
void __fastcall TfrmClimatePG::cmdOpenClimateClick(TObject *Sender)
{
  if(odClimate->Execute())
  {
     FileData *util=new FileData();
     int numTemp=0;
     if(odClimate->FilterIndex==1)
     {
       numTemp = util->GetFieldsNameFromCSVFile(ListTemp,odClimate->FileName.c_str());
     }
     if(odClimate->FilterIndex==2)
     {
       numTemp = util->GetFieldsName(ListTemp,odClimate->FileName.c_str());
     }
     delete util;
     // si se captura los titulos
     if(numTemp>0)
     {
   // verifico que las columnas day, month y year existan
   // levantamos los datos de dia, mes y a�o, el titulo de cada uno de ellos esta definido
   // por defecto en la clase
   char* fn = new char[ odClimate->FileName.Length() + 1 ];
   strcpy(fn, odClimate->FileName.c_str());
   int pos;
   int contErr=0;
   AnsiString errores="";
   if(odClimate->FilterIndex==1)
   {
     pos=condTemp->DeterminePositionFromCSVFile(fn,condTemp->TitDay);
   }
   if(odClimate->FilterIndex==2)
   {
     pos=condTemp->DeterminePosition(fn,condTemp->TitDay);
   }

   if(pos==0)
   {
     errores=errores+"'Day' ";
     contErr++;
   }
   if(odClimate->FilterIndex==1)
   {
     pos=condTemp->DeterminePositionFromCSVFile(fn,condTemp->TitMonth);
   }
   if(odClimate->FilterIndex==2)
   {
     pos=condTemp->DeterminePosition(fn,condTemp->TitMonth);
   }
   if(pos==0)
   {
     errores=errores+"'Month' ";
     contErr++;
   }

   if(odClimate->FilterIndex==1)
   {
     pos=condTemp->DeterminePositionFromCSVFile(fn,condTemp->TitYear);
   }
   if(odClimate->FilterIndex==2)
   {
     pos=condTemp->DeterminePosition(fn,condTemp->TitYear);
   }
   if(pos==0)
   {
     errores=errores+"'Year' ";
     contErr++;
   }
   if(contErr==1)
   {
     AnsiString mensaje="The file does not have information about "+errores+",it is necesary include the required information considering the title "+errores+"in the first line of the climate file";
     Application->MessageBox(mensaje.c_str(), "Warning!", MB_OK);
     return;
   }
   else
   {
     if(contErr>1)
     {
       AnsiString mensaje="The file does not have information about "+errores+",it is necesary include the required information considering the titles "+errores+"in the first line of the climate file";
       Application->MessageBox(mensaje.c_str(), "Warning!", MB_OK);
       return;
     }
   }
   // Si las columnas Day, Month, Year se encuentran presentes en el archivo de clima, entonces se continua con el proceso
   // volvemos a cargar los titulos de cada columna del archivo de clima
     FileData *util=new FileData();
     if(odClimate->FilterIndex==1)
     {
       num = util->GetFieldsNameFromCSVFile(List,odClimate->FileName.c_str());
     }
     if(odClimate->FilterIndex==2)
     {
       num = util->GetFieldsName(List,odClimate->FileName.c_str());
     }
     delete util;
     
   edPathFile -> Text = odClimate->FileName;
   strcpy(condTemp->FileName,odClimate->FileName.c_str());

   condTemp->CleanTitles();
   edMinTemp  -> Text = "";
   edMaxTemp  -> Text = "";
   edRad      -> Text = "";
   condTemp->CleanVectorClimate();
   if(odClimate->FilterIndex==1)
   {
     condTemp->RecNum=condTemp->CountRegistersFromCSVFile(condTemp->FileName);
     condTemp->GetColumnDataFromCSVFile(fn,condTemp->TitDay,condTemp->Day);
     condTemp->GetColumnDataFromCSVFile(fn,condTemp->TitMonth,condTemp->Month);
     condTemp->GetColumnDataFromCSVFile(fn,condTemp->TitYear,condTemp->Year);
   }
   if(odClimate->FilterIndex==2)
   {
     condTemp->RecNum=condTemp->CountRegisters(condTemp->FileName);
     condTemp->GetColumnData(fn,condTemp->TitDay,condTemp->Day);
     condTemp->GetColumnData(fn,condTemp->TitMonth,condTemp->Month);
     condTemp->GetColumnData(fn,condTemp->TitYear,condTemp->Year);
   }

   sgClimate->RowCount=condTemp->RecNum+2;
   for(int i=2;i<=sgClimate->RowCount;i++)
   {
     for(int j=1;j<=7;j++)
     {
       sgClimate->Cells[j][i]="";
     }
     sgClimate->Cells[0][i]=i-1;
   }
   
   delete fn;
     }
     else
     {
      Application->MessageBox("No information on the climate file!", "Warning!", MB_OK);
     }
  }
}
//---------------------------------------------------------------------------
void __fastcall TfrmClimatePG::cmdMinTempClick(TObject *Sender)
{
  TfrmCampo *frm = new TfrmCampo(this);
  frm->EnterInformation(List,num,"Minimun temperature");
  if(frm->ShowModal()==mrOk)
  {
    edMinTemp->Text=frm->ReturnInformation();
    strcpy(condTemp->TitTMin, edMinTemp->Text.c_str());
    int numelem=condTemp->GetColumnData(condTemp->FileName,condTemp->TitTMin,condTemp->MinTemp);
    if(numelem==0) numelem=condTemp->GetColumnDataFromCSVFile(condTemp->FileName,condTemp->TitTMin,condTemp->MinTemp);
    sgClimate->RowCount=condTemp->RecNum+2;
    for(int i=1;i<=condTemp->RecNum;i++)
    {
     sgClimate->Cells[1][i+1]=condTemp->MinTemp[i-1];
    }
  }
  delete frm;
}
//---------------------------------------------------------------------------
void __fastcall TfrmClimatePG::cmdMaxTempClick(TObject *Sender)
{
  TfrmCampo *frm = new TfrmCampo(this);
  frm->EnterInformation(List,num,"Maximun temperature");
  if(frm->ShowModal()==mrOk)
  {
    edMaxTemp->Text=frm->ReturnInformation();
    strcpy(condTemp->TitTMax, edMaxTemp->Text.c_str());
    int numelem=condTemp->GetColumnData(condTemp->FileName,condTemp->TitTMax,condTemp->MaxTemp);
    if(numelem==0)numelem=condTemp->GetColumnDataFromCSVFile(condTemp->FileName,condTemp->TitTMax,condTemp->MaxTemp);
    sgClimate->RowCount=condTemp->RecNum+2;
    for(int i=1;i<=condTemp->RecNum;i++)
    {
     sgClimate->Cells[2][i+1]=condTemp->MaxTemp[i-1];
    }
  }
  delete frm;
}
//---------------------------------------------------------------------------
void __fastcall TfrmClimatePG::cmdRadClick(TObject *Sender)
{
  TfrmCampo *frm = new TfrmCampo(this);
  frm->EnterInformation(List,num,"Radiation");
  if(frm->ShowModal()==mrOk)
  {
    edRad->Text=frm->ReturnInformation();
    strcpy(condTemp->TitRad, edRad->Text.c_str());
    int numelem=condTemp->GetColumnData(condTemp->FileName,condTemp->TitRad,condTemp->Radiation);
    if(numelem==0)numelem=condTemp->GetColumnDataFromCSVFile(condTemp->FileName,condTemp->TitRad,condTemp->Radiation);
    sgClimate->RowCount=condTemp->RecNum+2;
    for(int i=1;i<=condTemp->RecNum;i++)
    {
     sgClimate->Cells[3][i+1]=condTemp->Radiation[i-1];
    }
  }
  delete frm;
}
//---------------------------------------------------------------------------




