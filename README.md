# MeshCom_4.0 for
<h1 align = "center">🌟LilyGo T-Beam-1W🌟</h1>

***Info: Start der MeshCom-FW-Tests erst nach Erhalt des Moduls ab Ende Jan.2026***  
***Vorab sind Test-FW geplant, um die einzelnen Key-Components zu testen***

### • Intention
* Anpassung/Erweiterung der [**MeshCom-FW**](https://github.com/icssw-org/MeshCom-Firmware)  für den [**LilyGo T-Beam-1W**](https://github.com/Xinyuan-LilyGO/LilyGo-LoRa-Series/blob/master/docs/en/t_beam_1w/t_beam_1w_hw.md).  
* Hier wird eine Linksammlung zu dem **LilyGo T-Beam-1W** entstehen; und auszugsweise deutsche Übersetzungen aus den Originaldokumenten.
* Beispielprogramme zum Test der einzelnen Komponenten.
* Spezialitäten, Unterschiede und Anpassungen gegenüber den anderen FW Versionen von **MeshCom-FW** und eine **angepasste FW-Version** wird zum Download bereitgestellt.
* Dokumentation spezieller Details der **MeshCom-FW**.
* Die Diskussion, Issues u.a. können auch hier erfolgen. Ihr seid herzlichst eingeladen, hier mitzumachen.

### • ToDo-List
- [x] **Vorbereitung**: Start mit FW-Version 4.35i.01.03 (fork von [**MeshCom-FW**  ](https://github.com/icssw-org/MeshCom-Firmware))
- [x] **pinning**
- [ ] **Examples** von der Xinyuan-LilyGo Seite testen
- [ ] **Key-Components** beschreiben
- [ ] **SOC**: ESP32-S3-WROOM-1 N16R8 (16MB Flash + 8MB PSRAM(OPI))
- [ ] **LoRa Power**: TPS562208DDCR (LDO_EN)
- [ ] **System Power**: SM8102ABC
- [ ] **Display**: 1.3" SH1106 128 x 64
- [ ] **LoRa**: XY16P35 (SX1262)
- [ ] **GPS**: L76K GNSS Module

### • Wie Kompilieren?
1. [Visual Studio Code](https://code.visualstudio.com/) (VSC) and [Python](https://www.python.org/) installieren.
2. In linker vertikaler Icon-Leiste **VSC Extentions** > `PlatformIO` plugin suchen und installieren.
3. anschließend VSC neu starten.
4. ...

### • Wie Modul Flashen?
* ...
* ...

### • Pinning
| Pin  | Beschreibung |
| ------------- | ------------- |
| IO0 | BOOT |
| IO1 | LoRa DIO1 |
| IO3 | LoRa NRESET |
| IO4 | Battery Voltage sampling **VBAT**-300k1% -**IO4**- 150k1% - **GND** |
| IO8 | SDA |
| IO9 | SCL |
| IO10 | SD_CS |
| IO11 | LoRa_MOSI & SD_MOSI |
| IO12 | LoRa_MISO & SD_MISO |
| IO13 | LoRa_SCK & SD_SCK |
| IO14 | Fan TEMP-SAMP (**3V3** - NCP18XH103F03RB -**IO14**- 10k - **GND**) |
| IO15 | LoRa_CS |
| IO17 | UserButton  |
| IO18 | LED3 |
| IO21 | LoRa CTL |
| IO38 | LoRa_BUSY |
| IO40 | LoRa LDO_EN |
| IO41 | FANCTRL |
| IO43 | TxD |
| IO44 | RxD |
| VBUS | von USB-C an Buchsenleiste verfügbar |
| VBAT | IN/OUT max. 7,4 V |



### • Link zu den Originaldokumenten:  
<ins>Hardware Overview:</ins>  
https://github.com/Xinyuan-LilyGO/LilyGo-LoRa-Series/blob/master/docs/en/t_beam_1w/t_beam_1w_hw.md


### • Disclaimer & Lizenz:
* **Dokumente:** Originaldokumente inkl. Links zu LilyGo und deren Lizenz
* **Texte und speziell erstellte Dokumente hier:** grundsätzlich ***:copyright: by OE3WAS - Wolfgang***
* **Sources & FW:** entsprechend der **Lizenz von** [**MeshCom-FW**  ](https://github.com/icssw-org/MeshCom-Firmware)

* Die Hardware & Software sind nach den gängigen Regeln der Technik konzipiert und erstellt. Es wurde jedoch nicht geprüft ob allfällige Normen eingehalten werden.
* Die hier angegebenen Hinweise sind lediglich eine Beschreibung einer Möglichkeit des Zusammenbaus bzw. der Firmware.
* Die Inbetriebnahme erfolgt eigenverantwortlich.
* Ich weise auf die gesetzlichen Bestimmungen bez. Elektrogeräten, Funkanlagen u.ä. hin, die von jedem Anwender selber einzuhalten sind.

***:copyright: 3.1.2026 by OE3WAS - Wolfgang***

