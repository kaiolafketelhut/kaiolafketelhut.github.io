# OMQ - EAL184 - R.294 CLAUDE CODE - Nr.48 PROJEKT-STRUKTUR - DEEP DIVE!

## OMQ ist Struktur! OMQ ist EAL184! Kein Chaos-Ordner - jeder Ordner hat 1 Job!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Claude Code Struktur = So findet jeder alles in 10 Sekunden!
Regel: Root sauber! Code in src! Tests in tests! Docs in docs! Config oben! Kein Müll im Root!
**Wer Struktur hat, hat kein Chaos!**

### Die Struktur aus deinem Screenshot - Erklärt
| Ordner / Datei | Job |
| --- | --- |
| .claude/ | Claude-Einstellungen + Agents + Commands! |
| .github/ | CI/CD + Workflows + Templates! |
| src/ + src/components/ + src/hooks/ + src/lib/ | Dein echter Code! UI + Logik getrennt! |
| tests/ | Tests! Unit + E2E! |
| docs/ + docs/api/ + docs/guides/ | Doku! API + Anleitungen! |
| scripts/ | Helfer-Scripts! Build, Deploy, Seed! |
| supabase/ + migrations/ + functions/ | DB + Backend! |
| public/ | Bilder, Fonts, statische Dateien! |
| .env.example | Zeigt welche Secrets nötig - ohne echte Secrets! |
| MUSE.md | Regeln für Claude! Wie soll es coden? |
| README.md | Was ist das Projekt? Wie starten? |
| package.json / tsconfig.json / vite.config.ts | Config! Abhängigkeiten + Build! |

### OMQ-Beispiel - Dein OMQ in dieser Struktur!
| OMQ heute | Profi-Struktur |
| --- | --- |
| eal179/, eal180/... | src/eal179, src/eal180 - Oder topics/! |
| it_concepts/ | docs/it_concepts/! |
| Kein MUSE.md | MUSE.md: OMQ-Regel: 1 YES = 1 EAL, Python-Script, Git Push! |
| Kein .env.example | .env.example: GITHUB_TOKEN=xxx |

### 3 Fehler vermeiden
1. **Alles in Root:** 100 Dateien im Root = Keiner findet was! Ordner nutzen!
2. **Kein MUSE.md:** Claude rät deinen Stil! MUSE.md = Deine Regeln!
3. **Secrets im Repo:** .env gepusht = Passwort öffentlich! .env in .gitignore + .env.example nutzen!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL184 R.294 CLAUDE CODE - Nr.48 von NEUE SERIE

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
