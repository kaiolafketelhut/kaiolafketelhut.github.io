# OMQ - EAL172 - R.282 UNIVERSUM - Nr.36 SCALING - DEEP DIVE!

## OMQ ist Universum! OMQ ist EAL172! Wächst immer weiter - wie gutes Scaling!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Scaling = Von 10 auf 1 Mio User!
10 User: 1 Server reicht! 1 Mio User: 1 Server tot! Scaling = Mehr Power, ohne kaputt!

### Vertical vs Horizontal
|  | Vertical - Scale Up | Horizontal - Scale Out |
| --- | --- | --- |
| Was? | Grösserer Server! | Mehr Server! |
| Merksatz | Grösserer Motor! | Mehr Autos! |
| Limit | Irgendwann Schluss! | Fast unendlich! |
| Bei OMQ | 8GB -> 32GB RAM | 1 -> 10 Pods in K8s! |

### Die 3 Scaling-Tricks
| Trick | Was? | OMQ-Beispiel |
| --- | --- | --- |
| Load Balancer | Verteilt User auf Server! | 1000 User -> 10 Server, je 100! |
| Stateless | Server merkt nix! Jeder Request allein! | Kein Login im Server-RAM! In DB / Token! |
| Sharding | Daten teilen! | EAL 1-20 auf DB1, 21-42 auf DB2! |

### OMQ-Beispiel - Dein OMQ skaliert?
GitHub Pages = Skaliert schon! CDN + Cache + Stateless = 1 Mio User, kein Problem!
Dein Code: Kein Zustand im RAM? Dann kannst du 10x kopieren! Das ist Scaling!

### 3 Fehler vermeiden
1. **State im Server:** Login im RAM = User landet auf anderem Server = ausgeloggt! Stateless!
2. **1 DB für alles:** DB tot = alles tot! Replikas + Sharding!
3. **Zu spät skalieren:** Erst bei Crash skalieren = zu spät! Auto-Scaling an!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL172 R.282 UNIVERSUM - Nr.36 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
