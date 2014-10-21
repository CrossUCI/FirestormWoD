/*
* Copyright (C) 2012-2014 JadeCore <http://www.pandashan.com>
* Copyright (C) 2008-2012 TrinityCore <http://www.trinitycore.org/>
* Copyright (C) 2006-2009 ScriptDev2 <https://scriptdev2.svn.sourceforge.net/>
*
* This program is free software; you can redistribute it and/or modify it
* under the terms of the GNU General Public License as published by the
* Free Software Foundation; either version 2 of the License, or (at your
* option) any later version.
*
* This program is distributed in the hope that it will be useful, but WITHOUT
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for
* more details.
*
* You should have received a copy of the GNU General Public License along
* with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#include "ScriptMgr.h"
#include "ScriptedCreature.h"
#include "ObjectMgr.h"
#include "ScriptMgr.h"
#include "SpellScript.h"
#include "upper_blackrock_spire.h"

enum eSpells
{
};

enum eEvents
{
};

enum eSays
{
};

enum eActions
{
};

class boss_commander_tharbek : public CreatureScript
{
    public:
        boss_commander_tharbek() : CreatureScript("boss_commander_tharbek") { }

        struct boss_commander_tharbekAI : public BossAI
        {
            boss_commander_tharbekAI(Creature* p_Creature) : BossAI(p_Creature, DATA_COMMANDER_THARBEK) { }

            void Reset()
            {
            }

            void KilledUnit(Unit* p_Who)
            {
            }

            void EnterCombat(Unit* p_Attacker)
            {
            }

            void JustDied(Unit* p_Killer)
            {
            }

            void DoAction(const int32 p_Action)
            {
            }

            void UpdateAI(const uint32 p_Diff)
            {
            }
        };

        CreatureAI* GetAI(Creature* p_Creature) const
        {
            return new boss_commander_tharbekAI(p_Creature);
        }
};

void AddSC_boss_commander_tharbek()
{
    new boss_commander_tharbek();
}
