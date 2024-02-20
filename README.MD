<br/>
<p align="center">
  <a href="https://github.com/swiftly-solution/swiftly_rank">
    <img src="https://media.discordapp.net/attachments/979452783466000466/1168236894652469248/Swiftly_Logo.png?ex=6575f264&is=65637d64&hm=dd2834983bebeab98d7febd44bb3bd20e9aded13ecefac63cc990b222a9d9e9e&=&format=webp&quality=lossless&width=468&height=468" alt="Logo" width="80" height="80">
  </a>

  <h3 align="center">[Swiftly] Deathmatch</h3>

  <p align="center">
    A simple core plugin for Swiftly that implements the basic functionality of a deathmatch server.
    <br/>
    <br/>
    <a href="https://github.com/swiftly-solution/swiftly_deathmatch/issues">Report Bug</a>
    .
    <a href="https://github.com/swiftly-solution/swiftly_deathmatch/issues">Request Feature</a>
  </p>
</p>


### Installation 👀

1. Download the newest [release](https://github.com/swiftly-solution/swiftly_rank/releases).
2. Everything is drag & drop, so i think you can do it!
3. Setup database connection in `addons/swiftly/configs/databases.json` with the key `swiftly_ranks` like in the following example:
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
4. While developing the plugin, I have used a basic .cfg with only a few settigns, if you want to use the same settings as me, use the provided .cfg in the release archive. (should be placed in cfg/)
(!) Don't forget to replace the `...` with the actual values !!

### Configuring the plugin 🧐

* After installing the plugin, you should change the default prefix from: ``addons/swiftly/translations/translation.swiftly_deathmatch.json`` (optional)
* To change the value of the HP Regen, edit: ``addons/swiftly/configs/plugins/deathmatch.json``

### How does it work? 🤔

* When joining the server for the first time, a new field in the ``player_guns`` table will be added, with the ``steamid``, ``primarygun`` and the ``secondarygun`` of the player. By default, it assigns to the player AK-47 and Deagle, but they can of course change them using the commands provided by the plugin (!ak, !m4a4, !m4a1, etc)
* 

### TODO 🛡️

* Top Command.
* Rank Icons in Scoreboard.
* Chat Alert when reaching a new rank.

### Creating A Pull Request 😃

1. Fork the Project
2. Create your Feature Branch
3. Commit your Changes
4. Push to the Branch
5. Open a Pull Request

### Have ideas? 💡
Join [Swiftly Discord Server](https://swiftlycs2.net/discord)!