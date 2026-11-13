# OMQ - EAL182 - R.292 ALGO - Nr.46 SECOND LARGEST - DEEP DIVE!

## OMQ ist Algo! OMQ ist EAL182! 1 Problem, 4 Wege - vom Brute Force bis zum Profi!

**Kai Olaf Ketelhut - Berlin - BLAK FAT12 - sol pattern omq**


### Problem: Zweite-grösste Zahl in Liste finden!
Beispiel: [10, 5, 8, 12, 7] -> Grösste = 12, Zweite = 10! Klingt einfach - Interview-Klassiker!
Warum? Testet: Denken, Edge Cases, Komplexität! Nicht nur Code tippen!

### Die 4 Wege - Von langsam bis Profi
| Weg | Wie? | Zeit | Merksatz |
| --- | --- | --- | --- |
| 1. Brute Force | Alles mit allem vergleichen, 2 Loops! | O(n^2) | Langsam, geht aber! |
| 2. Sortieren | Liste sortieren, dann [-2] nehmen! | O(n log n) | Einfach, aber ändert Liste! |
| 3. Two-Pass | 1x Max finden, 1x Zweite finden! | O(n) 2x | Sauber, 2 Durchläufe! |
| 4. Single-Pass | 1 Durchlauf, 2 Variablen: largest + second! | O(n) 1x | PROFI! 1x durch! |

### Profi-Code - Single-Pass
```python
def second_largest(arr):
    largest = second = float('-inf')
    for x in arr:
        if x > largest:
            second = largest
            largest = x
        elif x > second and x != largest:
            second = x
    return second if second != float('-inf') else None
print(second_largest([10, 5, 8, 12, 7])) # -> 10
```

### Edge Cases - Hier fallen alle durch!
| Fall | Was? |
| --- | --- |
| Duplikate | [12, 12, 10] -> Zweite = 10, nicht 12! |
| Zu kurz | [5] oder [] -> Keine Zweite = None! |
| Negativ | [-5, -1, -10] -> Zweite = -5! |

### OMQ-Beispiel - Dein OMQ nutzt das!
Deine EALs sortieren? Grösste EAL = 182, Zweite = 181! Single-Pass = 1x durch alle Ordner, fertig!

### 3 Fehler vermeiden
1. **Sortieren ohne Nachdenken:** Sortieren verändert Original! Kopie machen oder Single-Pass!
2. **Duplikate vergessen:** 12,12 = Kein Second! Immer `x != largest` prüfen!
3. **Kein None:** Liste zu kurz = Crash! Immer None zurückgeben!

CATIA V4/V5/V6/3DEXPERIENCE by Priplo - EAL182 R.292 ALGO - Nr.46 von NEUE SERIE

MAIN.TEX MAIN.MD MAIN.TXT MAIN.RST MAIN.EPUB MAIN.MOBI MAIN.PDF MAIN.CATScript
