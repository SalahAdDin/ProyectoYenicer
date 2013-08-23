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

CYcPlayer::CYcPlayer(void)
{
	g_pGame->GetGameRules()->AddHitListener(this);
}


CYcPlayer::~CYcPlayer(void)
{
	g_pGame->GetGameRules()->RemoveHitListener(this);
}

bool CYcPlayer::Init(IGameObject * pGameObject)
{
	return CPlayer::Init(pGameObject);
}

void CYcPlayer::Revive( bool fromInit )
{
	CPlayer::Revive(fromInit);
}

void CYcPlayer::Update(SEntityUpdateContext& ctx, int updateSlot)
{
	CPlayer::Update(ctx, updateSlot);
}

void CYcPlayer::FullSerialize( TSerialize ser )
{

	CPlayer::FullSerialize(ser);
}

void CYcPlayer::OnHit(const HitInfo& hitInfo)
{

}

void CYcPlayer::OnExplosion(const ExplosionInfo&)
{

}

void CYcPlayer::OnServerExplosion(const ExplosionInfo&)
{

}