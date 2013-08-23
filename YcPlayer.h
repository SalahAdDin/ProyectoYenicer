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

#ifndef _Yc_Player_
#define _Yc_Player_
    
#include "Player.h" //Implements CPlayer Class

class CYcPlayer : public CPlayer{
	public:
		CYcPlayer();	//Constructor
		virtual ~CYcPlayer();	//Destructor

		//Derived From CPlayer
		virtual bool Init(IGameObject * pGameObject);
		virtual void Revive( bool fromInit );
		virtual void Update(SEntityUpdateContext& ctx, int updateSlot);
		virtual void FullSerialize( TSerialize ser );

		//Derived From IHitListener
		virtual void OnHit(const HitInfo&);
		virtual void OnExplosion(const ExplosionInfo&);
		virtual void OnServerExplosion(const ExplosionInfo&);
};


#endif