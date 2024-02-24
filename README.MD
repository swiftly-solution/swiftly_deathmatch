<p align="center">
  <a href="https://github.com/swiftly-solution/swiftly_deathmatch">
    <img src="https://cdn.swiftlycs2.net/swiftly-logo.png" alt="SwiftlyLogo" width="80" height="80">
  </a>

  <h3 align="center">[Swiftly] Deathmatch</h3>

  <p align="center">
    A simple plugin for swiftly that implements the basic functionality of a Deathmatch/FFA server.
    <br/>
  </p>
</p>

<p align="center">
  <img src="https://img.shields.io/github/downloads/swiftly-solution/swiftly_deathmatch/total" alt="Downloads"> 
  <img src="https://img.shields.io/github/contributors/swiftly-solution/swiftly_deathmatch?color=dark-green" alt="Contributors">
  <img src="https://img.shields.io/github/issues/swiftly-solution/swiftly_deathmatch" alt="Issues">
  <img src="https://img.shields.io/github/license/swiftly-solution/swiftly_deathmatch" alt="License">
</p>

---

### Installation 👀

1. Download the newest [release](https://github.com/swiftly-solution/swiftly_deathmatch/releases).
2. Everything is drag & drop, so i think you can do it!
3. Setup database connection in `addons/swiftly/configs/databases.json` with the key `swiftly_deathmatch` like in the following example:
```json
{
    "swiftly_deathmatch": {
        "host": "...",
        "username": "...",
        "password": "...",
        "database": "...",
        "port": 3306
    }
}
```
(!) Don't forget to replace the `...` with the actual values !!

4. While developing the plugin, I have been using a config with a few settings, that works for a basic Deathmatch/FFA server, if you want to use the same settings as me, use the provided cfg in the archive, if not, make your own settings (cvars).

### Features ✨

* Instant Respawning after death.
* HP Regen on kill.
* Ammo Refill on kill.
* Choosing the guns through a menu (!guns) or through chat commands (!ak47, !m4a4, !m4a1, !deagle, etc)


### Configuring the plugin 🧐

* After installing the plugin, you should change the default prefix and the default translation messages from ``addons/swiftly/translations/translation.swiftly_deathmatch.json`` (optional).
* To change the value of the HP Regen, edit ``addons/swiftly/configs/plugins/deathmatch.json``.

### How does it work? 🤔

* When the player connects for the first time, it inserts a new field into the ``player_guns`` table in DB with the following structure: ``steamid``, ``primarygun``, ``secondarygun``.
* When a player chooses a weapon (from the guns menu or through a chat command), it inserts that gun into the DB (wheter it is a primary or a secondary weapon) and next time he reconnects on the server he will have that weapon, so no need for choosing the same weapon everytime you reconnect.

## Plugins to use with 💡

* [swiftly_rank](https://github.com/swiftly-solution/swiftly_rank) - It provides an smooth experience without any flaws and it is easy to install.
* [swiftly_removedefaultmessages](https://github.com/swiftly-solution/swiftly_removedefaultmessages) - It removes the annoying default messages from the chat (such as joining a team, etc)

### TODO 🛡️

* Command Cooldown (will be done ASAP).
* Killstreak messages in the chat.

### Creating A Pull Request 😃

1. Fork the Project
2. Create your Feature Branch
3. Commit your Changes
4. Push to the Branch
5. Open a Pull Request

### Have ideas/Found bugs? 💡
Join [Swiftly Discord Server](https://swiftlycs2.net/discord) and send a message in the topic from `📕╎plugins-sharing` of this plugin!
