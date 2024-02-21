<br/>
<p align="center">
  <a href="https://github.com/swiftly-solution/swiftly_rank">
    <img src="https://media.discordapp.net/attachments/979452783466000466/1168236894652469248/Swiftly_Logo.png?ex=6575f264&is=65637d64&hm=dd2834983bebeab98d7febd44bb3bd20e9aded13ecefac63cc990b222a9d9e9e&=&format=webp&quality=lossless&width=468&height=468" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">[Swiftly] Deathmatch</h3>

  <p align="center">
    A simple plugin for swiftly that implements the basic functionality of a Deathmatch/FFA server.
    <br/>
    <br/>
    <a href="https://github.com/swiftly-solution/swiftly_deathmatch/issues">Report Bug</a>
    .
    <a href="https://github.com/swiftly-solution/swiftly_deathmatch/issues">Request Feature</a>
  </p>
</p>

![Downloads](https://img.shields.io/github/downloads/swiftly-solution/swiftly_deathmatch/total) ![Contributors](https://img.shields.io/github/contributors/swiftly-solution/swiftly_deathmatch?color=dark-green) ![Issues](https://img.shields.io/github/issues/swiftly-solution/swiftly_deathmatch) ![License](https://img.shields.io/github/license/swiftly-solution/swiftly_deathmatch) 

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

### Have ideas? 💡
Join [Swiftly Discord Server](https://swiftlycs2.net/discord)!
