//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
//---------------------------------------------------------------------------
USEFORM("agenda.cpp", frmagenda);
USEFORM("cadastro.cpp", frmcadastro);
USEFORM("calendario.cpp", frmcalendario);
USEFORM("exclusao.cpp", frmexcluir);
USEFORM("atualizar.cpp", frmatual);
USEFORM("login.cpp", frmlogin);
USEFORM("manual.cpp", frmmanual);
USEFORM("loginuse.cpp", frmloginuse);
//---------------------------------------------------------------------------
WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
        try
        {
                 Application->Initialize();
                 Application->CreateForm(__classid(Tfrmloginuse), &frmloginuse);
                 Application->CreateForm(__classid(Tfrmlogin), &frmlogin);
                 Application->CreateForm(__classid(Tfrmagenda), &frmagenda);
                 Application->CreateForm(__classid(Tfrmcadastro), &frmcadastro);
                 Application->CreateForm(__classid(Tfrmcalendario), &frmcalendario);
                 Application->CreateForm(__classid(Tfrmexcluir), &frmexcluir);
                 Application->CreateForm(__classid(Tfrmatual), &frmatual);
                 Application->CreateForm(__classid(Tfrmmanual), &frmmanual);
                 Application->Run();
        }
        catch (Exception &exception)
        {
                 Application->ShowException(&exception);
        }
        catch (...)
        {
                 try
                 {
                         throw Exception("");
                 }
                 catch (Exception &exception)
                 {
                         Application->ShowException(&exception);
                 }
        }
        return 0;
}
//---------------------------------------------------------------------------
