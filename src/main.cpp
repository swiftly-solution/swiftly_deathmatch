#include <swiftly/swiftly.h>
#include <swiftly/server.h>
#include <swiftly/database.h>
#include <swiftly/commands.h>
#include <swiftly/configuration.h>
#include <swiftly/logger.h>
#include <swiftly/timers.h>
#include <swiftly/gameevents.h>
#include <swiftly/menus.h>

Server *server = nullptr;
PlayerManager *g_playerManager = nullptr;
Database *db = nullptr;
Commands *commands = nullptr;
Configuration *config = nullptr;
Logger *logger = nullptr;
Timers *timers = nullptr;
Menus *menus = nullptr;

void OnProgramLoad(const char *pluginName, const char *mainFilePath)
{
    Swiftly_Setup(pluginName, mainFilePath);

    server = new Server();
    g_playerManager = new PlayerManager();
    commands = new Commands(pluginName);
    config = new Configuration();
    logger = new Logger(mainFilePath, pluginName);
    timers = new Timers();
    menus = new Menus(pluginName);


}

void Command_Ak47(int playerID, const char **args, uint32_t argsCount, bool silent)
{
     if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;

    

    Weapon* currentWeapon = player->weapons->GetWeaponFromSlot(WeaponSlot::RIFLE);
    currentWeapon->Remove();
    player->weapons->GiveWeapon("weapon_ak47");
    db->Query("UPDATE %s SET primarygun = 'weapon_ak47' WHERE steamid = '%llu'", "players_guns", player->GetSteamID());
    player->SendMsg(HUD_PRINTTALK, "%s %s AK-47", FetchTranslation("swiftly_deathmatch.prefix"), FetchTranslation("swiftly_deathmatch.selected_primary"));
    player->HideMenu();
}


void Command_AWP(int playerID, const char **args, uint32_t argsCount, bool silent)
{
     if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;

    

    Weapon* currentWeapon = player->weapons->GetWeaponFromSlot(WeaponSlot::RIFLE);
    currentWeapon->Remove();
    player->weapons->GiveWeapon("weapon_awp");
    db->Query("UPDATE %s SET primarygun = 'weapon_awp' WHERE steamid = '%llu'", "players_guns", player->GetSteamID());
    player->SendMsg(HUD_PRINTTALK, "%s %s AWP", FetchTranslation("swiftly_deathmatch.prefix"), FetchTranslation("swiftly_deathmatch.selected_primary"));
    player->HideMenu();

}

void Command_M4A4(int playerID, const char **args, uint32_t argsCount, bool silent)
{
     if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;

    

    Weapon* currentWeapon = player->weapons->GetWeaponFromSlot(WeaponSlot::RIFLE);
    currentWeapon->Remove();
    player->weapons->GiveWeapon("weapon_m4a1");
    db->Query("UPDATE %s SET primarygun = 'weapon_m4a1' WHERE steamid = '%llu'", "players_guns", player->GetSteamID());
    player->SendMsg(HUD_PRINTTALK, "%s %s M4A4", FetchTranslation("swiftly_deathmatch.prefix"), FetchTranslation("swiftly_deathmatch.selected_primary"));
    player->HideMenu();

}

void Command_M4A1(int playerID, const char **args, uint32_t argsCount, bool silent)
{
     if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;

    

    Weapon* currentWeapon = player->weapons->GetWeaponFromSlot(WeaponSlot::RIFLE);
    currentWeapon->Remove();
    player->weapons->GiveWeapon("weapon_m4a1_silencer");
    db->Query("UPDATE %s SET primarygun = 'weapon_m4a1_silencer' WHERE steamid = '%llu'", "players_guns", player->GetSteamID());
    player->SendMsg(HUD_PRINTTALK, "%s %s M4A1-S", FetchTranslation("swiftly_deathmatch.prefix"), FetchTranslation("swiftly_deathmatch.selected_primary"));
    player->HideMenu();

}

void Command_SG(int playerID, const char **args, uint32_t argsCount, bool silent)
{
     if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;
    
    

    Weapon* currentWeapon = player->weapons->GetWeaponFromSlot(WeaponSlot::RIFLE);
    currentWeapon->Remove();
    player->weapons->GiveWeapon("weapon_sg556");
    db->Query("UPDATE %s SET primarygun = 'weapon_sg556' WHERE steamid = '%llu'", "players_guns", player->GetSteamID());
    player->SendMsg(HUD_PRINTTALK, "%s %s SG-556", FetchTranslation("swiftly_deathmatch.prefix"), FetchTranslation("swiftly_deathmatch.selected_primary"));
    player->HideMenu();
}

void Command_AUG(int playerID, const char **args, uint32_t argsCount, bool silent)
{
     if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;

    

    Weapon* currentWeapon = player->weapons->GetWeaponFromSlot(WeaponSlot::RIFLE);
    currentWeapon->Remove();
    player->weapons->GiveWeapon("weapon_aug");
    db->Query("UPDATE %s SET primarygun = 'weapon_aug' WHERE steamid = '%llu'", "players_guns", player->GetSteamID());
    player->SendMsg(HUD_PRINTTALK, "%s %s AUG", FetchTranslation("swiftly_deathmatch.prefix"), FetchTranslation("swiftly_deathmatch.selected_primary"));
    player->HideMenu();

}



void Command_Deagle(int playerID, const char **args, uint32_t argsCount, bool silent)
{
     if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;

    

    Weapon* currentWeapon = player->weapons->GetWeaponFromSlot(WeaponSlot::PISTOL);
    currentWeapon->Remove();
    player->weapons->GiveWeapon("weapon_deagle");
    db->Query("UPDATE %s SET secondarygun = 'weapon_deagle' WHERE steamid = '%llu'", "players_guns", player->GetSteamID());
    player->SendMsg(HUD_PRINTTALK, "%s %s Deagle", FetchTranslation("swiftly_deathmatch.prefix"), FetchTranslation("swiftly_deathmatch.selected_secondary"));
    player->HideMenu();
}


void Command_P250(int playerID, const char **args, uint32_t argsCount, bool silent)
{
     if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;

    

    Weapon* currentWeapon = player->weapons->GetWeaponFromSlot(WeaponSlot::PISTOL);
    currentWeapon->Remove();
    player->weapons->GiveWeapon("weapon_p250");
    db->Query("UPDATE %s SET secondarygun = 'weapon_p250' WHERE steamid = '%llu'", "players_guns", player->GetSteamID());
    player->SendMsg(HUD_PRINTTALK, "%s %s P250", FetchTranslation("swiftly_deathmatch.prefix"), FetchTranslation("swiftly_deathmatch.selected_secondary"));
    player->HideMenu();
}
 
void Command_GunMenu(int playerID, const char **args, uint32_t argsCount, bool silent)
{

    if (playerID == -1)
        return;

    if (!db->IsConnected())
        return;

        Player *player = g_playerManager->GetPlayer(playerID);

        if (player == nullptr)
        return;

    player->ShowMenu("guns");
}

void OnPlayerDeath(Player* player, Player* attacker, Player* assister, bool assistedflash, const char* weapon, bool headshot, short dominated, short revenge, short wipe, short penetrated, bool noreplay, bool noscope, bool thrusmoke, bool attackerblind, float distance, short dmg_health, short dmg_armor, short hitgroup)
{

    if (!attacker)
        return;

    Weapon* currentWeapon = attacker->weapons->GetWeaponFromSlot(WeaponSlot::CURRENT_WEAPON);
int regenHP = config->Fetch<int>("deathmatch.Settings.HPRegen");

NextTick([currentWeapon, regenHP, attacker]() -> void {
    if (std::string(currentWeapon->GetName()) == "weapon_ak47") {
        currentWeapon->SetClipAmmo(30);
        currentWeapon->SetReserveAmmo(90);
        attacker->health->Set(std::min(attacker->health->Get() + regenHP, 100));
        attacker->weapons->GiveWeapon("item_assaultsuit");
        attacker->SetHealthShotBoostEffectExpirationTime(server->GetCurrentTime() + 1);
    } else if (std::string(currentWeapon->GetName()) == "weapon_awp") {
        currentWeapon->SetClipAmmo(5);
        currentWeapon->SetReserveAmmo(30);
        attacker->health->Set(std::min(attacker->health->Get() + regenHP, 100));
        attacker->weapons->GiveWeapon("item_assaultsuit");
        attacker->SetHealthShotBoostEffectExpirationTime(server->GetCurrentTime() + 1);
    } else if (std::string(currentWeapon->GetName()) == "weapon_m4a1") {
        if (currentWeapon->GetSilencerType() == WeaponSilencerType::NONE) {
            currentWeapon->SetClipAmmo(30);
            currentWeapon->SetReserveAmmo(90);
        } else if (currentWeapon->GetSilencerType() == WeaponSilencerType::DETACHABLE || 
                   currentWeapon->GetSilencerType() == WeaponSilencerType::INTEGRATED) {
            currentWeapon->SetClipAmmo(20);
            currentWeapon->SetReserveAmmo(80);
        }
        attacker->health->Set(std::min(attacker->health->Get() + regenHP, 100));
        attacker->weapons->GiveWeapon("item_assaultsuit");
        attacker->SetHealthShotBoostEffectExpirationTime(server->GetCurrentTime() + 1);
    } else if (std::string(currentWeapon->GetName()) == "weapon_deagle") {
        currentWeapon->SetClipAmmo(7);
        currentWeapon->SetReserveAmmo(35);
        attacker->health->Set(std::min(attacker->health->Get() + regenHP, 100));
        attacker->weapons->GiveWeapon("item_assaultsuit");
        attacker->SetHealthShotBoostEffectExpirationTime(server->GetCurrentTime() + 1);
    } else if (std::string(currentWeapon->GetName()) == "weapon_sg556") {
        currentWeapon->SetClipAmmo(30);
        currentWeapon->SetReserveAmmo(90);
        attacker->health->Set(std::min(attacker->health->Get() + regenHP, 100));
        attacker->weapons->GiveWeapon("item_assaultsuit");
    attacker->SetHealthShotBoostEffectExpirationTime(server->GetCurrentTime() + 1);
    } else if (std::string(currentWeapon->GetName()) == "weapon_aug") {
        currentWeapon->SetClipAmmo(30);
        currentWeapon->SetReserveAmmo(90);
        attacker->health->Set(std::min(attacker->health->Get() + regenHP, 100));
        attacker->weapons->GiveWeapon("item_assaultsuit");
        attacker->SetHealthShotBoostEffectExpirationTime(server->GetCurrentTime() + 1);

    }
});
}

void OnPluginStart()
{
    db = new Database("swiftly_deathmatch");
    DB_Result result = db->Query("CREATE TABLE IF NOT EXISTS `players_guns` (`steamid` varchar(128) NOT NULL, `primarygun` varchar(128) NOT NULL, `secondarygun` varchar(128) NOT NULL) ENGINE=InnoDB DEFAULT CHARSET=latin1 COLLATE=latin1_swedish_ci;");
    if (result.size() > 0)
        db->Query("ALTER TABLE `players_guns` ADD UNIQUE KEY `steamid` (`steamid`);");


    commands->Register("ak47", reinterpret_cast<void *>(&Command_Ak47));
    commands->Register("ak", reinterpret_cast<void *>(&Command_Ak47));
    commands->Register("awp", reinterpret_cast<void *>(&Command_AWP));
    commands->Register("m4a4", reinterpret_cast<void *>(&Command_M4A4));
    commands->Register("m4", reinterpret_cast<void *>(&Command_M4A4));
    commands->Register("m4a1", reinterpret_cast<void *>(&Command_M4A1));
    commands->Register("m4a1s", reinterpret_cast<void *>(&Command_M4A1));
    commands->Register("deagle", reinterpret_cast<void *>(&Command_Deagle));
    commands->Register("dgl", reinterpret_cast<void *>(&Command_Deagle));
    commands->Register("p250", reinterpret_cast<void *>(&Command_P250));
    commands->Register("sg", reinterpret_cast<void *>(&Command_SG));
    commands->Register("aug", reinterpret_cast<void *>(&Command_AUG));
    commands->Register("guns", reinterpret_cast<void *>(&Command_GunMenu));
    commands->Register("gunsmenu", reinterpret_cast<void *>(&Command_GunMenu));

    timers->RegisterTimer(500, []() -> void {
    for(uint16_t i = 0; i < g_playerManager->GetPlayerCap(); i++) {
        Player* player = g_playerManager->GetPlayer(i);
        if(!player) continue;

        if(std::max(player->health->Get(), 0) == 0) player->Respawn();
    }
});

    menus->RegisterMenu("guns", "Guns Menu", "344CEB", {
    { "AK-47", "sw_ak47" },
    { "M4A4", "sw_m4a4" },
    { "M4A1-S", "sw_m4a1" },
    { "AWP", "sw_awp" },
    { "SG-556", "sw_sg" },
    { "AUG", "sw_aug" },
    { "Deagle", "sw_deagle" },
    { "P250", "sw_p250"},
});

}


void OnPlayerSpawn(Player *player)
{
        if (!db->IsConnected())
            return;

        if (player->IsFirstSpawn() && !player->IsFakeClient())
            db->Query("insert ignore into `players_guns` (steamid, primarygun, secondarygun) values ('%llu', 'weapon_ak47', 'weapon_deagle')", player->GetSteamID());

        DB_Result result = db->Query("select * from `players_guns` where steamid = '%llu' limit 1", player->GetSteamID());
        if (result.size() > 0) {
            player->weapons->GiveWeapon(db->fetchValue<const char*>(result, 0, "primarygun"));
            Weapon* currentRifle = player->weapons->GetWeaponFromSlot(WeaponSlot::RIFLE);
            if (std::string(currentRifle->GetName()) == "weapon_m4a1_silencer")
            {
                currentRifle->SetClipAmmo(20);
                currentRifle->SetReserveAmmo(80);
            }
            player->weapons->GiveWeapon(db->fetchValue<const char*>(result, 0, "secondarygun"));
            player->weapons->GiveWeapon("item_assaultsuit");
        }
        
}

void OnPluginStop()
{
}

const char *GetPluginAuthor()
{
    return "Swiftly Solution";
}

const char *GetPluginVersion()
{
    return "1.0.0";
}

const char *GetPluginName()
{
    return "swiftly_deathmatch";
}

const char *GetPluginWebsite()
{
    return "https://github.com/swiftly-solution/swiftly_deathmatch";
}
