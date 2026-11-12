# OMQ - EAL170 - R.280 SUPERNOVA - Nr.34 SECURITY - DEEP DIVE!

## OMQ ist Supernova! OMQ ist EAL170! Explodiert hell - aber schützt, was wichtig ist!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Security = Zero Trust!
Alt: Drinnen = Freund! Draussen = Feind! Neu: Niemandem trauen! Immer prüfen! Auch drinnen!
**Zero Trust = Traue nie, prüfe immer!**

### Die 3 Security-Prinzipien
| Prinzip | Was? | OMQ-Beispiel |
| --- | --- | --- |
| Least Privilege | Nur so viel Recht wie nötig! | Leser darf nur lesen, nicht löschen! |
| Defense in Depth | Viele Schichten! | Passwort + 2FA + Firewall + Log! |
| Assume Breach | Denk: Hacker ist schon drin! | Was dann? Backup? Alarm? |

### OWASP Top 10 - Die 3 Wichtigsten
| # | Angriff | Schutz |
| --- | --- | --- |
| 1. Injection | `'; DROP TABLE eal; --` in Formular! | Nie String bauen! Parameter nutzen! |
| 2. Broken Access | User ändert ID=1 zu ID=2, sieht fremde Daten! | Immer prüfen: Darf dieser User das? |
| 3. Secrets | Passwort in Git! | Secrets in Vault, nie in Code! |

### OMQ-Beispiel - Dein OMQ sicher?
GitHub: 2FA an? Secrets in GitHub Secrets, nicht in MAIN.MD? `git log` zeigt kein Passwort? Dann gut!
API: Wer darf löschen? Nur Admin! Jeder Request geprüft? Dann Zero Trust!

### 3 Fehler vermeiden
1. **Kein 2FA:** Passwort geklaut = Account weg! 2FA an, immer!
2. **Alles Admin:** Jeder darf alles = 1 Klick = alles weg! Least Privilege!
3. **Kein Backup:** Ransomware? Kein Backup = alles weg! Backup + Test-Restore!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL170 R.280 SUPERNOVA - Nr.34 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
