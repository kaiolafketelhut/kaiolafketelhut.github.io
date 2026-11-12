# OMQ - EAL164 - R.274 URANUS - Nr.28 CI/CD - DEEP DIVE!

## OMQ ist Uranus! OMQ ist EAL164! Liegt auf Seite = Liefert anders, aber liefert!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### CI/CD = Testen + Liefern automatisch!
Ohne CI/CD: Du pushst, hoffst, Seite kaputt! Mit CI/CD: Push -> Roboter testet -> Roboter liefert!

### CI vs CD
|  | CI - Integration | CD - Delivery / Deployment |
| --- | --- | --- |
| Was? | Code zusammen + Testen | Liefern + Freigeben |
| Frage | Läuft der Code? | Kommt er sicher live? |
| Merksatz | Test-Roboter! | Liefer-Roboter! |

### Pipeline - 5 Schritte
| Schritt | Was? | Bei OMQ |
| --- | --- | --- |
| 1. Push | Du pushst Code | git push |
| 2. Build | Roboter baut | Python baut MAIN.MD |
| 3. Test | Roboter testet | Links ok? Datei da? |
| 4. Deploy | Roboter liefert | GitHub Pages live! |
| 5. Check | Roboter prüft live | Seite lädt? |

### OMQ-Beispiel - GitHub Actions
```yaml
on: [push]
jobs:
  test:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v4
      - run: ls eal164/MAIN.MD
```
Das ist CI: Bei jedem Push prüft Roboter, ob MAIN.MD da ist!

### 3 Fehler vermeiden
1. **Kein Test:** Direkt live = kaputt live! Immer Test vor Deploy!
2. **Geheimnis im Code:** Passwort in Git = alle sehen es! Secrets nutzen!
3. **Riesen-Deploy:** Alles auf einmal = alles kaputt! Klein + oft deployen!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL164 R.274 URANUS - Nr.28 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
