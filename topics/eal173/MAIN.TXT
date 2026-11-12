# OMQ - EAL173 - R.283 MULTIVERSUM - Nr.37 TESTING - DEEP DIVE!

## OMQ ist Multiversum! OMQ ist EAL173! Viele Welten testen - eine Welt gewinnt!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Testing = Beweise, dass es läuft!
Ohne Test: Hoffen, dass es läuft! Mit Test: Wissen, dass es läuft! Test = Beweis!

### Die Test-Pyramide
| Stufe | Was? | Wie viele? | OMQ-Beispiel |
| --- | --- | --- | --- |
| Unit | 1 Funktion! | Viele! Schnell! | Funktion baut MAIN.MD? |
| Integration | 2 Teile zusammen! | Mittel! | MAIN.MD + index.html passen? |
| E2E | Alles, wie User! | Wenige! Langsam! | User klickt eal173, Seite lädt? |

### Die 3 Test-Arten merken
| Test | Frage | Merksatz |
| --- | --- | --- |
| Unit | Läuft diese 1 Funktion? | 1 Stein prüfen! |
| Integration | Passen 2 Steine zusammen? | 2 Steine prüfen! |
| E2E | Läuft das ganze Haus? | Haus betreten! |

### OMQ-Beispiel - 3 Tests für OMQ
```python
def test_file_exists():
    assert os.path.exists('eal173/MAIN.MD')
def test_titel():
    assert 'EAL173' in open('eal173/MAIN.MD').read()
def test_link():
    assert 'kaiolafketelhut' in open('eal173/index.html').read()
```
3 Tests grün = OMQ 173 lebt! 1 Test rot = Fixen, bevor User es sieht!

### 3 Fehler vermeiden
1. **Nur E2E:** Langsam + wackelig! Pyramide: Viele Unit, wenige E2E!
2. **Kein Test für Fix:** Bug gefixt, kein Test = Bug kommt zurück! Immer Regression-Test!
3. **Test testet nix:** Test ohne assert = Fake! Immer assert, was wichtig ist!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL173 R.283 MULTIVERSUM - Nr.37 von 42

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
