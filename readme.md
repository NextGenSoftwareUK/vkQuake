# Introduction

OQUAKE is a fork of [VkQuake](https://github.com/Novum/vkQuake), which is built on top of the new OGEngine (OGEngineClient, WEB4 OASIS API & WEB5 STAR API).

This will integrate with any other game built on top of the OGEngine, so far this includes ODOOM, which is also playable on Windows & Linux (OQUAKE also). Mac support is coming soon... Linux version may work with some tweaks but this has not been tested yet... any help with this would be appreciated thanks!

The OGEngineClient can be downloaded here:
https://github.com/NextGenSoftwareUK/OASIS/releases/tag/STAR-API-CLIENT-v1.0.0

Below is a link to a tech demo of what it can do in ODOOM & OQUAKE:
https://youtu.be/ZH5u6OVPVYg?si=qbz8CfXs5kgWYPSn

Below is the useful description from that video:

"Preview of the new OGEngine (OASIS Game Engine) powering ODOOM and OQUAKE (forks of UZDOOM & VkQuake) built on top of the new OGEngineClient (which talks to the WEB4 OASIS API & WEB5 STAR API) and features many advanced features such as multi-threading, batching, etc). OGEngine = OGEngineClient + WEB4 OASIS API + WEB5 STAR API and is the beginning of the true open extendable metaverse (OASIS Omniverse) featuring cross quests, cross inventory/assets, SSO, NFT minting, sending items to other avatars/clans & much more! :)

We bridged Doom and Quake using OASIS creating a “meta” game of the two. This engine abstracts mission and game state logic, offering a new dimension to open source games. This is a key milestone in our journey to building the metaverse.

People can now port any game to the OASIS Omniverse using the new generic STARAPI Client, we are porting Doom3, Duke3d, Wolfenstein, Minecraft clone, Morrowwind MMORPG clone next...

Stay tuned folks, we are only just getting started! ;-)

Read more here:

https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/Docs/OGEngine_Overview.md
https://github.com/NextGenSoftwareUK/OASIS/tree/master/OASIS%20Omniverse

The OGEngine also allows GeoHotSpot triggers to be embedded in your games either in a quest, objective or standalone. They can trigger anything you like such as playing an audio clip, video, showing text, website, scripting events, NPCs (powered by intelligent learning AI agents such as OpenServ) etc etc. There is no limit to what you can do with the new OGEngine!

We will soon also be releasing the alphas of ODOOM, OQUAKE & Our World, our geolocation AR game powered by the OGEngine that allows your cross game quests to bring the action into the real world so imagine collecting keys or powerups etc for ODOOM & OQUAKE in real life! You may even find secrets hidden in parks such as the BFG 9000 and other surprises! ;-)

An epic mission quest line spamming all 3 games as a demo of the tech is coming soon... watch this space! ;-)

We are also working on the OOS (OASIS OS) which as well as a low level kernel allowing multiple games to be loaded into memory simultaneously also contains the OASIS Omniverse HUB allowing you to instantly teleport between any location in any map in any game (both through portals in the HUB & whilst in any game) removing walled gardens and silos between games so they merge into the same game (think Ready Player One). It also has a shared HUD over everything so there is a consistent UI for your inventory, quests, friends, messages, avatar etc.

We plan to make super cyber demons and other AI monsters and NPCs powered by holonic braid with collective shared memory so they share tactics and strategies... hope your Ready for a real challenge! 😉💪 We also plan to have AI tournaments where we pit different models against each other!

The OGEngine is built on top of the powerful holonic OASIS architecture that has been in development for over 10 years featuring auto failover, auto load-balancing & auto-replication powered by the OASIS Hyperdrive so there is zero downtime and you can even play offline and re-sync when you are back online so ideal for poor to low connectivity or for traveling! If one web2 or web3 provider goes down or is slow it will automatically find the next fastest ONODE in your area independent of network! :)

The WEB4 OASIS API is an abstraction/aggreation layer over all of web2 and web3 removing walled gardens & silos and features identity, reputation, nfts, tokens, geonfts & much more!

The WEB5 STAR API is the gamification, business and metaverse layer built on top of the WEB4 OASIS API.

STAR CLI/ODK is a powerful CLI & Low/No Code Generator allowing you to build OAPPs powered by the COSMIC ORM allowing you to create, read, update, delete & list your holons (data objects) in 1 line which auto sync over all of web2 and web3, no need to learn new stacks, languages or platforms, just focus on your idea and bring them to life with zero friction or barriers! If you want to also run it on a new chain, cloud provider, db or anything else in future this is handled automatically by the OASIS, no need to have to keep porting or writing fragile bridges, we do all the heavy lifting for you!

Check out the rest of our docs in our repro and our sites below for more info!

Welcome to the future, welcome to the genesis of the true metaverse! ;-)

https://www.oasisweb4.com/
https://www.ourworldthegame.com/
https://github.com/NextGenSoftwareUK/OASIS"

The docs in here: https://github.com/NextGenSoftwareUK/OASIS/tree/master/OASIS%20Omniverse explain how to use the client, ODOOM & OQUAKE with build instructions for Windows, Linux & Mac. You can also see the ODOOM & OQUAKE examples of how to use it.

# Getting Started

1. Simply download the appropriate zip below,  unzip and then run the RUN OQUAKE script.

2. You can edit the [oasisstar.json](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/OQUAKE/build/oasisstar.json) file in the build folder to configure it including the WEB4 OASIS API & WEB5 STAR API URIs. They currently point locally so your need to run the 
[stat web4 and web5 apis](https://github.com/NextGenSoftwareUK/OASIS/blob/master/Scripts/start_web4_and_web5_apis.bat) script for windows or [this script](https://github.com/NextGenSoftwareUK/OASIS/blob/master/Scripts/start_web4_and_web5_apis.sh) for Linux/Mac in the Scripts folder in the root of the OASIS repro.

3. You also need to create an avatar in [STAR](https://github.com/NextGenSoftwareUK/OASIS/releases/tag/STAR-ODK-Runtime-v3.5.0) verify it.

   Soon you will be able to create your avatar via the OPORTAL, you can then update your [oasisstar.json](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/OQUAKE/build/oasisstar.json) config file in your build folder to:

   WEB4 OASIS API URL
   https://api.oasisweb4.one

   WEB5 STAR API
   https://star.oasisweb4.one

4. Next you may need to edit [RUN_OQUAKE.bat](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/OQuake/RUN%20OQUAKE.bat) (Windows) or [RUN_OQUAKE.sh](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/OQuake/RUN_OQUAKE.sh) (Linux/Mac) if it cannot find your Quake base/install directory for the retail copy of the game (contains the pak files etc). by default it will look in your Steam folder and a few others. If you need to edit the base path open the script and set OQUAKE_BASEDIR to wherever you have the retail copy of Quake installed (where the id1 folder and pak files are).

5. Finally you can launch OQUAKE by running the RUN OQUAKE script. 

6. Once the game has started press the ` key to open the in-game console.

7. In the console type the following to beam in:

   ````star beamin <username> <password>````

   After this it will automatically beam in every time you start OQUAKE.

8. For a full list of what every setting does in the [oasisstar.json](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/OQUAKE/build/oasisstar.json) file please read the [STAR Games User Guide](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/Docs/STAR_Games_User_Guide.md)

# A whole new paradigm of gaming awaits!

As you can see from the different settings in the [oasisstar.json](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/ODOOM/build/oasisstar.json) file you can customize very powerful settings such as the option to allow people to pick up health, Armor, ammo, powerups even when you already have max health/armor/health etc allowing you to use later on from your OASIS/STAR inventory. This unlocks a whole new dimension to play and strategy where you can choose to save them for tougher key battles either in single player or deadthmatch. 

You will also note that you can choose to stack items or unlock them (stack means for example you can keep collecting Armor, powerups etc rather than only being able to pick up once. You can also choose to mint anything you collect to make them rare collectables that can be in your trophy case, crypto wallets to show off as how many of each different monster/boss you have killed. Later your be able to deploy these as pets to fight by your side! :)

You can also choose to send anything in your inventory (weapons, ammo, Armor, health, powerups etc to your friends or clan members again unlocking a whole new paradigm of gaming and strategy. For example your clan mate could be in a fierce battle either in ODOOM, OQUAKE or another game and you can send them extra weapons, ammo, powerups, armor, health etc to help them out! This opens up another level of teamwork, strategy and long term planning. You could for example have dedicated team members whose whole job is to farm these items or you could even hire gunmen to go and grab rare items, powerups etc, the possibilities are endless! 

You could even have some quests that require co-ordination between various team mates in different games at the same time such as turning a key at the same time such as in ODOOM and OQUAKE or finding a silver key in ODOOM to open the silver door in OQUAKE and a blue keycard to open a door in ODOOM. Soon you will also be able to find keys, powerups, etc in real-life areas around you in our upcoming geo-location AR game Our World!

We are only just scratching the surface of what this new revolutionary technology unlocks! This is the beginning of the true metaverse dream so better buckle up, things are about to get real interesting! ;-)

For a full list of what every setting does in the [oasisstar.json](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/OQUAKE/build/oasisstar.json) file please read the [STAR Games User Guide](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/Docs/STAR_Games_User_Guide.md)

# Controls

Press I for inventory popup.

Press Q for Quests.

Press O to cycle Quest objectives for the active quest in the Quest Tracker. You can also hide it if you wish.

Press X to toggle showing/hiding XP.

Press C for ````Quick Use Health```` if you have any in inventory and are not already at max. Max can be configured in [oasisstar.json](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/OQUAKE/build/oasisstar.json)

Press F for ````Quick Use Armor```` if you have any in your inventory and are not already at max. Max can be configured in [oasisstar.json](https://github.com/NextGenSoftwareUK/OASIS/blob/master/OASIS%20Omniverse/OQUAKE/build/oasisstar.json)

More news & releases coming soon!
