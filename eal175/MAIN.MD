# OMQ - EAL175 - R.285 RAUM - Nr.39 REFACTORING - DEEP DIVE!

## OMQ ist Raum! OMQ ist EAL175! Raum umbauen, ohne Haus abzureissen - wie Refactoring!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Refactoring = Besser machen, ohne kaputt!
Funktion bleibt gleich! Code wird besser! Aussen gleich, innen schöner!
**Refactoring = Aufräumen, ohne Möbel wegwerfen!**

### Wann Refactoring?
| Wann? | Was tun? |
| --- | --- |
| Vor Feature | Erst aufräumen, dann neues Feature! |
| Nach Bug | Bug gefunden? Code war unklar = aufräumen! |
| Code-Smell | Du riechst: Das stinkt! Lange Funktion, Duplikat! |

### Die 3 Refactoring-Tricks
| Trick | Was? | OMQ-Beispiel |
| --- | --- | --- |
| Extract Function | Lange Funktion -> kleine Funktionen! | 100 Zeilen -> 5x 20 Zeilen! |
| Rename | Schlechter Name -> klarer Name! | `x` -> `eal_nummer` |
| Remove Duplication | 3x gleich -> 1x Funktion! | 3x `open/write` -> 1x `save()` |

### OMQ-Beispiel - Sicher Refactoring
1. Test schreiben! Test grün!
2. Klein umbauen! 1 Schritt!
3. Test wieder grün? Weiter! Test rot? Zurück!
Ohne Test = Blind umbauen! Mit Test = Sicher!

### 3 Fehler vermeiden
1. **Big Bang:** Alles auf einmal umbauen = Alles kaputt! Klein + oft!
2. **Ohne Test:** Umbauen ohne Test = Hoffen! Erst Test, dann Umbau!
3. **Feature + Refactoring:** Neues Feature + Umbau zusammen = Keiner weiss, was kaputt! Getrennt!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL175 R.285 RAUM - Nr.39 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
