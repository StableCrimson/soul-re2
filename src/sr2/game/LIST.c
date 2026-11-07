#include "common.h"

INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_InsertFunc);

void LIST_DeleteFunc(NodeType *node)
{
    if (node->prev != NULL)
    {
        if (node->next != NULL)
        {
            node->prev->next = node->next;
            node->next->prev = node->prev;
            node->prev = NULL;
            node->next = NULL;
            
            return;
        }
    }
    else if (node->next)
    {
        node->next->prev = NULL;
        node->prev = NULL;
        node->next = NULL;

        return;
    }
    
    if (node->prev)
    {
        node->prev->next = NULL;
        node->prev = NULL;
    }
    else
    {
        node->prev = NULL;
    }
    
    node->next = NULL;
}

INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_GetFunc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_LastOrdered);

INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_SortFunc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_HeadFunc);

INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_Flip);

INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_Count);

INCLUDE_ASM("asm/nonmatchings/sr2/game/LIST", LIST_Concatenate);
