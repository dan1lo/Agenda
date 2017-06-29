object frmcadastro: Tfrmcadastro
  Left = 200
  Top = 181
  Width = 457
  Height = 222
  Caption = 'Cadastro de novo contato'
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -16
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 19
  object lblnome: TLabel
    Left = 24
    Top = 16
    Width = 48
    Height = 19
    Caption = 'Nome:'
  end
  object lblendereco: TLabel
    Left = 16
    Top = 48
    Width = 71
    Height = 19
    Caption = 'Endere'#231'o:'
  end
  object lblnumero: TLabel
    Left = 16
    Top = 80
    Width = 67
    Height = 19
    Caption = 'Telefone:'
  end
  object lblmail: TLabel
    Left = 24
    Top = 112
    Width = 49
    Height = 19
    Caption = 'E-Mail:'
  end
  object edtnome: TEdit
    Left = 112
    Top = 8
    Width = 329
    Height = 27
    Hint = 'Nome do contato'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    Text = 'Digite aqui'
  end
  object edtendereco: TEdit
    Left = 112
    Top = 40
    Width = 329
    Height = 27
    Hint = 'Endere'#231'o do contato'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 1
    Text = 'Digite aqui'
  end
  object edtnumero: TEdit
    Left = 112
    Top = 72
    Width = 145
    Height = 27
    Hint = 'Telefone do contato'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    Text = 'Digite aqui'
  end
  object edtmail: TEdit
    Left = 112
    Top = 104
    Width = 329
    Height = 27
    Hint = 'E-Mail do contato'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    Text = 'Digite aqui'
  end
  object brtsalvar: TBitBtn
    Left = 168
    Top = 152
    Width = 121
    Height = 25
    Hint = 'Salva as informa'#231#245'es do contato'
    Caption = 'Salvar'
    ParentShowHint = False
    ShowHint = True
    TabOrder = 4
    OnClick = brtsalvarClick
  end
  object brtcancelar: TButton
    Left = 320
    Top = 152
    Width = 113
    Height = 25
    Caption = 'Cancelar'
    TabOrder = 5
    OnClick = brtcancelarClick
  end
  object brtsair: TButton
    Left = 24
    Top = 152
    Width = 123
    Height = 25
    Caption = 'Sair'
    TabOrder = 6
    OnClick = brtsairClick
  end
  object Qrycadastro: TQuery
    DatabaseName = 'cesar'
    Left = 280
    Top = 72
  end
  object DataSource1: TDataSource
    DataSet = Qrycadastro
    Left = 320
    Top = 72
  end
end
