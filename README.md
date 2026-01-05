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
- [~] **OLED Examples** vorbereitet & getestet mit T3_V1.6.1
- [ ] **SD-Card Examples** ...
- [ ] **Key-Components** beschreiben
- [ ] **SOC**: ESP32-S3-WROOM-1 N16R8 (16MB Flash + 8MB PSRAM(OPI))
- [ ] **LoRa Power**: TPS562208DDCR (LDO_EN)
- [ ] **System Power**: SM8102ABC
- [ ] **Display**: 1.3" SH1106 128 x 64
- [ ] **LoRa**: SX1262
- [ ] **GPS**: L76K GNSS Module

### • Wie Kompilieren?
1. [Visual Studio Code](https://code.visualstudio.com/) (VSC) and [Python](https://www.python.org/) installieren.
2. In linker vertikaler Icon-Leiste **VSC Extentions** > `PlatformIO` plugin suchen und installieren.
3. anschließend VSC neu starten.
4. In linker vertikaler Icon-Leiste **PlatformIO** > PIO Home > Open > [Open Project] > zum Prjektverzeichnis navigieren wo eine `platformio.ini` existiert > [Open "..."]
5. Dateien bearbeiten ...
6. Kompilieren ohne Hochladen mit ✔️ in der Statusleiste unten
7. Kompilieren + Hochladen mit ➡️ in der Statusleiste unten (bei mehreren verbundenen Boards muss u.U. zuerst noch das COM-Port in der `platformio.ini` eingestellt werden)
    


### • Wie Modul Flashen?
* Variante 1: aus VSC/PlatformIO siehe Pkt. 7 zuvor
* Variante 2: https://esptool.spacehuhn.com/ ...
* Variante 3: nativ mit `esptool` auf Commandozeilen-Ebene z.B. mittels .bat-Datei ...

### • Pinning
| Pin  | Beschreibung |
| ------------- | ------------- |
| IO0 | BUTTON_PIN = BOOT_BUTTON |
| IO1 | RADIO_DIO1_PIN (LoRa_DIO1) |
| IO3 | RADIO_RST_PIN (LoRa_NRESET) |
| IO4 | ADC_PIN = Battery Voltage sampling **VBAT**-300k1% -**IO4**- 150k1% - **GND** |
| IO5 | GPS_RX_PIN |
| IO6 | GPS_TX_PIN |
| IO7 | GPS_PPS_PIN |
| IO8 | I2C_SDA |
| IO9 | I2C_SCL |
| IO10 | SPI_CS & SDCARD_CS |
| IO11 | SPI_MOSI & SD_MOSI & RADIO_MOSI_PIN (LoRa) |
| IO12 | SPI_MISO & SD_MISO & RADIO_MISO_PIN (LoRa) |
| IO13 | SPI_SCK & SD_SCK & RADIO_SCLK_PIN (LoRa) |
| IO14 | NTC_PIN = Fan TEMP-SAMP (**3V3** - NCP18XH103F03RB -**IO14**- 10k - **GND**) |
| IO15 | RADIO_CS_PIN (LoRa) |
| IO16 | GPS_EN_PIN |
| IO17 | BUTTON2_PIN |
| IO18 | BOARD_LED = LED3 |
| IO21 | RADIO_CTRL (LoRa_CTL) |
| IO38 | RADIO_BUSY_PIN (LoRa_BUSY) |
| IO40 | RADIO_LDO_EN (LoRa_LDO_EN) |
| IO41 | FAN_CTRL |
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

