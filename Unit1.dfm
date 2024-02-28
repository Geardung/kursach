object Form1: TForm1
  Left = 0
  Top = 0
  BorderStyle = bsSingle
  Caption = 'Form1'
  ClientHeight = 546
  ClientWidth = 541
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 96
    Top = 0
    Width = 88
    Height = 13
    Caption = 'URL API Endpoin'#39#1072
  end
  object Label2: TLabel
    Left = 368
    Top = 0
    Width = 100
    Height = 13
    Caption = #1055#1072#1088#1072#1084#1077#1090#1088#1099' '#1079#1072#1087#1088#1086#1089#1072
  end
  object Button1: TButton
    Left = 0
    Top = 51
    Width = 290
    Height = 46
    Caption = #1042#1099#1087#1086#1083#1085#1080#1090#1100' '#1079#1072#1087#1088#1086#1089
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 0
    Top = 288
    Width = 539
    Height = 256
    Lines.Strings = (
      'Memo1')
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object ValueListEditor1: TValueListEditor
    Left = 296
    Top = 24
    Width = 243
    Height = 258
    KeyOptions = [keyEdit, keyAdd, keyDelete, keyUnique]
    Strings.Strings = (
      'token=testing')
    TabOrder = 2
    ColWidths = (
      89
      148)
  end
  object Edit1: TEdit
    Left = 0
    Top = 24
    Width = 290
    Height = 21
    TabOrder = 3
    Text = 'http://nkse.geardung.space/api/v1/group/all'
  end
  object IdHTTP1: TIdHTTP
    AllowCookies = True
    ProxyParams.BasicAuthentication = False
    ProxyParams.ProxyPort = 0
    Request.ContentEncoding = 'utf-8'
    Request.ContentLanguage = 'UTF-8'
    Request.ContentLength = -1
    Request.Accept = 'text/html, */*'
    Request.AcceptCharSet = 'UTF-8'
    Request.AcceptEncoding = 'utf-8'
    Request.AcceptLanguage = 'UTF-8'
    Request.BasicAuthentication = False
    Request.UserAgent = 'Mozilla/3.0 (compatible; Indy Library)'
    HTTPOptions = [hoForceEncodeParams]
    Left = 256
    Top = 104
  end
end
