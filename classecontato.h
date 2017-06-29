#include <cstdlib>
#include <iostream>

class contato{
      private:
              AnsiString nome;
              AnsiString endereco;
              AnsiString telefone;
              AnsiString email;
      public:
             void Setnome(AnsiString string);
             void Setendereco(AnsiString string);
             void Settelefone(AnsiString string);
             void Setemail(AnsiString string);
             AnsiString Getnome(void);
             AnsiString Getendereco(void);
             AnsiString Gettelefone(void);
             AnsiString Getemail(void);
      };
void contato::Setnome(AnsiString string){
                      nome=string;
                      }
void contato::Setendereco(AnsiString string){
                          endereco=string;
                          }
void contato::Settelefone(AnsiString string){
                          telefone=string;
                          }
void contato::Setemail(AnsiString string){
                       telefone=string;
                       }
AnsiString contato::Getnome(void){
                       return nome;
                       }
AnsiString contato::Getendereco(void){
                           return endereco;
                           }
AnsiString contato::Gettelefone(void){
                           return telefone;
                           }
AnsiString contato::Getemail(void){
                        return email;
                        }
