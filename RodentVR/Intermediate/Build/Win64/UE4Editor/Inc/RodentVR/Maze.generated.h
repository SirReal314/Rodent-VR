// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef RODENTVR_Maze_generated_h
#error "Maze.generated.h already included, missing '#pragma once' in Maze.h"
#endif
#define RODENTVR_Maze_generated_h

#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_SPARSE_DATA
#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMazeTag); \
	DECLARE_FUNCTION(execSetTextures); \
	DECLARE_FUNCTION(execGetTextures); \
	DECLARE_FUNCTION(execSetMazeName); \
	DECLARE_FUNCTION(execGetMazeName);


#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMazeTag); \
	DECLARE_FUNCTION(execSetTextures); \
	DECLARE_FUNCTION(execGetTextures); \
	DECLARE_FUNCTION(execSetMazeName); \
	DECLARE_FUNCTION(execGetMazeName);


#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMaze(); \
	friend struct Z_Construct_UClass_AMaze_Statics; \
public: \
	DECLARE_CLASS(AMaze, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/RodentVR"), NO_API) \
	DECLARE_SERIALIZER(AMaze)


#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMaze(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMaze) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public:


#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMaze(AMaze&&); \
	NO_API AMaze(const AMaze&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMaze); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMaze); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMaze)


#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MazeName() { return STRUCT_OFFSET(AMaze, MazeName); } \
	FORCEINLINE static uint32 __PPO__StaticMesh() { return STRUCT_OFFSET(AMaze, StaticMesh); } \
	FORCEINLINE static uint32 __PPO__Textures() { return STRUCT_OFFSET(AMaze, Textures); }


#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_9_PROLOG
#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_RPC_WRAPPERS \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_INCLASS \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_PRIVATE_PROPERTY_OFFSET \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_SPARSE_DATA \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_INCLASS_NO_PURE_DECLS \
	RodentVR_Source_RodentVR_Private_Simulator_Maze_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RODENTVR_API UClass* StaticClass<class AMaze>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID RodentVR_Source_RodentVR_Private_Simulator_Maze_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS