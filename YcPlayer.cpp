/*************************************************************************
  Crytek Source File.
 
 -------------------------------------------------------------------------
  $Id$
  $DateTime$
  Description: Implements the Owner player.
  
 -------------------------------------------------------------------------
  History:
  - 22:8:2013: Created by SallahAdDin

*************************************************************************/
#include "StdAfx.h"
#include "YcPlayer.h"

CYcPlayer::CYcPlayer()
{

}

CYcPlayer::~CYcPlayer()
{

}

bool CYcPlayer::Init(IGameObject *pGameObject)
{   
   gEnv->pLog->Log("CYcPlayer::Init is working");
   return CPlayer::Init(pGameObject);
}

void CYcPlayer::Update(SEntityUpdateContext& ctx, int updateSlot)
{
//This stops it from spamming the console
   for(int i = 0; i < 1; i++)
   { 
     i++;
   gEnv->pLog->Log("CYcPlayer::Update is working");;
}
   CPlayer::Update(ctx, updateSlot);
}