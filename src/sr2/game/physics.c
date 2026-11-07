#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", SetNoPtCollideInFamily);

void ResetNoPtCollideInFamily(Instance *instance)
{
    Instance *child;

    instance->iflags &= 0xFFFFFFBF; // TODO: find out why it won't take the inverted form of the mask (~0x40)

    for (child = instance->LinkChild; child != NULL; child = child->LinkSibling)
    {
        ResetNoPtCollideInFamily(child);
    }
}

void PHYSICS_CheckLineInWorldMask(Instance *instance, PCollideInfo *pcollideInfo); // TODO: move this to the header
void PHYSICS_CheckLineInWorld(Instance *instance, PCollideInfo *pcollideInfo) 
{
    pcollideInfo->collideType = 63;

    PHYSICS_CheckLineInWorldMask(instance, pcollideInfo);
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckLineInWorldMask);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckLinkedMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsDefaultLinkedMoveResponse);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckGravity);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsDefaultGravityResponse);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckEdgeGrabbing);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsDefaultEdgeGrabResponse);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckSliding);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsUpdateTface);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckBlockers);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckSwim);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsDefaultCheckSwimResponse);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsForceSetWater);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckLOS);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckDropHeight);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckDropOff);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckWallBend);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsFollowWall);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsCheckFeet);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsMoveLocalZClamp);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsSetVelFromZRot);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PhysicsSetVelFromRot);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_SetVAndAFromRot);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_FindAFromDAndT);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_FindVFromAAndD);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_StopIfCloseToTarget);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckForTerrainCollide);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckForObjectCollide);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckForValidMove);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckFaceStick);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_CheckDontGrabEdge);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_GenericLineCheckSetup);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_GenericLineCheckSetupf);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_GenericLineCheck);

INCLUDE_ASM("asm/nonmatchings/sr2/game/physics", PHYSICS_GenericLineCheckMask);
