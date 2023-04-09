#pragma once

// Dumped with Dumper-7!

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EGameplayTagQueryExprType : uint8
{
	Undefined                      = 0,
	AnyTagsMatch                   = 1,
	AllTagsMatch                   = 2,
	NoTagsMatch                    = 3,
	AnyExprMatch                   = 4,
	AllExprMatch                   = 5,
	NoExprMatch                    = 6,
	EGameplayTagQueryExprType_MAX  = 7,
};

enum class EGameplayContainerMatchType : uint8
{
	Any                            = 0,
	All                            = 1,
	EGameplayContainerMatchType_MAX = 2,
};

enum class EGameplayTagMatchType : uint8
{
	Explicit                       = 0,
	IncludeParentTags              = 1,
	EGameplayTagMatchType_MAX      = 2,
};

enum class EGameplayTagSourceType : uint8
{
	Native                         = 0,
	DefaultTagList                 = 1,
	TagList                        = 2,
	DataTable                      = 3,
	Invalid                        = 4,
	EGameplayTagSourceType_MAX     = 5,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct GameplayTags.GameplayTag
struct FGameplayTag
{
public:
	class FName                                  TagName;                                           // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagContainer
struct FGameplayTagContainer
{
public:
	TArray<struct FGameplayTag>                  GameplayTags;                                      // 0x0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FGameplayTag>                  ParentTags;                                        // 0x10(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct GameplayTags.GameplayTagQuery
struct FGameplayTagQuery
{
public:
	int32                                        TokenStreamVersion;                                // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F09[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FGameplayTag>                  TagDictionary;                                     // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                QueryTokenStream;                                  // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                UserDescription;                                   // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                AutoDescription;                                   // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
struct FGameplayTagCreationWidgetHelper
{
public:
	uint8                                        Pad_1F0A[0x1];                                     // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct GameplayTags.GameplayTagReferenceHelper
struct FGameplayTagReferenceHelper
{
public:
	uint8                                        Pad_1F0B[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct GameplayTags.GameplayTagNode
struct FGameplayTagNode
{
public:
	uint8                                        Pad_1F0C[0x50];                                    // Fixing Size Of Struct [ Dumper-7 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct GameplayTags.GameplayTagSource
struct FGameplayTagSource
{
public:
	class FName                                  SourceName;                                        // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EGameplayTagSourceType            SourceType;                                        // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F0D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameplayTagsList*                     SourceTagList;                                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x20 - 0x8)
// ScriptStruct GameplayTags.GameplayTagTableRow
struct FGameplayTagTableRow : public FTableRowBase
{
public:
	class FName                                  Tag;                                               // 0x8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DevComment;                                        // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct GameplayTags.GameplayTagCategoryRemap
struct FGameplayTagCategoryRemap
{
public:
	class FString                                BaseCategory;                                      // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        RemapCategories;                                   // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct GameplayTags.GameplayTagRedirect
struct FGameplayTagRedirect
{
public:
	class FName                                  OldTagName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  NewTagName;                                        // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif