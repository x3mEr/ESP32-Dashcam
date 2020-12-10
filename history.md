**2020.12.10**

- version: 1.2.1
- upd: `framesize` and `quality` are stored in EEPROM;
- fix: error while deleteFileInDir(), if there was an empty folder on SD card befor Setup();
- fix: autodeletion of empty `curr_path`.

**2020.12.06**

- version: 1.2.0
- upd: new folder is created at booting with the name equal to the number of dashcam boot. Video files are saved in this folder;
- add: oldest file is deleted when there is no free space for a new video file.

**2020.12.05**

- version: 1.1.0
- upd: video recording variables `framesize` and `quality` are changed through the web interface - video recording params could be changed in this way, not only hardcoded.

**2020.11.24**

- version: 1.0.0
- Wi-Fi manager and video recording capabilities.