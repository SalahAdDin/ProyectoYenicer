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

	//Overode from CPlayer
    virtual bool Init(IGameObject *pGameObject);
    virtual void Update(SEntityUpdateContext& ctx, int updateSlot);
   };

#endif