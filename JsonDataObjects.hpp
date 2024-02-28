// CodeGear C++Builder
// Copyright (c) 1995, 2008 by CodeGear
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Jsondataobjects.pas' rev: 20.00

#ifndef JsondataobjectsHPP
#define JsondataobjectsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member functions
#pragma pack(push,8)
#include <System.hpp>	// Pascal unit
#include <Sysinit.hpp>	// Pascal unit
#include <Sysutils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------
#pragma link "Jsondataobjects"

namespace Jsondataobjects
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS EJsonException;
class PASCALIMPLEMENTATION EJsonException : public Sysutils::Exception
{
	typedef Sysutils::Exception inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJsonException(const System::UnicodeString Msg) : Sysutils::Exception(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJsonException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : Sysutils::Exception(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall EJsonException(int Ident)/* overload */ : Sysutils::Exception(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJsonException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : Sysutils::Exception(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EJsonException(const System::UnicodeString Msg, int AHelpContext) : Sysutils::Exception(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJsonException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : Sysutils::Exception(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJsonException(int Ident, int AHelpContext)/* overload */ : Sysutils::Exception(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJsonException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : Sysutils::Exception(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJsonException(void) { }
	
};


class DELPHICLASS EJsonCastException;
class PASCALIMPLEMENTATION EJsonCastException : public EJsonException
{
	typedef EJsonException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJsonCastException(const System::UnicodeString Msg) : EJsonException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJsonCastException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : EJsonException(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall EJsonCastException(int Ident)/* overload */ : EJsonException(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJsonCastException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : EJsonException(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EJsonCastException(const System::UnicodeString Msg, int AHelpContext) : EJsonException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJsonCastException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : EJsonException(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJsonCastException(int Ident, int AHelpContext)/* overload */ : EJsonException(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJsonCastException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : EJsonException(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJsonCastException(void) { }
	
};


class DELPHICLASS EJsonPathException;
class PASCALIMPLEMENTATION EJsonPathException : public EJsonException
{
	typedef EJsonException inherited;
	
public:
	/* Exception.Create */ inline __fastcall EJsonPathException(const System::UnicodeString Msg) : EJsonException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJsonPathException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : EJsonException(Msg, Args, Args_Size) { }
	/* Exception.CreateRes */ inline __fastcall EJsonPathException(int Ident)/* overload */ : EJsonException(Ident) { }
	/* Exception.CreateResFmt */ inline __fastcall EJsonPathException(int Ident, System::TVarRec const *Args, const int Args_Size)/* overload */ : EJsonException(Ident, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EJsonPathException(const System::UnicodeString Msg, int AHelpContext) : EJsonException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJsonPathException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : EJsonException(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJsonPathException(int Ident, int AHelpContext)/* overload */ : EJsonException(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJsonPathException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : EJsonException(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJsonPathException(void) { }
	
};


class DELPHICLASS EJsonParserException;
class PASCALIMPLEMENTATION EJsonParserException : public EJsonException
{
	typedef EJsonException inherited;
	
private:
	int FColumn;
	int FPosition;
	int FLineNum;
	
public:
	__fastcall EJsonParserException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int ALineNum, int AColumn, int APosition);
	__fastcall EJsonParserException(System::PResStringRec ResStringRec, int ALineNum, int AColumn, int APosition);
	__property int LineNum = {read=FLineNum, nodefault};
	__property int Column = {read=FColumn, nodefault};
	__property int Position = {read=FPosition, nodefault};
public:
	/* Exception.Create */ inline __fastcall EJsonParserException(const System::UnicodeString Msg) : EJsonException(Msg) { }
	/* Exception.CreateFmt */ inline __fastcall EJsonParserException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size) : EJsonException(Msg, Args, Args_Size) { }
	/* Exception.CreateHelp */ inline __fastcall EJsonParserException(const System::UnicodeString Msg, int AHelpContext) : EJsonException(Msg, AHelpContext) { }
	/* Exception.CreateFmtHelp */ inline __fastcall EJsonParserException(const System::UnicodeString Msg, System::TVarRec const *Args, const int Args_Size, int AHelpContext) : EJsonException(Msg, Args, Args_Size, AHelpContext) { }
	/* Exception.CreateResHelp */ inline __fastcall EJsonParserException(int Ident, int AHelpContext)/* overload */ : EJsonException(Ident, AHelpContext) { }
	/* Exception.CreateResFmtHelp */ inline __fastcall EJsonParserException(System::PResStringRec ResStringRec, System::TVarRec const *Args, const int Args_Size, int AHelpContext)/* overload */ : EJsonException(ResStringRec, Args, Args_Size, AHelpContext) { }
	/* Exception.Destroy */ inline __fastcall virtual ~EJsonParserException(void) { }
	
};


typedef void __fastcall (*TJsonReaderProgressProc)(void * Data, int Percentage, int Position, int Size);

struct TJsonReaderProgressRec;
typedef TJsonReaderProgressRec *PJsonReaderProgressRec;

struct TJsonReaderProgressRec
{
	
public:
	void *Data;
	int Threshold;
	TJsonReaderProgressProc Progress;
	PJsonReaderProgressRec __fastcall Init(TJsonReaderProgressProc AProgress, void * AData = (void *)(0x0), int AThreshold = (int)(0x0));
};


struct TJsonOutputWriter
{
	
private:
	#pragma option push -b-
	enum TLastType { ltInitial, ltIndent, ltUnindent, ltIntro, ltValue, ltSeparator };
	#pragma option pop
	
	typedef StaticArray<System::UnicodeString, 536870911> TJsonStringArray;
	
	typedef TJsonStringArray *PJsonStringArray;
	
	struct TJsonStringBuilder;
	typedef TJsonStringBuilder *PJsonStringBuilder;
	
	struct TJsonOutputWriter;
	struct TJsonStringBuilder
	{
		
private:
		System::WideChar *FData;
		int FCapacity;
		int FLen;
		void __fastcall Grow(int MinLen);
		
public:
		void __fastcall Init(void);
		void __fastcall Done(void);
		void __fastcall DoneConvertToString(System::UnicodeString &S);
		int __fastcall FlushToBytes(System::PByte &Bytes, int &Size, Sysutils::TEncoding* Encoding);
		void __fastcall FlushToMemoryStream(Classes::TMemoryStream* Stream, Sysutils::TEncoding* Encoding);
		void __fastcall FlushToStringBuffer(TJsonOutputWriter::TJsonStringBuilder &Buffer);
		void __fastcall FlushToString(System::UnicodeString &S);
		TJsonOutputWriter::PJsonStringBuilder __fastcall Append(const System::UnicodeString S)/* overload */;
		void __fastcall Append(System::WideChar * P, int Len)/* overload */;
		TJsonOutputWriter::PJsonStringBuilder __fastcall Append2(const System::UnicodeString S1, System::WideChar * S2, int S2Len)/* overload */;
		void __fastcall Append2(System::WideChar Ch1, System::WideChar Ch2)/* overload */;
		void __fastcall Append3(System::WideChar Ch1, const System::UnicodeString S2, const System::UnicodeString S3)/* overload */;
		void __fastcall Append3(System::WideChar Ch1, const System::UnicodeString S2, System::WideChar Ch3)/* overload */;
		void __fastcall Append3(System::WideChar Ch1, const System::WideChar * P2, int P2Len, System::WideChar Ch3)/* overload */;
		__property int Len = {read=FLen};
		__property System::WideChar * Data = {read=FData};
	};
	
	
	
private:
	TLastType FLastType;
	bool FCompact;
	TJsonStringBuilder FStringBuffer;
	Classes::TStrings* FLines;
	TJsonStringBuilder FLastLine;
	System::Byte *FStreamEncodingBuffer;
	int FStreamEncodingBufferLen;
	Classes::TStream* FStream;
	Sysutils::TEncoding* FEncoding;
	TJsonStringArray *FIndents;
	int FIndentsLen;
	int FIndent;
	void __fastcall StreamFlushPossible(void);
	void __fastcall StreamFlush(void);
	void __fastcall ExpandIndents(void);
	void __fastcall AppendLine(TLastType AppendOn, const System::UnicodeString S)/* overload */;
	void __fastcall AppendLine(TLastType AppendOn, System::WideChar * P, int Len)/* overload */;
	void __fastcall FlushLastLine(void);
	void __fastcall Init(bool ACompact, Classes::TStream* AStream, Sysutils::TEncoding* AEncoding, Classes::TStrings* ALines);
	System::UnicodeString __fastcall Done();
	void __fastcall StreamDone(void);
	void __fastcall LinesDone(void);
	void __fastcall Indent(const System::UnicodeString S);
	void __fastcall Unindent(const System::UnicodeString S);
	void __fastcall AppendIntro(System::WideChar * P, int Len);
	void __fastcall AppendValue(const System::UnicodeString S)/* overload */;
	void __fastcall AppendValue(System::WideChar * P, int Len)/* overload */;
	void __fastcall AppendStrValue(System::WideChar * P, int Len);
	void __fastcall AppendSeparator(const System::UnicodeString S);
	void __fastcall FreeIndents(void);
};


#pragma option push -b-
enum TJsonDataType { jdtNone, jdtString, jdtInt, jdtLong, jdtULong, jdtFloat, jdtDateTime, jdtUtcDateTime, jdtBool, jdtArray, jdtObject };
#pragma option pop

struct TJsonDataValue;
typedef TJsonDataValue *PJsonDataValue;

class DELPHICLASS TJsonArray;
class DELPHICLASS TJsonObject;
#pragma pack(push,1)
struct TJsonDataValue
{
	
private:
	#pragma pack(push,8)
	struct TJsonDataValueRec
	{
		
		#pragma pack(push,1)
		union
		{
			struct 
			{
				void *O;
				
			};
			struct 
			{
				void *A;
				
			};
			struct 
			{
				bool B;
				
			};
			struct 
			{
				System::TDateTimeBase D;
				
			};
			struct 
			{
				double F;
				
			};
			struct 
			{
				unsigned __int64 U;
				
			};
			struct 
			{
				__int64 L;
				
			};
			struct 
			{
				int I;
				
			};
			struct 
			{
				void *S;
				
			};
			struct 
			{
				System::WideChar *P;
				
			};
			
		};
		#pragma pack(pop)
	};
	#pragma pack(pop)
	
	
	
private:
	TJsonDataValueRec FValue;
	TJsonDataType FTyp;
	System::UnicodeString __fastcall GetValue();
	int __fastcall GetIntValue(void);
	__int64 __fastcall GetLongValue(void);
	unsigned __int64 __fastcall GetULongValue(void);
	double __fastcall GetFloatValue(void);
	System::TDateTime __fastcall GetDateTimeValue(void);
	System::TDateTime __fastcall GetUtcDateTimeValue(void);
	bool __fastcall GetBoolValue(void);
	TJsonArray* __fastcall GetArrayValue(void);
	TJsonObject* __fastcall GetObjectValue(void);
	System::Variant __fastcall GetVariantValue();
	void __fastcall SetValue(const System::UnicodeString AValue);
	void __fastcall SetIntValue(const int AValue);
	void __fastcall SetLongValue(const __int64 AValue);
	void __fastcall SetULongValue(const unsigned __int64 AValue);
	void __fastcall SetFloatValue(const double AValue);
	void __fastcall SetDateTimeValue(const System::TDateTime AValue);
	void __fastcall SetUtcDateTimeValue(const System::TDateTime AValue);
	void __fastcall SetBoolValue(const bool AValue);
	void __fastcall SetArrayValue(const TJsonArray* AValue);
	void __fastcall SetObjectValue(const TJsonObject* AValue);
	void __fastcall SetVariantValue(const System::Variant &AValue);
	void __fastcall InternToJSON(TJsonOutputWriter &Writer);
	void __fastcall InternSetValue(const System::UnicodeString AValue);
	void __fastcall InternSetValueTransfer(System::UnicodeString &AValue);
	void __fastcall InternSetArrayValue(const TJsonArray* AValue);
	void __fastcall InternSetObjectValue(const TJsonObject* AValue);
	void __fastcall Clear(void);
	void __fastcall TypeCastError(TJsonDataType ExpectedType);
	
public:
	bool __fastcall IsNull(void);
	__property TJsonDataType Typ = {read=FTyp};
	__property System::UnicodeString Value = {read=GetValue, write=SetValue};
	__property int IntValue = {read=GetIntValue, write=SetIntValue};
	__property __int64 LongValue = {read=GetLongValue, write=SetLongValue};
	__property unsigned __int64 ULongValue = {read=GetULongValue, write=SetULongValue};
	__property double FloatValue = {read=GetFloatValue, write=SetFloatValue};
	__property System::TDateTime DateTimeValue = {read=GetDateTimeValue, write=SetDateTimeValue};
	__property System::TDateTime UtcDateTimeValue = {read=GetUtcDateTimeValue, write=SetUtcDateTimeValue};
	__property bool BoolValue = {read=GetBoolValue, write=SetBoolValue};
	__property TJsonArray* ArrayValue = {read=GetArrayValue, write=SetArrayValue};
	__property TJsonObject* ObjectValue = {read=GetObjectValue, write=SetObjectValue};
	__property System::Variant VariantValue = {read=GetVariantValue, write=SetVariantValue};
};
#pragma pack(pop)


struct TJsonDataValueHelper;
struct TJsonDataValueHelper
{
	
private:
	class DELPHICLASS TJsonBaseObject;
	struct _TJsonDataValueHelper__1
	{
		
public:
		TJsonDataValue *FIntern;
		System::UnicodeString FName;
		TJsonObject* FNameResolver;
		System::UnicodeString FValue;
		#pragma pack(push,1)
		
public:
		TJsonDataType FTyp;
		union
		{
			struct 
			{
				unsigned:24;
				TJsonBaseObject* FObj;
				
			};
			struct 
			{
				bool FBoolValue;
				
			};
			struct 
			{
				unsigned:32;
				unsigned:24;
				System::TDateTimeBase FDateTimeValue;
				
			};
			struct 
			{
				unsigned:32;
				unsigned:24;
				double FFloatValue;
				
			};
			struct 
			{
				unsigned:32;
				unsigned:24;
				unsigned __int64 FULongValue;
				
			};
			struct 
			{
				unsigned:32;
				unsigned:24;
				__int64 FLongValue;
				
			};
			struct 
			{
				unsigned:24;
				int FIntValue;
				
			};
			
		};
		#pragma pack(pop)
	};
	
	
	
public:
	TJsonDataValueHelper operator[](const System::UnicodeString Name) { return O[Name]; }
	
private:
	System::UnicodeString __fastcall GetValue();
	int __fastcall GetIntValue(void);
	__int64 __fastcall GetLongValue(void);
	unsigned __int64 __fastcall GetULongValue(void);
	double __fastcall GetFloatValue(void);
	System::TDateTime __fastcall GetDateTimeValue(void);
	System::TDateTime __fastcall GetUtcDateTimeValue(void);
	bool __fastcall GetBoolValue(void);
	TJsonArray* __fastcall GetArrayValue(void);
	TJsonObject* __fastcall GetObjectValue(void);
	System::Variant __fastcall GetVariantValue();
	void __fastcall SetValue(const System::UnicodeString Value);
	void __fastcall SetIntValue(const int Value);
	void __fastcall SetLongValue(const __int64 Value);
	void __fastcall SetULongValue(const unsigned __int64 Value);
	void __fastcall SetFloatValue(const double Value);
	void __fastcall SetDateTimeValue(const System::TDateTime Value);
	void __fastcall SetUtcDateTimeValue(const System::TDateTime Value);
	void __fastcall SetBoolValue(const bool Value);
	void __fastcall SetArrayValue(const TJsonArray* Value);
	void __fastcall SetObjectValue(const TJsonObject* Value);
	void __fastcall SetVariantValue(const System::Variant &Value);
	TJsonDataValueHelper __fastcall GetArrayItem(int Index);
	int __fastcall GetArrayCount(void);
	System::UnicodeString __fastcall GetObjectString(const System::UnicodeString Name);
	int __fastcall GetObjectInt(const System::UnicodeString Name);
	__int64 __fastcall GetObjectLong(const System::UnicodeString Name);
	unsigned __int64 __fastcall GetObjectULong(const System::UnicodeString Name);
	double __fastcall GetObjectFloat(const System::UnicodeString Name);
	System::TDateTime __fastcall GetObjectDateTime(const System::UnicodeString Name);
	System::TDateTime __fastcall GetObjectUtcDateTime(const System::UnicodeString Name);
	bool __fastcall GetObjectBool(const System::UnicodeString Name);
	TJsonArray* __fastcall GetArray(const System::UnicodeString Name);
	TJsonDataValueHelper __fastcall GetObj(const System::UnicodeString Name);
	System::Variant __fastcall GetObjectVariant(const System::UnicodeString Name);
	void __fastcall SetObjectString(const System::UnicodeString Name, const System::UnicodeString Value);
	void __fastcall SetObjectInt(const System::UnicodeString Name, const int Value);
	void __fastcall SetObjectLong(const System::UnicodeString Name, const __int64 Value);
	void __fastcall SetObjectULong(const System::UnicodeString Name, const unsigned __int64 Value);
	void __fastcall SetObjectFloat(const System::UnicodeString Name, const double Value);
	void __fastcall SetObjectDateTime(const System::UnicodeString Name, const System::TDateTime Value);
	void __fastcall SetObjectUtcDateTime(const System::UnicodeString Name, const System::TDateTime Value);
	void __fastcall SetObjectBool(const System::UnicodeString Name, const bool Value);
	void __fastcall SetArray(const System::UnicodeString Name, const TJsonArray* Value);
	void __fastcall SetObject(const System::UnicodeString Name, const TJsonDataValueHelper &Value);
	void __fastcall SetObjectVariant(const System::UnicodeString Name, const System::Variant &Value);
	TJsonDataValueHelper __fastcall GetObjectPath(const System::UnicodeString Name);
	void __fastcall SetObjectPath(const System::UnicodeString Name, const TJsonDataValueHelper &Value);
	TJsonDataType __fastcall GetTyp(void);
	void __fastcall ResolveName(void);
	static void __fastcall SetInternValue(PJsonDataValue Item, const TJsonDataValueHelper &Value);
	
public:
	static TJsonDataValueHelper __fastcall _op_Implicit(const System::UnicodeString Value);
	__fastcall operator System::UnicodeString();
	static TJsonDataValueHelper __fastcall _op_Implicit(const int Value);
	__fastcall operator int();
	static TJsonDataValueHelper __fastcall _op_Implicit(const __int64 Value);
	__fastcall operator __int64();
	static TJsonDataValueHelper __fastcall _op_Implicit(const double Value);
	__fastcall operator double();
	static TJsonDataValueHelper __fastcall _op_Implicit(const System::Extended Value);
	__fastcall operator System::Extended();
	static TJsonDataValueHelper __fastcall _op_Implicit(const System::TDateTime Value);
	__fastcall operator System::TDateTime();
	static TJsonDataValueHelper __fastcall _op_Implicit(const bool Value);
	__fastcall operator bool();
	static TJsonDataValueHelper __fastcall _op_Implicit(const TJsonArray* Value);
	__fastcall operator TJsonArray*();
	static TJsonDataValueHelper __fastcall _op_Implicit(const TJsonObject* Value);
	__fastcall operator TJsonObject*();
	static TJsonDataValueHelper __fastcall _op_Implicit(const void * Value);
	__fastcall operator System::Variant();
	static TJsonDataValueHelper __fastcall _op_Implicit(const System::Variant &Value);
	bool __fastcall IsNull(void);
	__property TJsonDataType Typ = {read=GetTyp};
	__property System::UnicodeString Value = {read=GetValue, write=SetValue};
	__property int IntValue = {read=GetIntValue, write=SetIntValue};
	__property __int64 LongValue = {read=GetLongValue, write=SetLongValue};
	__property unsigned __int64 ULongValue = {read=GetULongValue, write=SetULongValue};
	__property double FloatValue = {read=GetFloatValue, write=SetFloatValue};
	__property System::TDateTime DateTimeValue = {read=GetDateTimeValue, write=SetDateTimeValue};
	__property System::TDateTime UtcDateTimeValue = {read=GetUtcDateTimeValue, write=SetUtcDateTimeValue};
	__property bool BoolValue = {read=GetBoolValue, write=SetBoolValue};
	__property TJsonArray* ArrayValue = {read=GetArrayValue, write=SetArrayValue};
	__property TJsonObject* ObjectValue = {read=GetObjectValue, write=SetObjectValue};
	__property System::Variant VariantValue = {read=GetVariantValue, write=SetVariantValue};
	__property int Count = {read=GetArrayCount};
	__property TJsonDataValueHelper Items[int Index] = {read=GetArrayItem};
	__property System::UnicodeString S[const System::UnicodeString Name] = {read=GetObjectString, write=SetObjectString};
	__property int I[const System::UnicodeString Name] = {read=GetObjectInt, write=SetObjectInt};
	__property __int64 L[const System::UnicodeString Name] = {read=GetObjectLong, write=SetObjectLong};
	__property unsigned __int64 U[const System::UnicodeString Name] = {read=GetObjectULong, write=SetObjectULong};
	__property double F[const System::UnicodeString Name] = {read=GetObjectFloat, write=SetObjectFloat};
	__property System::TDateTime D[const System::UnicodeString Name] = {read=GetObjectDateTime, write=SetObjectDateTime};
	__property System::TDateTime DUtc[const System::UnicodeString Name] = {read=GetObjectUtcDateTime, write=SetObjectUtcDateTime};
	__property bool B[const System::UnicodeString Name] = {read=GetObjectBool, write=SetObjectBool};
	__property TJsonArray* A[const System::UnicodeString Name] = {read=GetArray, write=SetArray};
	__property TJsonDataValueHelper O[const System::UnicodeString Name] = {read=GetObj, write=SetObject};
	__property System::Variant V[const System::UnicodeString Name] = {read=GetObjectVariant, write=SetObjectVariant};
	__property TJsonDataValueHelper Path[const System::UnicodeString Name] = {read=GetObjectPath, write=SetObjectPath};
	
private:
	_TJsonDataValueHelper__1 FData;
};


class PASCALIMPLEMENTATION TJsonBaseObject : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	typedef void __fastcall (__closure *TWriterAppendMethod)(System::WideChar * P, int Len);
	
	struct TStreamInfo
	{
		
public:
		System::Byte *Buffer;
		int Size;
		void *AllocationBase;
	};
	
	
	typedef StaticArray<System::UnicodeString, 11> _TJsonBaseObject__1;
	
	
private:
	static void __fastcall StrToJSONStr(const TWriterAppendMethod AppendMethod, const System::UnicodeString S);
	static void __fastcall EscapeStrToJSONStr(System::WideChar * F, System::WideChar * P, System::WideChar * EndP, const TWriterAppendMethod AppendMethod);
	static void __fastcall DateTimeToJSONStr(const TWriterAppendMethod AppendMethod, const System::TDateTime Value);
	static void __fastcall UtcDateTimeToJSONStr(const TWriterAppendMethod AppendMethod, const System::TDateTime Value);
	static void __fastcall InternInitAndAssignItem(PJsonDataValue Dest, PJsonDataValue Source);
	static void __fastcall GetStreamBytes(Classes::TStream* Stream, Sysutils::TEncoding* &Encoding, bool Utf8WithoutBOM, TStreamInfo &StreamInfo);
	
protected:
	virtual void __fastcall InternToJSON(TJsonOutputWriter &Writer) = 0 ;
	
public:
	static _TJsonBaseObject__1 DataTypeNames;
	__classmethod virtual System::TObject* __fastcall NewInstance();
	static TJsonBaseObject* __fastcall ParseUtf8(char * S, int Len = 0xffffffff, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	static TJsonBaseObject* __fastcall ParseUtf8(const System::UTF8String S, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	static TJsonBaseObject* __fastcall ParseUtf8Bytes(System::PByte S, int Len = 0xffffffff, PJsonReaderProgressRec AProgress = (void *)(0x0));
	static TJsonBaseObject* __fastcall Parse(System::WideChar * S, int Len = 0xffffffff, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	static TJsonBaseObject* __fastcall Parse(const System::UnicodeString S, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	static TJsonBaseObject* __fastcall Parse(const Sysutils::TBytes Bytes, Sysutils::TEncoding* Encoding = (Sysutils::TEncoding*)(0x0), int ByteIndex = 0x0, int ByteCount = 0xffffffff, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	static TJsonBaseObject* __fastcall ParseFromFile(const System::UnicodeString FileName, bool Utf8WithoutBOM = true, PJsonReaderProgressRec AProgress = (void *)(0x0));
	static TJsonBaseObject* __fastcall ParseFromStream(Classes::TStream* Stream, Sysutils::TEncoding* Encoding = (Sysutils::TEncoding*)(0x0), bool Utf8WithoutBOM = true, PJsonReaderProgressRec AProgress = (void *)(0x0));
	void __fastcall LoadFromFile(const System::UnicodeString FileName, bool Utf8WithoutBOM = true, PJsonReaderProgressRec AProgress = (void *)(0x0));
	void __fastcall LoadFromStream(Classes::TStream* Stream, Sysutils::TEncoding* Encoding = (Sysutils::TEncoding*)(0x0), bool Utf8WithoutBOM = true, PJsonReaderProgressRec AProgress = (void *)(0x0));
	void __fastcall SaveToFile(const System::UnicodeString FileName, bool Compact = true, Sysutils::TEncoding* Encoding = (Sysutils::TEncoding*)(0x0), bool Utf8WithoutBOM = true);
	void __fastcall SaveToStream(Classes::TStream* Stream, bool Compact = true, Sysutils::TEncoding* Encoding = (Sysutils::TEncoding*)(0x0), bool Utf8WithoutBOM = true);
	void __fastcall SaveToLines(Classes::TStrings* Lines);
	void __fastcall FromUtf8JSON(const System::UTF8String S, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	void __fastcall FromUtf8JSON(char * S, int Len = 0xffffffff, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	void __fastcall FromUtf8JSON(System::PByte S, int Len = 0xffffffff, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	void __fastcall FromJSON(const System::UnicodeString S, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	void __fastcall FromJSON(System::WideChar * S, int Len = 0xffffffff, PJsonReaderProgressRec AProgress = (void *)(0x0))/* overload */;
	System::UnicodeString __fastcall ToJSON(bool Compact = true);
	System::UTF8String __fastcall ToUtf8JSON(bool Compact = true)/* overload */;
	void __fastcall ToUtf8JSON(Sysutils::TBytes &Bytes, bool Compact = true)/* overload */;
	virtual System::UnicodeString __fastcall ToString();
	TJsonBaseObject* __fastcall Clone(void);
	static System::TDateTime __fastcall JSONToDateTime(const System::UnicodeString Value, bool ConvertToLocalTime = true);
	static System::UnicodeString __fastcall DateTimeToJSON(const System::TDateTime Value, bool UseUtcTime);
	static System::UnicodeString __fastcall UtcDateTimeToJSON(const System::TDateTime UtcDateTime);
public:
	/* TObject.Create */ inline __fastcall TJsonBaseObject(void) : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TJsonBaseObject(void) { }
	
};


typedef StaticArray<TJsonDataValue, 238609294> TJsonDataValueArray;

typedef TJsonDataValueArray *PJsonDataValueArray;

struct TJsonArrayEnumerator
{
	
private:
	int FIndex;
	TJsonArray* FArray;
	
public:
	__fastcall TJsonArrayEnumerator(TJsonArray* AArray);
	TJsonDataValueHelper __fastcall GetCurrent();
	bool __fastcall MoveNext(void);
	__property TJsonDataValueHelper Current = {read=GetCurrent};
};


class PASCALIMPLEMENTATION TJsonArray[[sealed]] : public TJsonBaseObject
{
	typedef TJsonBaseObject inherited;
	
public:
	TJsonDataValueHelper operator[](int Index) { return Values[Index]; }
	
private:
	TJsonDataValueArray *FItems;
	int FCapacity;
	int FCount;
	System::UnicodeString __fastcall GetString(int Index);
	int __fastcall GetInt(int Index);
	__int64 __fastcall GetLong(int Index);
	unsigned __int64 __fastcall GetULong(int Index);
	double __fastcall GetFloat(int Index);
	System::TDateTime __fastcall GetDateTime(int Index);
	System::TDateTime __fastcall GetUtcDateTime(int Index);
	bool __fastcall GetBool(int Index);
	TJsonArray* __fastcall GetArray(int Index);
	TJsonObject* __fastcall GetObj(int Index);
	System::Variant __fastcall GetVariant(int Index);
	void __fastcall SetString(int Index, const System::UnicodeString Value);
	void __fastcall SetInt(int Index, const int Value);
	void __fastcall SetLong(int Index, const __int64 Value);
	void __fastcall SetULong(int Index, const unsigned __int64 Value);
	void __fastcall SetFloat(int Index, const double Value);
	void __fastcall SetDateTime(int Index, const System::TDateTime Value);
	void __fastcall SetUtcDateTime(int Index, const System::TDateTime Value);
	void __fastcall SetBool(int Index, const bool Value);
	void __fastcall SetArray(int Index, const TJsonArray* Value);
	void __fastcall SetObject(int Index, const TJsonObject* Value);
	void __fastcall SetVariant(int Index, const System::Variant &Value);
	PJsonDataValue __fastcall GetItem(int Index);
	TJsonDataType __fastcall GetType(int Index);
	TJsonDataValueHelper __fastcall GetValue(int Index);
	void __fastcall SetValue(int Index, const TJsonDataValueHelper &Value);
	PJsonDataValue __fastcall AddItem(void);
	PJsonDataValue __fastcall InsertItem(int Index);
	void __fastcall Grow(void);
	void __fastcall InternApplyCapacity(void);
	void __fastcall SetCapacity(const int Value);
	void __fastcall SetCount(const int Value);
	
protected:
	virtual void __fastcall InternToJSON(TJsonOutputWriter &Writer);
	static void __fastcall RaiseListError(int Index);
	
public:
	__fastcall virtual ~TJsonArray(void);
	void __fastcall Clear(void);
	void __fastcall Delete(int Index);
	TJsonBaseObject* __fastcall Extract(int Index);
	TJsonArray* __fastcall ExtractArray(int Index);
	TJsonObject* __fastcall ExtractObject(int Index);
	void __fastcall Assign(TJsonArray* ASource);
	HIDESBASE TJsonArray* __fastcall Clone(void);
	void __fastcall Add(const System::UnicodeString AValue)/* overload */;
	void __fastcall Add(const int AValue)/* overload */;
	void __fastcall Add(const __int64 AValue)/* overload */;
	void __fastcall Add(const unsigned __int64 AValue)/* overload */;
	void __fastcall Add(const double AValue)/* overload */;
	void __fastcall Add(const System::TDateTime AValue)/* overload */;
	void __fastcall AddUtcDateTime(const System::TDateTime AValue);
	void __fastcall Add(const bool AValue)/* overload */;
	void __fastcall Add(const TJsonArray* AValue)/* overload */;
	void __fastcall Add(const TJsonObject* AValue)/* overload */;
	void __fastcall Add(const System::Variant &AValue)/* overload */;
	TJsonArray* __fastcall AddArray(void);
	TJsonObject* __fastcall AddObject(void)/* overload */;
	void __fastcall AddObject(const TJsonObject* Value)/* overload */;
	void __fastcall Insert(int Index, const System::UnicodeString AValue)/* overload */;
	void __fastcall Insert(int Index, const int AValue)/* overload */;
	void __fastcall Insert(int Index, const __int64 AValue)/* overload */;
	void __fastcall Insert(int Index, const unsigned __int64 AValue)/* overload */;
	void __fastcall Insert(int Index, const double AValue)/* overload */;
	void __fastcall Insert(int Index, const System::TDateTime AValue)/* overload */;
	void __fastcall InsertUtcDateTime(int Index, const System::TDateTime AValue);
	void __fastcall Insert(int Index, const bool AValue)/* overload */;
	void __fastcall Insert(int Index, const TJsonArray* AValue)/* overload */;
	void __fastcall Insert(int Index, const TJsonObject* AValue)/* overload */;
	void __fastcall Insert(int Index, const System::Variant &AValue)/* overload */;
	TJsonArray* __fastcall InsertArray(int Index);
	TJsonObject* __fastcall InsertObject(int Index)/* overload */;
	void __fastcall InsertObject(int Index, const TJsonObject* Value)/* overload */;
	TJsonArrayEnumerator __fastcall GetEnumerator();
	bool __fastcall IsNull(int Index);
	__property TJsonDataType Types[int Index] = {read=GetType};
	__property TJsonDataValueHelper Values[int Index] = {read=GetValue, write=SetValue/*, default*/};
	__property System::UnicodeString S[int Index] = {read=GetString, write=SetString};
	__property int I[int Index] = {read=GetInt, write=SetInt};
	__property __int64 L[int Index] = {read=GetLong, write=SetLong};
	__property unsigned __int64 U[int Index] = {read=GetULong, write=SetULong};
	__property double F[int Index] = {read=GetFloat, write=SetFloat};
	__property System::TDateTime D[int Index] = {read=GetDateTime, write=SetDateTime};
	__property System::TDateTime DUtc[int Index] = {read=GetUtcDateTime, write=SetUtcDateTime};
	__property bool B[int Index] = {read=GetBool, write=SetBool};
	__property TJsonArray* A[int Index] = {read=GetArray, write=SetArray};
	__property TJsonObject* O[int Index] = {read=GetObj, write=SetObject};
	__property System::Variant V[int Index] = {read=GetVariant, write=SetVariant};
	__property PJsonDataValue Items[int Index] = {read=GetItem};
	__property int Count = {read=FCount, write=SetCount, nodefault};
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
public:
	/* TObject.Create */ inline __fastcall TJsonArray(void) : TJsonBaseObject() { }
	
};


struct TJsonNameValuePair
{
	
public:
	System::UnicodeString Name;
	TJsonDataValueHelper Value;
};


struct TJsonObjectEnumerator
{
	
private:
	int FIndex;
	TJsonObject* FObject;
	
public:
	__fastcall TJsonObjectEnumerator(TJsonObject* AObject);
	TJsonNameValuePair __fastcall GetCurrent();
	bool __fastcall MoveNext(void);
	__property TJsonNameValuePair Current = {read=GetCurrent};
};


class PASCALIMPLEMENTATION TJsonObject[[sealed]] : public TJsonBaseObject
{
	typedef TJsonBaseObject inherited;
	
private:
	typedef StaticArray<System::UnicodeString, 536870911> TJsonStringArray;
	
	typedef TJsonStringArray *PJsonStringArray;
	
	
public:
	TJsonDataValueHelper operator[](const System::UnicodeString Name) { return Values[Name]; }
	
private:
	TJsonDataValueArray *FItems;
	TJsonStringArray *FNames;
	int FCapacity;
	int FCount;
	TJsonDataValue *FLastValueItem;
	void *FLastValueItemNamePtr;
	void __fastcall UpdateLastValueItem(const System::UnicodeString Name, PJsonDataValue Item);
	bool __fastcall FindItem(const System::UnicodeString Name, PJsonDataValue &Item);
	PJsonDataValue __fastcall RequireItem(const System::UnicodeString Name);
	System::UnicodeString __fastcall GetString(const System::UnicodeString Name);
	bool __fastcall GetBool(const System::UnicodeString Name);
	int __fastcall GetInt(const System::UnicodeString Name);
	__int64 __fastcall GetLong(const System::UnicodeString Name);
	unsigned __int64 __fastcall GetULong(const System::UnicodeString Name);
	double __fastcall GetFloat(const System::UnicodeString Name);
	System::TDateTime __fastcall GetDateTime(const System::UnicodeString Name);
	System::TDateTime __fastcall GetUtcDateTime(const System::UnicodeString Name);
	TJsonObject* __fastcall GetObj(const System::UnicodeString Name);
	TJsonArray* __fastcall GetArray(const System::UnicodeString Name);
	void __fastcall SetString(const System::UnicodeString Name, const System::UnicodeString Value);
	void __fastcall SetBool(const System::UnicodeString Name, const bool Value);
	void __fastcall SetInt(const System::UnicodeString Name, const int Value);
	void __fastcall SetLong(const System::UnicodeString Name, const __int64 Value);
	void __fastcall SetULong(const System::UnicodeString Name, const unsigned __int64 Value);
	void __fastcall SetFloat(const System::UnicodeString Name, const double Value);
	void __fastcall SetDateTime(const System::UnicodeString Name, const System::TDateTime Value);
	void __fastcall SetUtcDateTime(const System::UnicodeString Name, const System::TDateTime Value);
	void __fastcall SetObject(const System::UnicodeString Name, const TJsonObject* Value);
	void __fastcall SetArray(const System::UnicodeString Name, const TJsonArray* Value);
	TJsonDataType __fastcall GetType(const System::UnicodeString Name);
	System::UnicodeString __fastcall GetName(int Index);
	PJsonDataValue __fastcall GetItem(int Index);
	void __fastcall SetValue(const System::UnicodeString Name, const TJsonDataValueHelper &Value);
	TJsonDataValueHelper __fastcall GetValue(const System::UnicodeString Name);
	void __fastcall InternAdd(System::UnicodeString &AName, const System::UnicodeString AValue)/* overload */;
	void __fastcall InternAdd(System::UnicodeString &AName, const int AValue)/* overload */;
	void __fastcall InternAdd(System::UnicodeString &AName, const __int64 AValue)/* overload */;
	void __fastcall InternAdd(System::UnicodeString &AName, const unsigned __int64 AValue)/* overload */;
	void __fastcall InternAdd(System::UnicodeString &AName, const double AValue)/* overload */;
	void __fastcall InternAdd(System::UnicodeString &AName, const System::TDateTime AValue)/* overload */;
	void __fastcall InternAdd(System::UnicodeString &AName, const bool AValue)/* overload */;
	void __fastcall InternAdd(System::UnicodeString &AName, const TJsonArray* AValue)/* overload */;
	void __fastcall InternAdd(System::UnicodeString &AName, const TJsonObject* AValue)/* overload */;
	TJsonArray* __fastcall InternAddArray(System::UnicodeString &AName);
	TJsonObject* __fastcall InternAddObject(System::UnicodeString &AName);
	PJsonDataValue __fastcall InternAddItem(System::UnicodeString &Name);
	PJsonDataValue __fastcall AddItem(const System::UnicodeString Name);
	void __fastcall Grow(void);
	void __fastcall InternApplyCapacity(void);
	void __fastcall SetCapacity(const int Value);
	TJsonDataValueHelper __fastcall GetPath(const System::UnicodeString NamePath);
	void __fastcall SetPath(const System::UnicodeString NamePath, const TJsonDataValueHelper &Value);
	int __fastcall IndexOfPChar(System::WideChar * S, int Len);
	void __fastcall PathError(System::WideChar * P, System::WideChar * EndP);
	void __fastcall PathNullError(System::WideChar * P, System::WideChar * EndP);
	void __fastcall PathIndexError(System::WideChar * P, System::WideChar * EndP, int Count);
	
protected:
	virtual void __fastcall InternToJSON(TJsonOutputWriter &Writer);
	PJsonDataValue __fastcall FindCaseInsensitiveItem(const System::UnicodeString ACaseInsensitiveName);
	
public:
	__fastcall virtual ~TJsonObject(void);
	void __fastcall Assign(TJsonObject* ASource);
	HIDESBASE TJsonObject* __fastcall Clone(void);
	void __fastcall ToSimpleObject(System::TObject* AObject, bool ACaseSensitive = true);
	void __fastcall FromSimpleObject(System::TObject* AObject, bool ALowerCamelCase = false);
	void __fastcall Clear(void);
	void __fastcall Remove(const System::UnicodeString Name);
	void __fastcall Delete(int Index);
	int __fastcall IndexOf(const System::UnicodeString Name);
	bool __fastcall Contains(const System::UnicodeString Name);
	TJsonBaseObject* __fastcall Extract(const System::UnicodeString Name);
	TJsonArray* __fastcall ExtractArray(const System::UnicodeString Name);
	TJsonObject* __fastcall ExtractObject(const System::UnicodeString Name);
	TJsonObjectEnumerator __fastcall GetEnumerator();
	bool __fastcall IsNull(const System::UnicodeString Name);
	__property TJsonDataType Types[const System::UnicodeString Name] = {read=GetType};
	__property TJsonDataValueHelper Values[const System::UnicodeString Name] = {read=GetValue, write=SetValue/*, default*/};
	__property System::UnicodeString S[const System::UnicodeString Name] = {read=GetString, write=SetString};
	__property int I[const System::UnicodeString Name] = {read=GetInt, write=SetInt};
	__property __int64 L[const System::UnicodeString Name] = {read=GetLong, write=SetLong};
	__property unsigned __int64 U[const System::UnicodeString Name] = {read=GetULong, write=SetULong};
	__property double F[const System::UnicodeString Name] = {read=GetFloat, write=SetFloat};
	__property System::TDateTime D[const System::UnicodeString Name] = {read=GetDateTime, write=SetDateTime};
	__property System::TDateTime DUtc[const System::UnicodeString Name] = {read=GetUtcDateTime, write=SetUtcDateTime};
	__property bool B[const System::UnicodeString Name] = {read=GetBool, write=SetBool};
	__property TJsonArray* A[const System::UnicodeString Name] = {read=GetArray, write=SetArray};
	__property TJsonObject* O[const System::UnicodeString Name] = {read=GetObj, write=SetObject};
	__property TJsonDataValueHelper Path[const System::UnicodeString NamePath] = {read=GetPath, write=SetPath};
	__property System::UnicodeString Names[int Index] = {read=GetName};
	__property PJsonDataValue Items[int Index] = {read=GetItem};
	__property int Count = {read=FCount, nodefault};
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
public:
	/* TObject.Create */ inline __fastcall TJsonObject(void) : TJsonBaseObject() { }
	
};


struct TJsonSerializationConfig
{
	
public:
	System::UnicodeString LineBreak;
	System::UnicodeString IndentChar;
	bool UseUtcTime;
	bool NullConvertsToValueTypes;
};


typedef TJsonBaseObject TJDOJsonBaseObject;

typedef TJsonObject TJDOJsonObject;

typedef TJsonArray TJDOJsonArray;

//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TJsonSerializationConfig JsonSerializationConfig;

}	/* namespace Jsondataobjects */
using namespace Jsondataobjects;
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// JsondataobjectsHPP
