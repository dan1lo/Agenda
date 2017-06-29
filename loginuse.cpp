//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdio.h>
#include <stdlib.h>
#include "agenda.h"

#include "loginuse.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tfrmloginuse *frmloginuse;
class use{
        private:
        AnsiString  nome;
        AnsiString  senha;
        public:
        void Setnome(AnsiString string){ nome=string; }
        void Setsenha(AnsiString string){ senha=string ;}
        AnsiString Getnome(void) {return nome; }
        AnsiString Getsenha(void) {return senha; }
} ;

void tira_defeito(char *string){
     if(string[strlen(string)-1]=='\n') string[strlen(string)-1]='\0';
     }
       
 int existe(char *string, char *arq_nome){
     FILE *pt;
     char procura[300];
     strcpy(procura,string);
     if((pt=fopen(arq_nome,"rt"))!=NULL) // abre o arquivo se ele existir
       {
        while(!feof(pt)) // le o arquivo enquanto o nao chegar ao fim
          {
           fgets(procura,sizeof(procura),pt);  // le uma string
           tira_defeito(procura);  //troca o caractere \n por \0 ja que estamos gravando e lendo modo texto
           if(strcmp(string,procura)==0)
               return 1;  // para aqui e devolve 1, verdadeiro
           }
        fclose(pt);
        }
     return 0; // se nao entrar no if vai devolver zero
     }      

//---------------------------------------------------------------------------
__fastcall Tfrmloginuse::Tfrmloginuse(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tfrmloginuse::brtokClick(TObject *Sender)
{

use usario;
char nome_use2[40], senha_use2[10];
FILE *pt=fopen("usuario.txt","rt");

usario.Setnome(edtuse->Text);
usario.Setsenha(edtsenha->Text);
sprintf(nome_use2,"%s",usario.Getnome());
sprintf(senha_use2,"%s",usario.Getsenha());

if((existe(nome_use2,"usuario.txt") && existe(senha_use2,"usuario.txt")) || pt==NULL) {
   frmagenda->Show();
   frmloginuse->Visible=false;
}
else {
fclose(pt);
ShowMessage("Usu�rio ou senha incorreto! ");
}
}
//---------------------------------------------------------------------------
void __fastcall Tfrmloginuse::brtcadastrarClick(TObject *Sender)
{
use usuario;
char nome_use2[40], senha_use2[10];
FILE *pt=fopen("usuario.txt","a+t");

usuario.Setnome(edtuse->Text);
usuario.Setsenha(edtsenha->Text);
fprintf(pt,"%s",usuario.Getnome());
fprintf(pt,"\n");
fprintf(pt,"%s\n",usuario.Getsenha());
fprintf(pt,"\n");
fclose(pt);
frmloginuse->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall Tfrmloginuse::brtsairClick(TObject *Sender)
{
frmloginuse->Close();
}
//---------------------------------------------------------------------------
void __fastcall Tfrmloginuse::brtcancelaClick(TObject *Sender)
{
  edtuse->Text="";
  edtsenha->Text="";
  frmloginuse->Visible=false;
}
//---------------------------------------------------------------------------
