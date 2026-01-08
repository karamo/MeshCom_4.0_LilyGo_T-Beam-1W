# MeshCom_4.0 for
<h1 align = "center">🌟LilyGo T-Beam-1W🌟</h1>

***Info: Start der MeshCom-FW-Tests erst nach Erhalt des Moduls ab Ende Jan.2026***  
***Vorab sind Test-FW geplant, um die einzelnen Key-Components zu testen***

### • Intention
* Anpassung/Erweiterung der [**MeshCom-FW**](https://github.com/icssw-org/MeshCom-Firmware)  für den [**LilyGo T-Beam-1W**](https://github.com/Xinyuan-LilyGO/LilyGo-LoRa-Series/blob/master/docs/en/t_beam_1w/t_beam_1w_hw.md) [**LilyGo T-Beam-1W**](https://lilygo.cc/products/t-beam-1w).  
* Hier wird eine Linksammlung zu dem **LilyGo T-Beam-1W** entstehen; und auszugsweise deutsche Übersetzungen aus den Originaldokumenten.
* Beispielprogramme zum Test der einzelnen Komponenten.
* Spezialitäten, Unterschiede und Anpassungen gegenüber den anderen FW Versionen von **MeshCom-FW** und eine **angepasste FW-Version** wird zum Download bereitgestellt.
* Dokumentation spezieller Details der **MeshCom-FW**.
* Die Diskussion, Issues u.a. können auch hier erfolgen. Ihr seid herzlichst eingeladen, hier mitzumachen.

### • ToDo-List
- [x] **Vorbereitung**: Start mit FW-Version 4.35j (fork von [**MeshCom-FW**  ](https://github.com/icssw-org/MeshCom-Firmware))
- [x] **pinning**
- [ ] **examples**
- [~] **OLED Examples** ... vorbereitet & getestet mit **T3_V1.6.1**
- [~] **SD-Card Example** `SD_Test` vorbereitet & getestet mit **T3_V1.6.1**
- [~] **LoRa Example** `RadioLib_Receive_Interrupt` vorbereitet & getestet mit **T3_V1.6.1**
- [-] **LoRa Example** `RadioLib_Transmit_Interrupt`
- [-] **GPS Examples**
- [ ] Hinzufügen zur MeshCom-FW (neue Nummerierung der Versionen)


#### • Key-Components
- [x] **SOC**: ESP32-S3-WROOM-1 N16R8 (16MB Flash (QIO 80Mhz) + 8MB QSPI PSRAM (OPI))
- [x] **Display**: 1.3" SH1106 128 x 64
- [x] **System Power**: SM8102ABC
- [ ] **LoRa RX**: SX1262 (MeshCom: 433.175 MHz BW: 250 CR: 4/6 SF: 11 SW: 0x2B Preamble: 32(8?))
- [ ] **LoRa TX-Power**: TPS562208DDCR (LDO_EN)
- [ ] **GPS**: L76K GNSS Module

### • Wie Kompilieren?
1. [Visual Studio Code](https://code.visualstudio.com/) (VSC) and [Python](https://www.python.org/) installieren.
2. In linker vertikaler Icon-Leiste **VSC Extentions** > `PlatformIO` plugin suchen und installieren.
3. anschließend VSC neu starten.
4. In linker vertikaler Icon-Leiste **PlatformIO** > PIO Home > Open > [Open Project] > zum Projektverzeichnis navigieren wo eine `platformio.ini` existiert > [Open "..."]
5. Dateien bearbeiten ...
6. Kompilieren ohne Hochladen mit ✔️ in der Statusleiste unten
7. Kompilieren + Hochladen mit ➡️ in der Statusleiste unten (bei mehreren verbundenen Boards muss u.U. zuerst noch das COM-Port in der `platformio.ini` eingestellt werden: 🔌`upload_port = COM5` )  
https://docs.platformio.org/en/latest/projectconf/sections/env/options/upload/upload_port.html#upload-port
<img width="613" height="24" alt="grafik" src="https://github.com/user-attachments/assets/6b66f2bb-28b4-4b46-869b-2069e41118a0" />

### • Wie Modul Flashen?
siehe: [firmware-upload](https://github.com/karamo/MeshCom_4.0_LilyGo_T-Beam-1W/tree/main/examples/firmware#firmware-upload)

### 📍 Pin Map
| Pin | I/O | ☑️ | Beschreibung |
| --- |---|---| ------------ |
| IO0 | I | | BUTTON_PIN = BOOT_BUTTON |
| IO1 | | | RADIO_DIO1_PIN (LoRa_DIO1) |
| IO3 | O | | RADIO_RST_PIN (LoRa_NRESET) |
| IO4 | I | | ADC_PIN = Battery Voltage sampling **VBAT**-300k1% -**IO4**- 150k1% - **GND** |
| IO5 | | | GPS_RX_PIN |
| IO6 | | | GPS_TX_PIN |
| IO7 | | | GPS_PPS_PIN |
| IO8 | | | I2C_SDA |
| IO9 | | | I2C_SCL |
| IO10 | | | SPI_CS & SDCARD_CS |
| IO11 | | | SPI_MOSI & SD_MOSI & RADIO_MOSI_PIN (LoRa) |
| IO12 | | | SPI_MISO & SD_MISO & RADIO_MISO_PIN (LoRa) |
| IO13 | | | SPI_SCK & SD_SCK & RADIO_SCLK_PIN (LoRa) |
| IO14 | I | | NTC_PIN = Fan TEMP-SAMP (**3V3** - NCP18XH103F03RB -**IO14**- 10k - **GND**) |
| IO15 | O | | RADIO_CS_PIN (LoRa) |
| IO16 | O | | GPS_EN_PIN |
| IO17 | I | | BUTTON2_PIN |
| IO18 | O | | BOARD_LED = LED3 |
| IO21 | O | | RADIO_CTRL (LoRa_CTL) |
| IO38 | | | RADIO_BUSY_PIN (LoRa_BUSY) |
| IO40 | O | | RADIO_LDO_EN (LoRa_LDO_EN) |
| IO41 | O | | FAN_CTRL |
| IO43 | O | ✔️ | TxD |
| IO44 | I | ✔️ | RxD |
| VBUS | **O** | ✔️ | +5V von USB-C |
| VBAT | **IO** | ✔️ | nom. 7,4 V (min. 5 V - max. 8,4 V = 2S LiPo)|

✔️ = über Buchsen-/Stiftleiste herausgeführt  
☑️ ✅ = frei verfügbar, über Buchsen-/Stiftleiste herausgeführt  
〰️ 🔹=  ⭕️🚫⚠️🔴🟠🟡🟢🔵🟣⚫️⚪️🟤🔷🔹
❌ = ...  
❗ = ...  

> \[!IMPORTANT]
> 
> **LDO_EN** pin is control pin inside the module:
> 
> 1. High level turns on the Radio
> 2. Low level turns off the Radio
> 
> **LoRa_CTL** pin is internal LNA power control of the module:
> 
> 1. When receiving data, set it to high level and turn on the LNA power;
> 2. When transmitting data and sleeping, set it to low level and turn off the LNA power.
>
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

***:copyright: 8.1.2026 by OE3WAS - Wolfgang***

