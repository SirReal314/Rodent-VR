//
// C:\Users\Ryan\Drive\BYU\2018_Fall\cs_497r\Rodent-VR\RodentVR\Intermediate\Build\Win64\RodentVR\Shipping\Chaos\PBDJointSolverGaussSeidel.ispc.generated.dummy_avx.h
// (Header automatically generated by the ispc compiler.)
// DO NOT EDIT THIS FILE.
//

#pragma once
#include <stdint.h>



#ifdef __cplusplus
namespace ispc { /* namespace */
#endif // __cplusplus
///////////////////////////////////////////////////////////////////////////
// Vector types with external visibility from ispc code
///////////////////////////////////////////////////////////////////////////

#ifndef __ISPC_VECTOR_float4__
#define __ISPC_VECTOR_float4__
#ifdef _MSC_VER
__declspec( align(16) ) struct float4 { float v[4]; };
#else
struct float4 { float v[4]; } __attribute__ ((aligned(16)));
#endif
#endif



#ifndef __ISPC_ALIGN__
#if defined(__clang__) || !defined(_MSC_VER)
// Clang, GCC, ICC
#define __ISPC_ALIGN__(s) __attribute__((aligned(s)))
#define __ISPC_ALIGNED_STRUCT__(s) struct __ISPC_ALIGN__(s)
#else
// Visual Studio
#define __ISPC_ALIGN__(s) __declspec(align(s))
#define __ISPC_ALIGNED_STRUCT__(s) __ISPC_ALIGN__(s) struct
#endif
#endif

#ifndef __ISPC_STRUCT_FVector4__
#define __ISPC_STRUCT_FVector4__
struct FVector4 {
    float4  V;
};
#endif

#ifndef __ISPC_STRUCT_FVector__
#define __ISPC_STRUCT_FVector__
struct FVector {
    float V[3];
};
#endif

#ifndef __ISPC_STRUCT_FRigidTransform__
#define __ISPC_STRUCT_FRigidTransform__
struct FRigidTransform {
    struct FVector4 Rotation;
    struct FVector Translation;
    struct FVector Scale3D;
};
#endif

#ifndef __ISPC_STRUCT_FJointSolverGaussSeidel__
#define __ISPC_STRUCT_FJointSolverGaussSeidel__
struct FJointSolverGaussSeidel {
    struct FRigidTransform XLs[2];
    struct FVector InvILs[2];
    float InvMs[2];
    struct FVector Xs[2];
    float LinearSoftLambda;
    float LinearDriveLambda;
    struct FVector4 Rs[2];
    struct FVector Ps[2];
    float TwistSoftLambda;
    float SwingSoftLambda;
    struct FVector4 Qs[2];
    struct FVector Vs[2];
    struct FVector Ws[2];
    struct FVector PrevPs[2];
    float TwistDriveLambda;
    float SwingDriveLambda;
    struct FVector4 PrevQs[2];
    struct FVector PrevXs[2];
    float AngularPositionCorrection;
    float PositionTolerance;
    float AngleTolerance;
};
#endif


///////////////////////////////////////////////////////////////////////////
// Functions exported from ispc code
///////////////////////////////////////////////////////////////////////////
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
extern "C" {
#endif // __cplusplus
    extern void ApplyPointPositionConstraintDD(struct FJointSolverGaussSeidel * M, const struct FVector &CX, const float LinearStiffness);
    extern void ApplyPointPositionConstraintKD(struct FJointSolverGaussSeidel * M, const int32_t KIndex, const int32_t DIndex, const struct FVector &CX, const float LinearStiffness);
    extern void ApplyPositionConstraintSoft(struct FJointSolverGaussSeidel * M, const float Dt, const float Stiffness, const float Damping, const bool bAccelerationMode, const struct FVector &Axis, const float Delta, float &Lambda);
    extern void ApplyPositionProjection(struct FJointSolverGaussSeidel * M, const struct FVector &CX, const float CXLen, const float ParentMassScale, const float Stiffness);
    extern void ApplyRotationConstraintSoftDD(struct FJointSolverGaussSeidel * M, const float Dt, const float Stiffness, const float Damping, const bool bAccelerationMode, const struct FVector &Axis, const float Angle, float &Lambda);
    extern void ApplyRotationConstraintSoftKD(struct FJointSolverGaussSeidel * M, const int32_t KIndex, const int32_t DIndex, const float Dt, const float Stiffness, const float Damping, const bool bAccelerationMode, const struct FVector &Axis, const float Angle, float &Lambda);
    extern int32_t SizeofFJointSolverGaussSeidel();
#if defined(__cplusplus) && (! defined(__ISPC_NO_EXTERN_C) || !__ISPC_NO_EXTERN_C )
} /* end extern C */
#endif // __cplusplus


#ifdef __cplusplus
} /* namespace */
#endif // __cplusplus
