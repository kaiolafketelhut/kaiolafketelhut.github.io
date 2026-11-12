# OMQ - EAL163 - R.273 SATURN - Nr.27 DOCKER - DEEP DIVE!

## OMQ ist Saturn! OMQ ist EAL163! Ringe = Container, alles kreist sauber!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Docker = 1 Box, läuft überall!
Auf meinem Laptop läuft es! Bei dir nicht? Docker löst das! 1 Box = App + alle Einstellungen drin!

### Die 3 Docker-Begriffe
| Begriff | Was? | OMQ-Merksatz |
| --- | --- | --- |
| Image | Bauplan, z.B. `python:3.12` | Rezept! |
| Container | Laufende Box aus Image | Gebackener Kuchen! |
| Dockerfile | Rezept-Datei: FROM + COPY + RUN | So backst du! |

### VM vs Docker
|  | VM | Docker |
| --- | --- | --- |
| Grösse | GB, ganzes OS | MB, nur App! |
| Start | Minuten | Sekunden! |
| Merksatz | Haus bauen | Box packen! |

### OMQ-Beispiel - Dockerfile für OMQ
```dockerfile
FROM python:3.12
COPY . /app
WORKDIR /app
CMD ["python3", "-m", "http.server", "8000"]
```
Befehl: `docker build -t omq .` + `docker run -p 8000:8000 omq` = OMQ läuft überall!

### 3 Befehle merken
1. `docker ps` = Welche Boxen laufen?
2. `docker logs <name>` = Was sagt Box?
3. `docker compose up` = Alle Boxen zusammen starten!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL163 R.273 SATURN - Nr.27 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
