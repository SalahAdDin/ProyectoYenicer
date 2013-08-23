/*************************************************************************
  Crytek Source File.
 
 -------------------------------------------------------------------------
  $Id$
  $DateTime$
  Description: Implements the Bandage Item.
  
 -------------------------------------------------------------------------
  History:
  - 22:8:2013: Created by SallahAdDin

*************************************************************************/
#ifndef _Bandage_
#define _Bandage_
    
#include "Item.h" //Implements CItem Class

class CBandage : public CGameObjectExtensionHelper<CBandage, CItem>
{
public:
       CBandage();
      ~CBandage();

      bool Init(IGameObject *pGameObject) {return true;}
      void PostInit(IGameObject *pGameObject) {};
      void Update( SEntityUpdateContext &ctx, int updateSlot) {};
      void PostUpdate(float frameTime ) {};
      void FullSerialize(TSerialize Ser) {};
      void Release() {};
      void InitClient(int channelId) {};
      void PostInitClient(int channelId) {};
      bool ReloadExtension( IGameObject * pGameObject, const SEntitySpawnParams &params ) {};
      void PostReloadExtension( IGameObject * pGameObject, const SEntitySpawnParams &params );
      bool GetEntityPoolSignature( TSerialize signature ) {return false;};
      bool NetSerialize(TSerialize ser, EEntityAspects aspect, uint8 profile, int pflags) {return false;};
      void PostSerialize() {};
      void SerializeSpawnInfo( TSerialize ser ) {};
      ISerializableInfoPtr GetSpawnInfo() {return 0;};
      void PostRemoteSpawn() {};
      void HandleEvent( const SGameObjectEvent &) {};
      void ProcessEvent(SEntityEvent &) {};
      void SetChannelId(uint16 id) {};
      void SetAuthority(bool auth) {};
      void GetMemoryUsage(ICrySizer * s) const { s->Add(*this); }
};

#endif