object frmmanual: Tfrmmanual
  Left = 192
  Top = 114
  Width = 605
  Height = 378
  BorderIcons = [biSystemMenu]
  Caption = 'Manual do usu'#225'rio'
  Color = clBtnFace
  Font.Charset = ANSI_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 16
  object Memo1: TMemo
    Left = 8
    Top = 8
    Width = 577
    Height = 297
    Lines.Strings = (
      'Memo1')
    ReadOnly = True
    TabOrder = 0
  end
  object brtsair: TBitBtn
    Left = 464
    Top = 312
    Width = 121
    Height = 25
    Caption = 'Sair'
    TabOrder = 1
    OnClick = brtsairClick
  end
end
