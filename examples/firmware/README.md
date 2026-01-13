# Firmware Upload

* **Variante 1**: aus **VSC/PlatformIO** siehe [Pkt. 7](https://github.com/karamo/MeshCom_4.0_LilyGo_T-Beam-1W#-wie-kompilieren)
* **Variante 2**: nativ mit `esptool` auf Commandozeilen-Ebene z.B. mittels .bat-Datei ...
* **Variante 3**: https://esptool.spacehuhn.com/ ❗ **Chrome-Browser** ❗
  * ESP32-S3 u.a. Module, die **keinen USB-Serial-Chip** haben, müssen vor dem **`[CONNECT]`** in den **BOOT-Loader-Modus** gebracht werden:  
  ➡️ **BOOT-Taste halten - RESET-Taste drücken und loslassen - BOOT-Taste loslassen**
  * Wenn nach **`[CONNECT]`** im Textfenster "`Couldn't sync to ESP`" auftritt, dann bedeutet das, dass der ESP32 **nicht** im BOOT-Loader-Modus war.
  * Für die verschiedenen Module gibt es dezitierte Verzeichnisse, in denen sich die FW-Dateien (`*.bin`) befinden, die im esptool lt. Bild auf richtiger Adresse ausgewählt werden müssen und anschließend **`[PROGRAM]`**
  * nach dem Flashen **RST/RESET**-Taste am Modul drücken.
  * **❗⚠️ Normaler Modus und BOOT-Loader-Modus sind auf verschiedenen COM-Ports (Windows).**
  * **❗⚠️ Die Adresse von bootloader.bin (ESP32) und bootloader-s3.bin (ESP32-S3) sind unterschiedlich.**
  * 🟢 **bei nachfolgenden FW-Updates ist nur mehr die `firmware.bin` zu flashen erforderlich.**

* **ESP32**  (`T3_V1_6_SX1278` u.ä.)  
<img width="330" height="239" alt="grafik" src="https://github.com/user-attachments/assets/70ceea55-2270-4aac-90ce-d16d2afbb64a" />

* **ESP32-S3**  (`T_BEAM_1W_433M` u.ä.)  
<img width="339" height="236" alt="grafik" src="https://github.com/user-attachments/assets/869b74d0-da1f-4b65-9130-b35545079fcb" />


